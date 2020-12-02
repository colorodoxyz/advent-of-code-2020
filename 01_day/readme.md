<h1>Day 1 Solutions</h1>
<h2>Expense Reports</h2>
<h3><font color="red">Don't read unless you want bad solutions spoiled to you!</font></h3>
<h4>Part 1 Problem</h4>
<p>Given a list of 200 positive integers as input, input.txt, find the multiple of two distinct values which sum to 2020</p>
<h4>Part 1 Solution</h4>
<span>Build an array of bits sized to 2020. For each value read, mark the bit at the index of that array as 1, otherwise default to 0. Keep a copy of all integers being read in. Parse through the list of integers read and check the bit in the bit array at index 2020-val. If it is true, multiply the 2 values together. O(n) Time Complexity.</span>
<h4>Part 2 Problem</h4>
<p>With the same input, find the multiple of three distinct values which sum to 2020</p>
<h4>Part 2 Solution</h4>
<span>Similar to the part 1 solution. However, repeat the algorithm for each initial 2020-val to find the 3rd value. O(n^2) Time Complexity.</span>
