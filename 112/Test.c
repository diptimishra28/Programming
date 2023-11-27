#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct string
{
    char* arr;
    int size;
    int capacity;
};

typedef struct string String;

void String_create_empty(String*);
void String_assign_using_null_terminated_array_of_char(String*, const char*);
void String_print(String*);
void String_assign_using_String(String*, String*);
void String_add_using_char(String*, char);
void String_add_at_index_using_char(String*, int, char);
void String_add_using_String(String*, String*);
void String_assign_using_user_input(String*);
void String_destroy(String*);

int main(void)
{
    printf("---------------------------------------------------------------\n");

    String s1;
    String_create_empty(&s1);

    String_assign_using_null_terminated_array_of_char(&s1, "hello");

    String_print(&s1);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String s2;
    String_create_empty(&s2);

    String_assign_using_String(&s2, &s1);
    String_add_using_char(&s2, '!');

    String_print(&s2);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String_add_at_index_using_char(&s2, 5, ' ');

    String_print(&s2);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String_destroy(&s1);
    String_destroy(&s2);

    return 0;
}

void String_create_empty(String* ptr)
{
    ptr->arr = malloc(sizeof (char));

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nString_create_empty()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;
}

void String_assign_using_null_terminated_array_of_char(String* ptr_dst,
                                                       const char* s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        ++length;
    }

    ptr_dst->size = length;

    ptr_dst->capacity = (length == 0) ? 1 : length;
    ptr_dst->arr = realloc(ptr_dst->arr, ptr_dst->capacity * sizeof (char));

    if (ptr_dst->arr == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\nString_assign_using_null_terminated_array_of_char()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n---------------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; ++i)
    {
        (ptr_dst->arr)[i] = s[i];
    }
}

void String_print(String* ptr)
{
    for (int i = 0; i < ptr->size; ++i)
    {
        putchar((ptr->arr)[i]);
    }
}

void String_assign_using_String(String* ptr_dst, String* ptr_src)
{
    ptr_dst->size = ptr_src->size;

    ptr_dst->capacity = (ptr_dst->size == 0) ? 1 : ptr_dst->size;
    ptr_dst->arr = realloc(ptr_dst->arr, ptr_dst->capacity * sizeof (char));

    if (ptr_dst->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nString_assign_using_String()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < ptr_dst->size; ++i)
    {
        (ptr_dst->arr)[i] = (ptr_src->arr)[i];
    }
}

void String_add_using_char(String* ptr, char c)
{
    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (char));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nString_add_using_char()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    (ptr->arr)[ptr->size] = c;
    ++(ptr->size);
}

void String_add_at_index_using_char(String* ptr, int i, char c)
{
}

void String_destroy(String* ptr)
{
    free(ptr->arr);
}



