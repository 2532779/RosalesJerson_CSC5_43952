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
    float total=0,avg;
    float highest,lowest;
    int count;
    string month[SIZE]={"Janurary","Feburary","March","April","May","June","July",
                      "August","September","October","November","December"};
    //Prompt user for the rain each month
    cout<<"Input how many inches of rain fell each month..."<<endl;
    for(count=0;count<=11;count++){
        cout<<month[count]<<endl;
        cin>>rain[count];
    }
    //Gathering the total rainfall all year
    for (count=1;count<=11;count++){
        total+=rain[count];
    }
    avg=total/SIZE;
    cout<<"The Average rain fall yearly is "<<avg<<" inches"<<endl;
    //Getting the lowest and highest values
    highest=rain[0];
    for(count=0;count<=11;count++){
        if(rain[count]>highest){
            highest=rain[count];
        }
    }
    cout<<"The highest rainfall all year is  "<<highest<<endl;
    lowest=rain[0];
    for(count=0;count<=11;count++){
        if(rain[count]<lowest){
            lowest=rain[count];
        }
    }
    cout<<"The lowest rainfall all year is "<<lowest<<endl;
    
    return 0;
}

