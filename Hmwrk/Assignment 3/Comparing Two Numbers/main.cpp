/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 23, 2015, 10:26 AM
 * Purpose:Comparing two numbers
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!


int main(int argc, char** argv) {
    float num1,num2;
    //Prompt User to input values
    cout<<"Input the first number: "<<endl;
    cin>>num1;
    cout<<"Input the second number: "<<endl;
    cin>>num2;
    if(num1>num2)
        cout<<num1<<" is greater than "<<num2<<endl;
    else if(num1==num2)
        cout<<num1<<" is equal to "<<num2<<endl;
    else if(num1<num2)
        cout<<num1<<" is less than "<<num2<<endl;
   
    return 0;
}

