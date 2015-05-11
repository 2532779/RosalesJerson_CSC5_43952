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
    float in[SIZE];
    int max=in[0],min=in[0];
    //Prompt user for inputs
    cout<<"Enter 10 numbers and i'll tell you which one is the lowest and "
            "highest."<<endl;
    for (int i=0;i<=SIZE;i++){
        cin>>in[SIZE];
    }
    
    for (int i=0;i<SIZE;i++){
        if(max>[i]){
            max=[i];
        }
        else if (min<[i]){
            min=[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
  
    

    return 0;
}


