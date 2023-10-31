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
