# COMP306TMA1
Athabasca University COMP306 Tutor-marked Assignment 1

## Overview
TMA1 requires you to write FIVE C++ programs and ONE makefile using the 
information you have studied in Units 1-3.

## C++ Programs
1. Write a program that opens a file and counts the whitespace-separated words in that file.

2. Write a program that opens a (text) file, and displays the contents of that file one line at a time. After a line has been displayed, the program should wait for the user to press the enter key before displaying the next line in the file.

3. Write a program that creates three `vector<float>` objects. Fill the first two objects with 25 floating-point numbers using a  `for`  loop as follows:
    1. fill the first vector object with the loop counter value;
    2. fill the second vector object with the loop counter value squared;
    3. finally, write a  `for`  loop that adds the corresponding elements in the first two `vector`s, and puts the result in the corresponding element of the third `vector`.

    Display all three vectors using the format *“for counter; element + element = element”*.

4. Write a program that uses two nested `for` loops and the modulus operator (**%**) to detect and print the prime numbers from 1 to 10,000. Prime numbers are integral numbers that are not evenly divisible by any other numbers except for themselves and one. Display all the primes found.

5. Write a program that creates an array of 100 `string` objects. Fill the array by having your program open a (text) file, and read one line of the file into each string until you have filled the array. Display the array using the format *“line #: `<string>`”*, where # is the actual line number (you can use the array counter for this value), and `<string>` is the stored string.

6. Create a `makefile` for one of the exercises in this TMA (your choice) that allows the user to type `make` for a production build of the program, and `make debug` for a build of the program that includes debugging information.