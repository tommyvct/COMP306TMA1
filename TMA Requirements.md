# Tutor Marked Assignment Requirements

Tutor Marked Assignments (TMAs) are assignments that you write after having completed specific units in COMP306. As these TMAs comprise 70% of your final course mark, the information in this document will help you obtain the best possible mark.



## Requirements for C++ Programs

When you are asked to write a C++ program, you must write a complete program that compiles and runs, as well as solves the particular programming task required. At no time will you be asked (or allowed) to submit incomplete programs or 'code fragments'.

All C++ programs must be complete. If a program requires multiple source files, then they must all be included in the submission zip file. If the program requires source files supplied by the textbook, then you must include them in the submission zip file.

Programs must compile correctly, run with the specified compiler for the course (GNU C++), and be fully tested prior to submission. For all C++ programs, makefiles are optional but welcome.

All C++ programs must compile from a single working directory.

All C++ programs must include proper and complete documentation. Documentation for these programs must be contained in a block of comments at the beginning of the program, including your name, student ID #, and the date. Refer to GoodDocs.cpp for the required documentation format for this course.

All C++ programs must also contain a complete test plan (see below) as part of the documentation. Test plans must be contained in a block of comments at the beginning of the program, just below the main documentation comment block. Refer to GoodDocs.cpp for the required test plan format for this course.

You may not, under any circumstances, use any IDE development tools (code generators) when writing your programs. All code must be "hand-written" using the techniques explored in this course.

No matter what the program requirements, the main entry point for the program should be contained in a source file named according to the following the format: TMA#Question# (e.g., TMA1Question1.cpp). No other naming convention is allowed. If you do not follow this convention, you will have to resubmit your program(s).

Submit only the source files. Do not submit compiled code.



## Deliverables

Submit all source code files combined into a single ZIP (.zip) or GZIP (.gz) file. Do not use the RAR (.rar) format.

Submit only C++ source code files (.cpp, .h) and makefiles (if present).

DO NOT submit binary files (.obj, .exe), project files, etc.

The zip file must unzip into a single working directory containing all of the source files required by the assignment.

DO NOT place each program into it's own directory (i.e. ./program1, ./program2, etc.). If you do, you will be required to resubmit your TMA in the proper format.

Name the program (both class and source file) according to the following the format: TMA#Question# (i.e. TMA1Question1.cpp). No other naming convention is allowed. If you do not follow this convention, you will have to resubmit your program(s).



## Marking Scheme

**Note:**
 - If your program does not compile, you will receive a mark of "0" for that exercise.
 - If you use a code generator to develop your code, you will receive a mark of "0" for the entire TMA. Use of a code generator is considered cheating in the context of this course.

Program compiles without errors:	20%

Correct program execution:      	20%

C++ program correctness and style:	20%

Program documentation:          	20%

Test plan:                      	20%

**TOTAL:**                         	100%



## Notes on Test Plans

Testing a program is a complex process. You cannot compile a program and assume it works as intended, simply because there are no compiler errors. You must also test the program’s functionality to ensure it will work under a variety of conditions.

At a minimum, you must test:

 - **Normal data** - Provide a number of sets of 'standard' inputs, for which you have calculated the output. Ensure the output matches the calculated values.

 - **Abnormal data** - How does a numeric program handle invalid input such as 'q'? Does your program handle division by zero correctly? Does your program behave gracefully if a file is not found, or the network goes down? Test a variety of error conditions.

 - **Limiting conditions** - How does your program handle limit conditions, such as 100%, 0, NAN (not a number), very small or very large numbers? Determine the limits of your algorithm and test these conditions.

Your test plan should be in a comment block following the method and variable block (using /* ... */ comments) that describes the above, specifically as it applies to your program. You should discuss testing of your program in general. You should also discuss the limit conditions on your program. Finally, you should supply the data and results from no fewer than 5 actual tests you have run on your program. This should include at least 3 valid data runs, 1 limit test, and 1 invalid input.

Refer to GoodDocs.cpp for the required test plan format for this course.



## Plagiarism

COMP306 is a programming course, so I expect you to collaborate on any and all aspects of this course, including the assignments (however, NOT the final exam - you must complete this entirely on your own!).

Consequently, I encourage you to share ideas, designs, and even code fragments on the course conference. However, in the end, each assignment must still represent your own work. Do not share completed assignments with one another.

The rule on plagiarism is: "If I cannot tell the difference between your work and the work of another, then it is plagiarism and will be punished." This does not just mean within students in this course, but anywhere, including the internet.

Here are some explicit guidelines for programs and essays that you will submit as part of your assignments (and final exam).



## Programs
It is perfectly acceptable to write a program based on code from another source. This is how most professional programmers work, so you should be able to do the same.

For example, many programs in this course specifically ask you to modify one of the examples from the textbook. Other exercises seem very similar to existing code provided by the textbook. In both cases, you are free to use the textbook's code as the starting point for your own program. Simply place a comment near the beginning of the program which states "Based on program XXX.cpp by Bruce Eckel, chapter xx".