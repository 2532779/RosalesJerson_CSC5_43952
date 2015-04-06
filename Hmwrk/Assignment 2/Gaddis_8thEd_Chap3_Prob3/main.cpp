/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 15, 2015, 8:05 PM
 * Purpose:Program for Average 5 test scores
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    
    float t1,t2,t3,t4,t5,avg;
    cout<<"Enter Test Score #1 xxx.xx"<<endl;
    cin>>t1;
    cout<<"Enter Test Score #2 xxx.xx"<<endl;
    cin>>t2;
    cout<<"Enter Test Score #3 xxx.xx"<<endl;
    cin>>t3;
    cout<<"Enter Test Score #4 xxx.xx"<<endl;
    cin>>t4;
    cout<<"Enter Test Score #5 xxx.xx"<<endl;
    cin>>t5;
    avg=(t1+t2+t3+t4+t5)/5;
    cout<<"Test Score #1: "<<t1<<endl;
    cout<<"Test Score #2: "<<t2<<endl;
    cout<<"Test Score #3: "<<t3<<endl;
    cout<<"Test Score #4: "<<t4<<endl;
    cout<<"Test Score #5: "<<t5<<endl;
    cout<<setprecision(1)<<fixed;
    cout<<"Test Score Average: "<<avg<<endl;
    
    
    
    

    return 0;
}

