/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 16, 2015, 9:57 AM
 * Purpose:Male And female Percents in a Class
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins!

int main(int argc, char** argv) {
    //Number of males,females,total number of students
    float nM,nF,tnS,pctM,pctF;
    cout<<"Type total number of students:"<<endl;
    cin>>tnS;
    cout<<"Type total number of males: "<<endl;
    cin>>nM;
    cout<<"Type total number of females: "<<endl;
    cin>>nF;
    pctM=(nM/tnS)*100;
    pctF=(nF/tnS)*100;
    cout<<setprecision(2)<<fixed;
    cout<<"Male Students: "<<nM<<endl;
    cout<<"Percent of Male Students: "<<pctM<<"%"<<endl;
    cout<<"Female Students: "<<nF<<endl;
    cout<<"Percent of Female Students: "<<pctF<<"%"<<endl;
    
    
           
    
    

    return 0;
}

