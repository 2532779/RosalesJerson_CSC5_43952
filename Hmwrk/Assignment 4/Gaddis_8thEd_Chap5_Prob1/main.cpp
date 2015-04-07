/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 31, 2015, 9:03 PM
 * Purpose:Sum of numbers
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    char agn;
    int num,ttl=0;
    do{
    //Prompt user for inputs
    cout<<"Input a number you wish to get the sum of."<<endl;
    cin>>num;
    //Input Validation
    while (num<0)
    {
        cout<<"Error enter a positive number!"<<endl;
        cin>>num;
    }
    //for loop
    for (int cnt=1;cnt<=num;cnt++)
    {
        ttl+=cnt;
    }
    cout<<"The total sum is "<<ttl<<endl;
    cout<<"Do you want to find a sum of another number?"<<endl;
    cin>>agn;
    }while(agn=='Y'||agn=='y');
    cout<<"Have a nice day!"<<endl;
    

    return 0;
}

