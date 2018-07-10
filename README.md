# Longest Increasing Subsequence
The longest increasing subsequence problem is to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest to highest, and in which the subsequence is as long as possible. The longest increasing subsequence problem is solvable in time O(n log n). (by Wikipedia). 

This solution in time O(n^2).

Full information in this URL:
[Wikipedia](https://en.wikipedia.org/wiki/Longest_increasing_subsequence)

Here is good video that I used to learn this Dynamic Programming case:
[YouTube](https://www.youtube.com/watch?v=E6us4nmXTHs)

List of versions to LIS:
1. ```int lis_long(int arr[], int n);```: Output: Length. More prints: Index, array, length, subsequense, final LIS.
2. ```int lis_short(int arr[], int n);```: Output: Length. 
3. ```int lis_short_no_comments(int arr[], int n);```: Output: Length. More prints: Runtime table for every iteration.

<b>Attention</b>: The program get an array of different(!) numbers as input.

The program is very easy to use.

1. You can change in the main function, the array you want as input.
2. Call to exist function from the list. (The variable n (array length) need to be declared).
4. Run the application.
3. Get the output for your input (LIS).

Have fun :-)
