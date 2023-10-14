/*

In C, the statement int* ptr = (int*) malloc(sizeof (int)); creates an unnamed
integer variable with initial garbage value on the heap and assigns its address
to a pointer-to-integer variable called ptr on the stack.
*ptr becomes the name of the integer variable on the heap.

Similarly, in Java, the statement Integer ref = new Integer(10); creates an
unnamed integer variable with initial value of 10 on the heap and assigns its
address to a reference-to-integer variable called ref on the stack.

new Integer(10) has been deprecated.
So, Integer.valueOf(10) should be used instead of new Integer(10).

In C, *ptr = 20; assigns the value of 20 to the integer variable on the heap.
But, in Java, ref = 20; doesn't assign the value of 20 the integer variable on
the heap.
Instead, a new unnamed integer variable is created with initial value of 20 on
the heap and its address is assigned to ref.
The previous integer variable on the heap is destroyed.

So,
1. ref = 20; is converted to ref = Integer.valueOf(20);
2. ref = sc.nextInt(); is converted to ref = Integer.valueOf(sc.nextInt());
and so on.
This process is known as autoboxing.

In other situations when we use ref, then Java automatically understands that we
mean the integer variable on the heap.
For eg.,
1. System.out.println(ref); prints the value of the integer variable on the
   heap.
2. ref + 2 adds the value of the integer variable on the heap to 2.
3. ref / 10 divides the value of the integer variable on the heap by 10.
4. ++ref becomes ref = ref + 1. So, the value of the integer variable on the
   heap is added to 1 and a new unnamed integer variable is created with initial
   value of sum on the heap and its address is assigned to ref.
and so on.

*/
