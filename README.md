[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-8d59dc4de5201274e310e4c54b9627a8934c3b88527886e3b421487c677d23eb.svg)](https://classroom.github.com/a/QRvmdFE6)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10758162&assignment_repo_type=AssignmentRepo)
# Week 3 - Recursion

The assignment consists of 3 problems of various difficulty on the topic - Recursion. **Solve all the problems using recursive techniques**.

## Problem 1

Given single integer $n$ (1 &#8804; $n$ &#8804; 10<sup>9</sup>). Your task is to complete the function `sum_of_digits()` that finds the sum of digits of a given number $n$. Solve the problem using **recursion only**.

**Example**
```
Input: 371
Output: 11
Explanation: 3 + 7 + 1 = 11
```

## Problem 2

Given a string $s$ consisting of **distinct** characters and of length not greater than $10$. Your task is to complete the function `power_set` that genearates and returns the power set of a given string $s$ as an `std::vector`. Solve the problem using **recursion only**.

**Note:** The power set of a string is the set of all possible subsets that can be formed from the characters of that string, including the empty subset and the full string itself.

**Example**
```
Input: "abc"
Output: ["", "a", "b", "c", "ab", "ac", "bc", "abc"]
```

## Problem 3

You are given an $n$ x $m$ integer array grid. There is a robot initially located at the top-left corner (i.e., $grid[0][0]$). The robot tries to move to the bottom-right corner (i.e., $grid[n - 1][m - 1]$). The robot can only move either **down** or **right** at any point in time.

An obstacle and space are marked as 1 or 0 respectively in grid, namely, if $obstacle[i][j]$ is 1 there is an obstacle in the cell $[i, j]$, otherwise the cell is empty. A path that the robot takes cannot include any square that is an obstacle.

Your task is to complete the `solve()` method and return the number of possible unique paths that the robot can take to reach the bottom-right corner.

**Example:**

![image](https://user-images.githubusercontent.com/129171338/229522747-4e9de755-70a4-46c2-9b85-a248418f6c66.png)

```
Input: obstacle = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right
```
