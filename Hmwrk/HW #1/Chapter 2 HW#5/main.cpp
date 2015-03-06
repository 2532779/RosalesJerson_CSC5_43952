/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on February 22, 2015, 5:22 PM
 * Purpose: Solution to problem 5!
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins


int main(int argc, char** argv) {
           float  avg,// Divide everything by 5
                   sum, // Add all of the variables
                   var1 = 28,//Variable 1
                   var2 = 32,//Variable 2
                   var3 = 37,//Variable 3
                   var4 = 24,//Variable 4
                   var5 = 33;//Variable 5
           sum = var1 + var2 + var3 + var4 + var5;//Adding All of them!
           avg = sum / 5;//Dividing by 5 to get the average of the series
           
           cout << "The average is : " << avg << endl;
           return 0;
}

