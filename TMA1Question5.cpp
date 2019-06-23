//: TMA1Question5.cpp

/* 
    Title: TMA1Question5.cpp
    Description: 
        A program that open given files and display these files line by line 
        with line number, up to 100 lines.
    Date: June 22, 2019
    Author: Tommy Wu
*/

/*
    DOCUMENTATION

    Program Purpose:
        1. open files that passed from parameters, if there are something wrong
            with the file, print error to buffered stderr then abort
        2. read the words line by line into a string array
        3. print the string array to stdout

    Compile: clang++ TMA1Question5.cpp -o TMA1Question5
    Execution: ./TMAQuestion5 <file1> <file2> <file...>
*/

/*
    TEST PLAN

    normal case:
        > ./TMA1Question5 GoodFile1.txt GoodFile2.txt
        File "GoodFile1.txt":
        // ***file content***
        File "GoodFile2.txt":
        // ***file content***

    Bad case 1:
        > ./TMA1Question5 GoodFile1.txt nonexist.txt
        File "GoodFile1.txt":
        // ***file content with line numbers***
        error: no such file or directory: nonexist.txt

    Bad case 2:
        > ./TMA1Question5 nonexist.txt GoodFile1.txt
        error: no such file or directory: nonexist.txt
        File "GoodFile1.txt":
        // ***file content with line numbers***

    Bad case 3:
        > ./TMA1Question5 SpaceOnly.txt ZeroLength.txt
        File "SpaceOnly.txt":
        // lines of spaces with line numbers
        File "ZeroLength.txt":

    Bad case 4:
        > ./TMA1Question5
        error: no input file.

    Bad case 5:
        > ./TMA1Question5 NonEnglishScript.txt
        File "NonEnglishScript.txt":
        // ***file content with line numbers***

    Bad case 6: 
        > ./TMA1Question5 SpaceOnly.txt
        File "SpaceOnly.txt":
        // lines of spaces with line numbers

    Discussion:
        This program will works properly on plain text files.
        These example files can be found in Q1Test folder.
        These tests are included in test.sh
*/

#include <string>
#include <iostream>
#include <fstream>

using namespace std;



int main(int argc, char const *argv[])
{
    // if no filename given in parameter
    if (argc == 1)
    {
        clog << "error: no input file." << endl;
        return 1;
    }

    const int LINES_LIMIT = 100;
    ifstream file;
    string s[LINES_LIMIT];
    int length;


    // for every file given in the parameter
    for (int i = 1; i < argc; i++)
    {
        file.open(*(argv + i));
        

        // if there are something wrong with the file
        if (!file.good())
        {
            clog << "error: no such file or directory: " << *(argv + i) << endl;
            continue;             // skip it
        }

        // print file name
        cout << "File \"" << *(argv + i) << "\": " << endl;
        
        // read lines into string array
        for (length = 0; length < LINES_LIMIT; length++)
        {
            if (!getline(file, s[length])) 
            {
                break;
            }
        }
        
        // print it out with line numbers
        for (int j = 0; j < length; j++)
        {
            cout << "line " << j + 1 <<  ": " << s[j] << endl;
        }


        cout << endl << endl;
        file.close();
    }
    
    return 0;
} ///:~