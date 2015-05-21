/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 21, 2015, 10:14 AM
 */

//System Libraries
#include <iostream>
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=12;
    float rain[SIZE];
    int day,year;
    int count;
    string month[SIZE]={"Janurary","Feburary","March","April","May","June","July",
                      "August","September","October","November","December"};
    float highest,lowest;
    //Prompt user for the rain each month
    cout<<"Input how many inches of rain fell each month..."<<endl;
    for(count=0;count<=11;count++){
        cout<<month[count]<<endl;
        cin>>rain[count];
    }
    
    return 0;
}

