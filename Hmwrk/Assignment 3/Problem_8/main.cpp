/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 26, 2015, 10:04 AM
 * Purpose:Mixing Colors!
 */

//System Libraries
#include <iostream>

using namespace std;
//user Libraries

//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    //Declare Variables
    char col1,col2,red,blue,yellow;
    cout<<"This Program mixes colors!"<<endl;
    //Prompt User for inputs
    cout<<"Enter the first primary colors (Red,Blue,Yellow)!"<<endl;
    cin.ignore();
    cin>>col1;
    cout<<"Enter the next primary color!"<<endl;
    cin.ignore();
    cin>>col2;
    red=1;
    blue=2;
    yellow=3;
    if (col1==1&&col2==2)
        cout<<"You get purple!"<<endl;
    
    
    
    

    return 0;
}

