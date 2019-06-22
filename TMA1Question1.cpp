//: TMA1Question1.cpp

/* 
    Title: TMA1Question1.cpp
    Description: 
        A program that opens a file and counts the whitespace-separated
        words in that file.
    Date: June 09, 2019
    Author: Tommy Wu
*/

/*
    DOCUMENTATION

    Program Purpose:
        1. open files that passed from parameters, if there are something wrong
            with the file, print error to buffered stderr then abort
        2. read the words one by one, and count it
        3. display filenames and word counts.

    Compile: clang++ TMA1Question1.cpp -o TMA1Question1
    Execution: ./TMA1Question1 <file1> <file2> <file...>
*/

/*
    TEST PLAN

    nornal case:
        > ./TMA1Question1 GoodFile1.txt GoodFile2.txt
        File "GoodFile1.txt", word count: 233
        File "GoodFile2.txt", word count: 666

    Bad case 1:
        > ./TMA1Question1 GoodFile1.txt nonexist.txt
        File "GoodFile1.txt", word count: 233
        error: no such file or directory: nonexist.txt

    Bad case 2:
        > ./TMA1Question1 nonexist.txt GoodFile1.txt
        error: no such file or directory: nonexist.txt
        File "GoodFile1.txt", word count: 233

    Bad case 3:
        > ./TMA1Question2 SpaceOnly.txt ZeroLength.txt
        File "SpaceOnly.txt", word count: 0
        File "ZeroLength.txt", word count: 0

    Bad case 4:
        > ./TMA1Question1
        error: no input file.

    Bad case 5:
        > ./TMA1Question1 NonEnglishScript.txt
        File "NonEnglishScript.txt", word count: 6

    Bad case 6: 
        > ./TMA1Question1 SpaceOnly.txt
        File "SpaceOnly.txt", word count: 0

    Discussion:
        This program will works properly on plain text files that does not 
        contain non-space separated language(eg. Chinese or Japanese).
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
        
        int counter = 0;
        while (file >> s)
        {
            counter++;
        }
        
        cout << "File \"" << *(argv + i) << "\", ";
        cout << "word count: " << counter << endl;
        file.close();
    }
    
    return 0;
} ///:~