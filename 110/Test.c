#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct array_list_int
{
    int* arr;
    int size;
    int capacity;
};

typedef struct array_list_int Array_List_int;

void create_empty_Array_List_int(Array_List_int*);
void create_empty_Array_List_int_with_initial_capacity(Array_List_int*, int);
bool Array_List_int_is_empty(Array_List_int*);
void Array_List_int_add(Array_List_int*, int);
int Array_List_int_get(Array_List_int*, int);
int Array_List_int_size(Array_List_int*);
void Array_List_int_set(Array_List_int*, int, int);
void Array_List_int_add_at_index(Array_List_int*, int, int);
void Array_List_int_clear(Array_List_int*);
bool Array_List_int_contains(Array_List_int*, int);
int Array_List_int_index_of(Array_List_int*, int);
int Array_List_int_last_index_of(Array_List_int*, int);
void Array_List_int_remove(Array_List_int*, int);
void Array_List_int_remove_range(Array_List_int*, int, int);
int* Array_List_int_to_array(Array_List_int*);
void destroy_Array_List_int(Array_List_int*);

int main(void)
{
    Array_List_int a1;
    create_empty_Array_List_int(&a1);

    printf("---------------------------------------------------------------\n");

    printf(Array_List_int_is_empty(&a1) ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_add(&a1, 10);
    Array_List_int_add(&a1, 20);
    Array_List_int_add(&a1, 30);

    printf("%d\n", Array_List_int_get(&a1, 1));

    printf("---------------------------------------------------------------\n");

    printf(Array_List_int_is_empty(&a1) ? "true\n" : "false\n");

    printf("%d\n", Array_List_int_size(&a1));

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_set(&a1, 2, 40);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_add_at_index(&a1, 1, 50);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_clear(&a1);

    printf("%d\n", Array_List_int_size(&a1));

    printf("---------------------------------------------------------------\n");

    Array_List_int_add(&a1, 10);
    Array_List_int_add(&a1, 20);
    Array_List_int_add(&a1, 30);
    Array_List_int_add(&a1, 40);
    Array_List_int_add(&a1, 10);
    Array_List_int_add(&a1, 20);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf(Array_List_int_contains(&a1, 30) ? "true\n" : "false\n");

    printf(Array_List_int_contains(&a1, 50) ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("%d\n", Array_List_int_index_of(&a1, 10));

    printf("%d\n", Array_List_int_index_of(&a1, 30));

    printf("%d\n", Array_List_int_index_of(&a1, 50));

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("%d\n", Array_List_int_last_index_of(&a1, 10));

    printf("%d\n", Array_List_int_last_index_of(&a1, 30));

    printf("%d\n", Array_List_int_last_index_of(&a1, 50));

    printf("---------------------------------------------------------------\n");

    Array_List_int_remove(&a1, 3);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_remove_range(&a1, 1, 2);

    int* array = Array_List_int_to_array(&a1);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    free((void*) array);

    destroy_Array_List_int(&a1);

    return 0;
}

void create_empty_Array_List_int(Array_List_int* ptr)
{
    ptr->arr = malloc(sizeof (int));

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\ncreate_empty_Array_List_int()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;
}

void create_empty_Array_List_int_with_initial_capacity(Array_List_int* ptr,
                                                       int initial_capacity)
{
    ptr->arr = (int*) malloc(initial_capacity * sizeof (int));

    if ((void*) ptr->arr == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\ncreate_empty_Array_List_int_with_initial_capacity()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n---------------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = initial_capacity;
}

bool Array_List_int_is_empty(Array_List_int* ptr)
{
    return ptr->size == 0;
}

void Array_List_int_add(Array_List_int* ptr, int n)
{
    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nArray_List_int_add()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    (ptr->arr)[ptr->size] = n;
    ++(ptr->size);
}

int Array_List_int_get(Array_List_int* ptr, int i)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_get()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    return (ptr->arr)[i];
}

int Array_List_int_size(Array_List_int* ptr)
{
    return ptr->size;
}

void Array_List_int_set(Array_List_int* ptr, int i, int n)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_set()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    (ptr->arr)[i] = n;
}

void Array_List_int_add_at_index(Array_List_int* ptr, int i, int n)
{
    if ((i < 0) || (i > ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_add_at_index()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = (int*) realloc(ptr->arr, ptr->capacity * sizeof (int));

        if ((void*) ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nArray_List_int_add_at_index()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    for (int j = ptr->size - 1; j >= i; --j)
    {
        (ptr->arr)[j + 1] = (ptr->arr)[j];
    }

    (ptr->arr)[i] = n;
    ++(ptr->size);
}

void Array_List_int_clear(Array_List_int* ptr)
{
    ptr->arr = (int*) realloc(ptr->arr, sizeof (int));

    if ((void*) ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nArray_List_int_clear()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;
}

bool Array_List_int_contains(Array_List_int* ptr, int n)
{
    for (int i = 0; i < ptr->size; ++i)
	{
        if ((ptr->arr)[i] == n)
		{
		    return true;
        }
    }

    return false;
}

int Array_List_int_index_of(Array_List_int* ptr, int n)
{
    for (int i = 0; i < ptr->size; ++i)
    {
        if ((ptr->arr)[i] == n)
        {
            return i;
        }
    }

    return -1;
}

int Array_List_int_last_index_of(Array_List_int* ptr, int n)
{
    for (int i = ptr->size - 1; i >= 0; --i)
    {
        if ((ptr->arr)[i] == n)
        {
            return i;
        }
    }

    return -1;
}

void Array_List_int_remove(Array_List_int* ptr, int i)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_remove()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int j = i + 1; j < ptr->size; ++j)
    {
        (ptr->arr)[j - 1] = (ptr->arr)[j];
    }

    --(ptr->size);

    if (ptr->size < ptr->capacity / 2)
    {
        ptr->capacity = ptr->size + 1;
        ptr->arr = (int*) realloc(ptr->arr, ptr->capacity * sizeof (int));

        if ((void*) ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nArray_List_int_remove()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }
}

void Array_List_int_remove_range(Array_List_int* ptr, int i, int j)
{
    if ((i > j) || (i < 0) || (j >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_remove_range()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    int offset = j - i + 1;

    for (int k = j + 1; k < ptr->size; ++k)
    {
        (ptr->arr)[k - offset] = (ptr->arr)[k];
    }

    ptr->size = ptr->size - offset;

    if (ptr->size < ptr->capacity / 2)
    {
        ptr->capacity = ptr->size + 1;
        ptr->arr = (int*) realloc(ptr->arr, ptr->capacity * sizeof (int));

        if ((void*) ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nArray_List_int_remove_range()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }
}

int* Array_List_int_to_array(Array_List_int* ptr)
{
    int* array = (int*) malloc(ptr->size * sizeof (int));

    for (int i = 0; i < ptr->size; ++i)
    {
        array[i] = (ptr->arr)[i];
    }

    return array;
}

void destroy_Array_List_int(Array_List_int* ptr)
{
    free((void*) ptr->arr);
}

/*

If the alignment requirement (_Alignof) of a data type is x bytes, then every
variable of that data type will be (on almost all implementations) allocated
starting at an address which is divisible by x.

The alignment requirement of every data type is always a non-negative integral
power of 2 (i.e. 1, 2, 4, 8, 16, etc.).

////////////////////////////////////////////////////////////////////////////////

For fundamental data types (int, double, etc.), _Alignof (data type) is (on almost all
implementations) equal to sizeof (data type).

So, if _Alignof (int) == sizeof (int) == 4, then every variable of data type int
will be allocated starting at an address which is divisible by 4.

And, if _Alignof (double) == sizeof (double) == 8, then every variable of data
type double will be allocated starting at an address which is divisible by 8.

////////////////////////////////////////////////////////////////////////////////

For structures, _Alignof (T) is equal to the maximum alignment requirement of
its members.

So, for structures, _Alignof (T) is generally not equal to sizeof (T).

However, sizeof (T) must always be divisible by _Alignof (T).
This ensures that in an array of structures, every element will be allocated
starting at an address which is divisible by _Alignof (T).

////////////////////////////////////////////////////////////////////////////////

struct s
{
    int x;
    double y;
    int z;
};

_Alignof x == 4, _Alignof y == 8 and _Alignof z == 4.

So, _Alignof (struct s) == 8, since the maximum alignment requirement of its
members is 8.

This means that every variable of data type struct s will be allocated starting
at an address which is divisible by 8.

Let the starting address of a variable of data type struct s be 200.

Since _Alignof x == 4, and 200 is divisible by 4, therefore x will be allocated
at the addresses 200 to 203.

Since _Alignof y == 8, and 204 is not divisible by 8, therefore the addresses
204 to 207 will be wasted, and y will be allocated at the addresses 208 to 215.

Since _Alignof z == 4, and 216 is divisible by 4, therefore z will be allocated
at the addresses 216 to 219.

Now, since sizeof (T) must always be divisible by _Alignof (T), which is 8,
therefore the addresses 220 to 223 will be wasted.

Finally, sizeof (struct s) will be 24.

////////////////////////////////////////////////////////////////////////////////

Sometimes, rearranging the members of a structure may reduce its size.

For eg., let struct s be written in the following manner -

struct s
{
    int x;
    int z;
    double y;
};

_Alignof x == 4, _Alignof z == 4 and _Alignof y == 8.

So, _Alignof (struct s) == 8, since the maximum alignment requirement of its
members is 8.

Let the starting address of a variable of data type struct s be 200.

Since _Alignof x == 4, and 200 is divisible by 4, therefore x will be allocated
at the addresses 200 to 203.

Since _Alignof z == 4, and 204 is divisible by 4, therefore z will be allocated
at the addresses 204 to 207.

Since _Alignof y == 8, and 208 is divisible by 8, therefore y will be allocated
at the addresses 208 to 215.

Finally, sizeof (struct s) will be 16.

*/
