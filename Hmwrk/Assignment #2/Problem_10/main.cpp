/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 18, 2015, 11:19 AM
 * Purpose: Insurance issues
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution begins here!


int main(int argc, char** argv) {
    //Declare Variables
    //Cost of building and percentage with the calculated cost of insurance
    float coB,pct=80,calcI;
    //Prompt user for inputs
    cout<<"How much does your building cost?"<<endl;
    cin>>coB;
    //Calculations 
    calcI=coB*(pct/static_cast<float>(CNVPCT));
    //Output the results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Cost of Building: $"<<coB<<endl;
    cout<<"Minimum Cost of insurance: $"<<calcI<<endl;
    
    
    

    return 0;
}

