/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 30, 2015, 8:34 AM
 * Purpose:To determine how many book points you get!
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
    unsigned short numbk;//Number of books
    //Prompt User for inputs
    cout<<"How many books did you read this month?"<<endl;
    cin>>numbk;
    //if else
    if (numbk==0)
        cout<<"You have not read any books!"<<endl;
    else if (numbk==1)
        cout<<"You read 1 book this month: 5 points"<<endl;
    else if (numbk==2)
        cout<<"Good job you read 2 books this month : 15 Points"<<endl;
    else if (numbk==3)
        cout<<"Fantastic you read 3 books: 30 points"<<endl;
    else if (numbk>=4)
        cout<<"Your a Bookworm! You get 60 points!"<<endl;
    else
        cout<<"Enter valid inputs!"<<endl;
    

    return 0;
}

