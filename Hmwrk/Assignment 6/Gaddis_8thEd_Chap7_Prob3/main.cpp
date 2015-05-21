/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 21, 2015, 11:16 AM
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//User Libraries

//GLobal Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int count;
    int SIZE=5;
    string salsa[]={"Mild","Medium","Sweet","Hot","Zesty"};
    int jars[SIZE];
    //Prompt the user for inputs
    cout<<"Type in how many jars sold for each of the spices"<<endl;
    for(count=0;count<=4;count++){
        cout<<salsa[count]<<" "<<endl;
        cin>>jars[count];
    }
    cout<<"Salsa"<<"   "<<"Jars Sold"<<endl;
    cout<<"-------------------------"<<endl;
 
    //Outputting the results
    for(count=0;count<=4;count++){
        cout<<salsa[count]<<"        "<<jars[count]<<endl;
        
    }
    
    return 0;
}

