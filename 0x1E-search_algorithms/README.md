# Project: 0x1E. C - Search Algorithms

## Resources

#### Read or watch:

* [Search algorithm](https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw)
* [Space complexity (1)](https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g)
* [Serach Algorithms video playlist](https://intranet.alxswe.com/rltoken/_4-JUPlg6lfKZO2YPHCA7g)
## Learning Objectives

### General

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
* In the following examples, the main.c files are shown as examples. 
* You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called search_algos.h
* Don’t forget to push your header file
* All your header files should be include guarded
## Tasks

### 0. Linear search
#### Write a function that searches for a value in an array of integers using the Linear search algorithm
* Prototype : int linear_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* If value is not present in array or if array is NULL, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

### 1. Binary search
#### Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
* Prototype : int binary_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* You can assume that value won’t appear more than once in array
* If value is not present in array or if array is NULL, your function must return -1
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

### 2. Big O #0
#### What is the time complexity (worst case) of a linear search in an array of size n?

### 3. Big O #1
#### What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

### 4. Big O #2
#### What is the time complexity (worst case) of a binary search in an array of size n?

### 5. Big O #3
#### What is the space complexity (worst case) of a binary search in an array of size n?

### 6. Big O #4
#### What is the space complexity of this function / algorithm?

### 7. Jump search
#### Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
* Prototype : int jump_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* You have to use the square root of the size of the array as the jump step.
* You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
* Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)

### 8. Big O #5
#### What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

### 9. Interpolation search
#### Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
* Prototype : int interpolation_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* To determine the probe position, you can use : size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

### 10. Exponential search
#### Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm
* Prototype : int exponential_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* You have to use powers of 2 as exponential ranges to search in your array
* Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
* Once you’ve found the good range, you need to use a binary search:
* Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)

### 11. Advanced binary search
#### You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). 
#### In this exercise, you’ll have to solve this problem.
#### Write a function that searches for a value in a sorted array of integers.
* Prototype : int advanced_binary(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
* You have to use recursion. You may only use one loop (while, for, do while, etc.) in order to print the array

### 12. Jump search in a singly linked list
#### You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.
#### Please define the following data structure in your search_algos.h header file:
#### Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
* Prototype : listint_t *jump_list(listint_t *list, size_t size, int value);
* Where list is a pointer to the head of the list to search in
* size is the number of nodes in list
* And value is the value to search for
* Your function must return a pointer to the first node where value is located
* You can assume that list will be sorted in ascending order
* If value is not present in head or if head is NULL, your function must return NULL
* You have to use the square root of the size of the list as the jump step.
* You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
* Every time you compare a value in the list to the value you are searching, you have to print this value (see example)
* NOTE: You can find here the functions used in the example. You don’t need to push them, we will compile your file with our own implementation during the correction.

### 13. Linear search in a skip list
#### As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. 
#### A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. 
#### A linked list with an express lane is called a skip list. This change does not come without consequences. 
#### Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t) (see example below).

#### Please define the following data structure in your search_algos.h header file:
#### Write a function that searches for a value in a sorted skip list of integers.
* Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
* Where list is a pointer to the head of the skip list to search in
* A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
* And value is the value to search for
* You can assume that list will be sorted in ascending order
* Your function must return a pointer on the first node where value is located
* If value is not present in list or if head is NULL, your function must return NULL
* Every time you compare a value in the list to the value you are searching, you have to print this value (see example below)
* NOTE: You can find here the functions used in the example. You don’t need to push them, we will compile your file with our own implementation during the correction.

### 14. Big O #6
#### What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?

### 15. Big O #7
#### What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?

## Tasks per Files
| Task | File |
| ---- | ---- |
| 0. Linear search | [0-linear.c](./0-linear.c) |
| 1. Binary search | [1-binary.c](./1-binary.c) |
| 2. Big O #0 | [2-O](./2-O) |
| 3. Big O #1 | [3-O](./3-O) |
| 4. Big O #2 | [4-O](./4-O) |
| 5. Big O #3 | [5-O](./5-O) |
| 6. Big O #4 | [6-O](./6-O) |
| 7. Jump search | [100-jump.c](./100-jump.c) |
| 8. Big O #5 | [101-O](./101-O) |
| 9. Interpolation search | [102-interpolation.c](./102-interpolation.c) |
| 10. Exponential search | [103-exponential.c](./103-exponential.c) |
| 11. Advanced binary search | [104-advanced_binary.c](./104-advanced_binary.c) |
| 12. Jump search in a singly linked list | [105-jump_list.c](./105-jump_list.c) |
| 13. Linear search in a skip list | [106-linear_skip.c](./106-linear_skip.c) |
| 14. Big O #6 | [107-O](./107-O) |
| 15. Big O #7 | [108-O](./108-O) |

## Author's: Mekonen Abera

