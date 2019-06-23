//: TMA1Question4.cpp

/* 
    Title: TMA1Question4.cpp
    Description: 
        A program that lists all prime number from 1 to 10000, or to any given
        positive integer.
    Date: June 22, 2019
    Author: Tommy Wu
*/

/*
    DOCUMENTATION

    Program Purpose:
        for every number from 1 to 10000, if that number if divisible by any 
        number smaller than itself, print it
    Compile: clang++ TMA1Question4.cpp -o TMA1Question4
    Execution: ./TMA1Question4 <optional_positive_integer>
*/

/*
    TEST PLAN

    normal case 1:
    > ./TMA1Question4
    Prime number from 1 to 10000:
    // prime number from 1 to 10000

    normal case 2:
    > ./TMA1Question4 123456
    Prime number from 1 to 123456:
    // prime number from 1 to 123456
 
    bad case 1:
    > ./TMA1Question4 fsdkkfjhsdfh
    error: invalid parameter, integer greater than 1 expected.

    bad case 2:
    > ./TMA1Question4 -6666
    error: invalid parameter, integer greater than 1 expected.

    Discussion:
        This program have a simple input check procedure provided by atoi() 
        function. When a char sequence that cannot turn into an integer been 
        passed to atoi(), it will return 0. At the same time, 0 is not a valid 
        parameter either since only integer greater than 1 is valid. Thus if the
        output of atoi() is smaller than 2, the parameter passed in is 
        considered invalid.
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int to;
    bool isPrime;

    if (argc == 1)
    {
        to = 10000;
    }
    else
    {
        to = atoi(argv[1]);
        
        if (to < 2)
        {
            clog << "error: invalid parameter, integer greater than 1 expected."
                 << endl;
            
            return 1;
        }
    }
    
    cout << "Prime number from 1 to " << to << ": " << endl;

    for (int i = 2; i <= to; i++)
    {
        isPrime = true;           // assume i is prime

        // Prime numbers are integral numbers that are not evenly divisible by 
        // any other numbers except for themselves and one. 
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }

        }
        
        if (isPrime == false)
        {
            continue;             // not prime number, skip
        }
        else
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;    
}