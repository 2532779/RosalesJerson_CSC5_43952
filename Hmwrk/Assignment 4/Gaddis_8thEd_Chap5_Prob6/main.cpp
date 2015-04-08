/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 6, 2015, 9:36 AM
 * Purpose:Determine how many miles driven in an hour
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here


int main(int argc, char** argv) {
    //Declare Variables
    char agn;
    float spd,hrsDvn,dstnce;
    //Introduction to Program
    cout<<"This Program calculates how many miles you driven each hour"<<endl;
    cout<<endl;
    //Prompt user for inputs
    cout<<"How many hours have you driven?"<<endl;
    cin>>hrsDvn;
    while (hrsDvn<0)
    {
        cout<<"ERROR!.....Input a number greater than zero"<<endl;
        cin>>hrsDvn;
    }
    cout<<"What was your average speed each hour?"<<endl;
    cin>>spd;
    while (spd<0)
    {
        cout<<"ERROR!.....Input a number greater than zero"<<endl;
        cin>>spd;
    }
    cout<<"Hour  "<<"   "<<"Miles Driven  "<<endl;
    cout<<"-------------------------------"<<endl;
    for(float hrs=1;hrs<=hrsDvn;hrs++)
    {
        dstnce+=spd;
        cout<<hrs<<"        "<<dstnce<<endl;
    }
    
    

    return 0;
}

