## About project
This code printing the nth index of an ingeter without converting it to an char. You must give the argument as order.
Example:
````
Input: ./a.out 123 1
Output: 2
````
````
Input: ./a.out -123 1
Output: -1
````
````
Input: ./a.out 2 1
Output: -1
````
````
Input: ./a.out 42 0
Output: 4
````

## Algorithm
- first i take the step of integer by ``full_len()`` function
- then decresing it for abele to use 0. index
- after putting number to a while loop for dividing to ten on a time
- until control variable +1 reach the sum of integer's step count and n number's value (which is our requested index)
- when it reachs program return the mod of ten of divided number

#### Important
This code is only for positive (+) numbers.
