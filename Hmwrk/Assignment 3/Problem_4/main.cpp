/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 25, 2015, 7:45 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    float len1,len2,wit1,wit2,ar1,ar2;
    //Prompt User for inputs of rectangle 1
    cout<<"What is the Length of Rectangle 1 in xx.xx"<<endl;
    cin>>len1;
    cout<<"What is the Width of Rectangle 1 in xx.xx"<<endl;
    cin>>wit1;
    //Prompt user for inputs of rectangle 2
    cout<<"What is the Length of Rectangle 2 in xx.xx"<<endl;
    cin>>len2;
    cout<<"What is the Width of Rectangle 2 in xx.xx"<<endl;
    cin>>wit2;
    //Calculations
    ar1=len1*wit1;
    ar2=len2*wit2;
    //If else 
    if (ar1>ar2)
        cout<<"Rectangle 1 has more area than Rectangle 2"<<endl;
    else if (ar1<ar2)
        cout<<"Rectangle 2 has more area than Rectangle 1"<<endl;
    else if (ar1==ar2)
        cout<<"Rectangle 1 and 2 have the same area!"<<endl;
    else
        cout<<"Enter Valid inputs!"<<endl;
    
    
    
    
    

    return 0;
}

