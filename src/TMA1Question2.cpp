//: TMA1Question2.cpp

/* 
    Title: TMA1Question2.cpp
    Description: 
        A program that open given files and display these files line by line.
    Date: June 20, 2019
    Author: Tommy Wu
*/

/*
    DOCUMENTATION

    Program Purpose:
        1. open files that passed from parameters, if there are something wrong
            with the file, print error to buffered stderr then abort
        2. read the words line by line, and print it out to stdout

    Compile: clang++ TMA1Question2.cpp -o TMA1Question2
    Execution: ./TMA1Question2 <file1> <file2> <file...>
*/

/*
    TEST PLAN

    nornal case:
        > ./TMA1Question2 GoodFile1.txt GoodFile2.txt
        File "GoodFile1.txt":
        // ***file content***
        File "GoodFile2.txt":
        // ***file content***

    Bad case 1:
        > ./TMA1Question2 GoodFile1.txt nonexist.txt
        File "GoodFile1.txt":
        // ***file content***
        error: no such file or directory: nonexist.txt

    Bad case 2:
        > ./TMA1Question2 nonexist.txt GoodFile1.txt
        error: no such file or directory: nonexist.txt
        File "GoodFile1.txt":
        // ***file content***

    Bad case 3:
        > ./TMA1Question2 SpaceOnly.txt ZeroLength.txt
        File "SpaceOnly.txt":
        // lines of spaces
        File "ZeroLength.txt":

    Bad case 4:
        > ./TMA1Question2
        error: no input file.

    Bad case 5:
        > ./TMA1Question2 NonEnglishScript.txt
        File "NonEnglishScript.txt":
        // ***file content***

    Bad case 6: 
        > ./TMA1Question2 SpaceOnly.txt
        File "SpaceOnly.txt":
        // lines of spaces

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

    ifstream file;
    string s;
    
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

        cout << "File \"" << *(argv + i) << "\": " << endl;
        
        while (getline(file, s))
        {
            cout << s;            // print
            cin.get();            // get enter
        }
        
        cout << endl << endl;
        file.close();
    }
    
    return 0;
} ///:~