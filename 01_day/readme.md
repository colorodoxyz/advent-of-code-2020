#Day 1 Solutions
##Expense Reports
###Part 1 Problem
Given a list of 200 positive integers as input, input.txt, find the multiple of two distinct values which sum to 2020
###Part 1 Solution
>!Build an array of bits sized to 2020. For each value read, mark the bit at the index of that array as 1, otherwise default to 0. Keep a copy of all integers being read in. Parse through the list of integers read and check the bit in the bit array at index 2020-val. If it is true, multiply the 2 values together. O(n) Time Complexity.
###Part 2 Problem
With the same input, find the multiple of three distinct values which sum to 2020
###Part 2 Solution
>!Similar to the part 1 solution. However, repeat the algorithm for each initial 2020-val to find the 3rd value. O(n^2) Time Complexity.
