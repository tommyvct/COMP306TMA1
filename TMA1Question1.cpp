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

    Classes: 
        1. WordCounter: a class to open the file and count the words.

*/
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



class WordCounter
{
    private:
        string s;          // temp string to store words
        ifstream file;     // file holder
        int counter;       // words counter
    public:
        WordCounter(const char *__s);    // constructor for this class
        int numWords();                  // return the number of words in file
        void count();                    // do the counting
};



int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        clog << "error: no input file." << endl;
        return 1;
    }

    // ifstream file;
    // string s;
    //
    // file.open(*(argv + 1));
    // if (!file.good())
    // {
    //     clog << "error: no such file or directory: " << *(argv + 1) << endl;
    //     return 1;
    // }
    //
    // cout << "file read."<< endl;
    //
    // int counter = -1;
    // while (file >> s)
    // {
    //     counter++;
    // }
    //
    // cout << "word count: " << counter << endl;

    vector<WordCounter> list;       // vector for the sake of flexibility
    for (int i = 1; i < argc; i++)
    // for every filenames given in the argument list
    {
        try
        {
            WordCounter *temp = new WordCounter(*(argv + i));
            list.push_back(*temp);
        }
        catch(string e)
        {
            clog << "error: " << e << ". skip." << endl;
            continue;
        }
    }
    
    for (int i = 0; i < list.size(); i++)
    {
        list[i].count();
        cout << "word count: " << list[i].numWords() << endl;
    }

    return 0;
}



// constructor
WordCounter::WordCounter(const char *__s) 
{
    this-> file.open(__s);
    this-> counter = 0;
    if (!this-> file.good())
    {
        string e;
        e = "no such file or directory: ";
        e += __s;
        throw e;
    }
    this-> counter = -1;
    cout << "file read."<< endl;
}

void WordCounter::count()
{
    this-> counter = 0;
    while (this-> file >> this-> s)
    {
        counter++;
    }
}

int WordCounter::numWords()
{
    return this-> counter;
}