/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 30, 2015, 9:53 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
unsigned short CVTPCT=100;
//Function Prototypes
float calcRet(float,float);
//Execution begins her
int main(int argc, char** argv) {
//Declare Variables
    float price;
    int markup;
    float total;
    //Prompt User for inputs
    cout<<"What is the price of the item?"<<endl;
    cin>>price;
    while (price<=0)
    {
        cout<<"You cannot input a negative number or zero please enter a positive"
                " number"<<endl;
        cin>>price;
    }
    cout<<"What is the markup of the item?"<<endl;
    cin>>markup;
    while (markup<=0)
    {
        cout<<"You cannot use a number less than or equal to zero please enter"
                " a positive number!"<<endl;
        cin>>markup;
    }
    //Calling Function calcRet
    total=calcRet(price,markup);
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Price of the item is $"<<price<<endl;
    cout<<"The markup of the item is "<<markup<<"%"<<endl;
    cout<<"The total cost is $"<<total<<endl;
    return 0;
}

//Function for calcRet
float calcRet(float num1,float num2){
    return (num1*(num2/CVTPCT)+num1);
}