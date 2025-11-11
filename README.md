Question 1:
This program prompts the user for two floating-point numbers, length and width, and validates that both were entered. It then computes area and perimeter, printing both results to two decimal places

Question 4:
The average should be 7.5, but the output is 7.0. Logic error at runtime, unintended integer division causing loss of fractional part. Change the int value of a and b to a double so that when you find the average, it does not get truncated.

Question 5:
The bug is calling scanf("%d", n) without using the address-of operator; scanf needs a pointer to where it should store the input. This is a format error that results in a warning and causes undefined behavior at runtime. Fix it by passing &n.

Question 7:
This program asks for a circle’s radius and computes the area and circumference twice: once using #define PI and once using a const double PIc. It then prints both results, formatted to 2 decimal places, allowing you to compare outputs from a macro constant and a typed constant.

Question 8:
global_value is declared outside any function, so it has file scope and exists for the entire program run; any function in this file can access it. local_value is declared inside main(), so it has block scope and exists only while main() is executing; other functions can’t see it unless passed as an argument. The output shows that a global and a local can coexist, but have different visibility and lifetimes.

Question 9:
This program reads two integers, computes integer division and floating-point division two ways: by explicitly casting a to double and by implicit promotion using b * 1.0, then prints the outputs..

Question 10:
This program declares one variable of each type: char, int, long int, float, and double. Then it prints their sizes using sizeof on the variables. It demonstrates the platform-specific byte sizes for each object and confirms that sizeof returns the size in bytes.Question 11: Takes the input of two integers, then prints the output of the mathematical operation processes: addition, subtraction, multiplication, division, and remainder.

Question 12: 
The bug is that the + operator has higher precedence than <<, so 'res = a + b << 1' will compute a + b first, resulting in 16 rather than the intended 11.
Fix 1) Parentheses to shift b first: res = a + (b << 1); //5 + (3<<1) = 11
Fix 2) Arithmetic equivalent: res = a + b * 2; //5 + 3*2 = 11

Question 13:
This program reads an integer and uses logical operators to test if it’s divisible by 2 and 3 but not by 7. It prints “YES” if the condition holds and “NO” otherwise.

Question 14:
Takes an integer input and uses a nested conditional operator to classify it as positive, negative, or zero in a single expression (no if/else). It prints "n is <label>" based on the result.

Question 15:
Input five marks and evaluates one boolean expression: (m1>=40)&&(m2>=40)&&(m3>=40)&&(m4>=40)&&(m5>=40). It prints PASS only if all five comparisons are true; otherwise, it prints FAIL.

Question 16:
Takes an integer input and then prints whether it is positive, negative, or zero using
if else-if else.

Question 17:
This method uses an if-else grading system: A (≥ 90), B (80–89), C (70–79), D (60–69), F (< 60). Using user input of an integer and then printing only the letter grade.

Question 18:
Code takes an arithmetic equation using a and b and outputs the product. With an error statement if b is equal to zero, and an error if the operator is not included.

Question 19:
Enter a positive integer, and the code will print the sum of 1 to n using a while loop.

Question 20:
The program repeatedly reads integers in a do { ... } while (...) loop and keeps a counter of how many non-zero values the user entered. When the user finally enters 0, the loop stops and it prints how many numbers were entered (not counting the 0).

Question 21:
Prints a star pyramid of n rows using nested for loops, where row i contains i stars separated by spaces (matches the sample: *, * *, …).

Question 22:
Reads a non-negative integer and uses a while loop to build its reverse by repeatedly taking the last digit and appending it; prints both the input and the reversed value.

Question 23:
Uses a do-while loop to read integers until 0; counts positives, negatives, evens, and odds, excluding the terminating zero, then prints the tallies.

Question 24:
Iterates 1–50, skipping multiples of 5 with continue and stopping entirely at 40 with break; prints each shown number and a final total count.

Question 25:
Prints multiplication tables for every number from L to R, each from ×1 to ×10, with a blank line separating tables.
