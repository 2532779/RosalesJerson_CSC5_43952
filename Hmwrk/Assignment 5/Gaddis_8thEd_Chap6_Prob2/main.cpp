/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 30, 2015, 5:36 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
 

//Function Prototypes
 float getLnth(float);
 float getWdth(float);
 float getArea(float,float);
 float dspData(float,float,float);
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float len,wdth,area;//To hold the values 
    float num1,num2;//for the input of the values
    //Function for length
    len=getLnth(num1);//Calling and holding length 
    wdth=getWdth(num2);//Calling and holding width
    area=getArea(len,wdth);//Calling and holding area
    dspData(len,wdth,area);//Calling and displaying the data 
    
    return 0;
}
 float getLnth(float l){
    cout<<"What is the length of the rectangle/square?"<<endl;
    cin>>l;
    return l;
}
 float getWdth(float w){
    cout<<"What is the width of the rectangle/square?"<<endl;
    cin>>w;
    return w;
}
 float getArea(float l,float w){
     float a;
    a=l*w;
    return a;
}
                       
float dspData(float a,float b,float c){
    cout<<"The length is "<<a<<endl;
    cout<<"The width is "<<b<<endl;
    cout<<"The area is "<<c<<endl;
}
