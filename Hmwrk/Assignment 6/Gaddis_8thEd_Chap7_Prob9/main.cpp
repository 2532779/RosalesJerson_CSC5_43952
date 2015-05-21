/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 21, 2015, 3:56 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//GLobal Constants

//Function prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE;
    int emp[SIZE];
    int hour[SIZE];
    float rate[SIZE];
    int count;
    //Prompt User for inputs
    cout<<"How many Employees do you want to save?"<<endl;
    cin>>SIZE;
    for (count=0;count<SIZE;count++){
        cout<<"Enter the id for employer number "<<(count+1)<<endl;
        cin>>emp[count+1];
        cout<<"Enter how many hours worked"<<endl;
        cin>>hour[count+1];
        cout<<"Enter how much is the hourly rate"<<endl;
        cin>>rate[count+1];
    }
    //Getting the employees wages
    for(count=0;count<SIZE;count++){
        cout<<"Employee #"<<(count+1)<<endl;
        cout<<"Wage= $"<<(hour[count+1]*rate[count+1])<<endl;
    }
    return 0;
}

