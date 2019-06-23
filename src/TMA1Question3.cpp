//: TMA1Question3.cpp

/* 
    Title: TMA1Question3.cpp
    Description: 
        A program that creates 3 vector<float> object and push back 25 values to
        each of vector<float> object.
    Date: June 22, 2019
    Author: Tommy Wu
*/

/*
    DOCUMENTATION

    Program Purpose:
        1. create 3 vector<float> object
        2. push loop value back to first vector<float>
        3. push squared loop value back to second vector<float>
        4. calculate the sum of 2 and 3, push back to third vector<float>
        5. print it
        6. loop 2 ~ 5 for 25 times in total
    Compile: clang++ TMA1Question3.cpp -o TMA1Question3
    Execution: ./TMA1Question3 
*/

/*
    No TEST PLAN needed since the program is fully static.
 */

#include <iostream>
#include <vector>
#define square(x) x * x

using namespace std;

int main(void)
{
    vector<float> loop_counter_value;
    vector<float> loop_counter_value_squared;
    vector<float> sum;

    for (int i = 0; i < 25; i++)
    {
        loop_counter_value.push_back((float) i);
        loop_counter_value_squared.push_back(square((float) i));
        sum.push_back(loop_counter_value.at(i) + 
                        loop_counter_value_squared.at(i));
        cout << i << "; " << loop_counter_value.at(i) << " + ";
        cout << loop_counter_value_squared.at(i) << " = " << sum.at(i);
        cout << endl;
    }

    return 0;
} ///:~