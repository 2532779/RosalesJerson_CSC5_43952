/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 21, 2015, 6:14 PM
 */

//System Libraries
#include <iostream>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=12;
    int readfl[SIZE];
    int count;
    int highest,lowest;
    int total=0;
    int avg;
    ifstream inputFl;
    //Open the file
    inputFl.open("numbers.txt");
    //Reading file to the program
    while(count<SIZE&&inputFl>>readfl[count]){
        count++;
    }
    //Close the file
    inputFl.close();
    //Getting the total
    for(count=0;count<SIZE;count++){
        total+=readfl[count];
    }
    cout<<"Total= "<<total<<endl;
    //Getting the highest number
    highest=readfl[0];
    for(count=0;count<SIZE;count++){
        if(readfl[count]>readfl[0]){
            highest=readfl[count];
        }
    }
    cout<<"Highest number:"<<highest<<endl;
    lowest=readfl[0];
    for(count=0;count<SIZE;count++){
        if(readfl[count]<readfl[0]){
            lowest=readfl[count];
        }
    }
    cout<<"Lowest Number: "<<lowest<<endl;
    //Getting Average
    avg=total/SIZE;
    cout<<"Average: "<<avg<<endl;
    
    return 0;
}

