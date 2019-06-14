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
            with the file, abort
        2. read the words one by one, and count it
        3. display filenames and word counts.

    Compile: clang++ TMAQuestion1.cpp -o TMAQuestion1
    Execution: ./TMAQuestion1 <file1> <file2> <file...>
*/
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        clog << "error: no input file." << endl;
        return 1;
    }

    ifstream file;
    string s;
    
    for (int i = 1; i < argc; i++)
    {
        file.open(*(argv + i));
        
        if (!file.good())
        {
            clog << "error: no such file or directory: " << *(argv + i) << endl;
            continue;
        }
        
        int counter = 0;
        while (file >> s)
        {
            counter++;
        }
        
        cout << "File \"" << *(argv + i) << "\" ";
        cout << "word count: " << counter << endl;
        file.close();
    }
    
    return 0;
}
