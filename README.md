# Exception Handling for Detecting Input String vs. Int

## Challenge Description

In this C++ challenge, I was required to modify an existing program that reads a list of single-word first names and ages and increments the age. The program should handle exceptions when the age input is a string rather than an integer. Specifically, I had to catch ios_base::failure exceptions and output a default age of 0 for any invalid input.

## Input

The program reads a list of lines with a first name and an age. The input is terminated with a line containing only `-1`.

#### Example Input:

```
Lee 18
Lua 21
Mary Beth 19
Stu 33
-1

```

## Output

The program outputs the modified list of names and ages, where the age is incremented by 1 for valid integer inputs. For invalid inputs (where the age is a string), it outputs the name followed by 0.

#### Example Output:

```
Lee 19
Lua 22
Mary 0
Stu 34

```

## Implementation

I implemented the solution for this challenge in order of:

1. Start by reading input lines until you encounter a line that contains only -1.

2. For each input line, parse it to extract the first name and age.

3. Use a try/catch statement to catch ios_base::failure exceptions, which are thrown when attempting to read an integer from a string input.

4. Inside the catch block, set the age to 0.

5. Increment the age by 1 for valid integer inputs.

6. Output the name and age in the desired format.

7. Continue with the next line until you encounter the termination condition.
