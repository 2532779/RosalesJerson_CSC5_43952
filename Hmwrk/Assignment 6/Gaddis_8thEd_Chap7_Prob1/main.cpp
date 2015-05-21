/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 10, 2015, 7:39 PM
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
    int SIZE=9;
    int in[SIZE];
    int highest,lowest;
    int count;
    //Prompt user for inputs
    cout<<"Enter 10 numbers and I'll tell you which one is the lowest and "
            "highest."<<endl;
         
    for (count=0;count<=SIZE;count++){
         cin>>in[count];
    }
    highest=in[0];
    for(count=0;count<=SIZE;count++){
        if(in[count]>highest){
            highest=in[count];
        }
    }
    cout<<"Highest Number: "<<highest<<endl;
    lowest=in[0];
    for(count=0;count<=SIZE;count++){
        if(in[count]<lowest){
            lowest=in[count];
        }
    }
    cout<<"Lowest Number: "<<lowest<<endl;

    return 0;
}


