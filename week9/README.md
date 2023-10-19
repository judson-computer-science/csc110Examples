# Week 9 Coding Challenges

## Part 1
Starter code is provided in `arrays.c` containing a prototype for a function called `double_and_print()` that you must implement.  The function takes an array of integers, iterates over their values multiplying each by 2, and then prints the new values.

Perform the following steps:

1. Define an integer array in `main()`, initialize its values then iterate over it printing the values out.
2. Create the implementation of the `double_and_print()` function as described above.
3. Pass the array to `double_and_print()`
4. From `main()` iterate over the array again printing its values. **What do you notice about the values of the array before and after the function is called?**
5. Define a static variable inside `double_and_print()`.  Initialize its value to 0 and then increment it for every odd value that is encountered in the array (before doubling)
6. Before returning from `double_and_print()`, print out the total number of odd values encountered
7. Create another integer array in `main()` containing different values.  Pass that array to `double_and_print()`. **What do you observe about the number of odd values that was printed?**


## Part 2
Starter code is provided in `family.c` for the coding challenge below

1. Define a `Person` structure with `name` and `age` attributes.
2. Define a `Family` structure with an array of `Person` structures.
3. Create 5 instances of the `Person` structure and add them to an instance of the `Family` structure.
4. Provide implementations for the function prototypes provided.  The `count_names_starting_with()` function should count the number of `Person` structures with a name that starts with the prefix (as string) provided as the first parameters (the count should be returned).  The `sum_of_ages()` function should iterate over the `Person` structures returning the sum of all ages.
5. Keep track of the number of function calls made using a global variable.
6. Create a function prototype AND implementation of a function to print the family member information (the first 2 lines of output below plus a newline)
7. Call the functions you created from `main()` to produce the output below.

~~~~~
Family Members:
Max (25), Farrah (20), Michael (30), Michelle (27), Frank (45)

There are 2 words starting with Mi
There are 3 words starting with M
The sum of all ages is 147
There were 4 function calls made
~~~~~
