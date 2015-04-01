/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Comparing two numbers
 * Problem 2 -> Roman Numeral Converter
 * Problem 3 -> Determine if your birthday is a magic date
 * Problem 4 -> Comparing Areas of two rectangles
 * Problem 5 -> Determining BMI
 * Problem 6 -> Determines the Newtons of a mass
 * Problem 7 -> Seconds Converter
 * Problem 8 -> Change-counting game
 * Problem 9 -> Determines discount on packages
 * Problem 10 -> Determines how many points you get in a month for book club
 * Created on October 13, 2011, 6:44 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 0 to solve problem 1"<<endl;
        cout<<"Type 1 to solve problem 2"<<endl;
        cout<<"Type 2 to solve problem 3"<<endl;
        cout<<"Type 3 to solve problem 4"<<endl;
        cout<<"Type 4 to solve problem 5"<<endl;
        cout<<"Type 5 to solve problem 6"<<endl;
        cout<<"Type 6 to solve problem 7"<<endl;
        cout<<"Type 7 to solve problem 8"<<endl;
        cout<<"Type 8 to solve problem 9"<<endl;
        cout<<"Type 9 to solve problem 10"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '0':{
                    float num1,num2;
                    //Prompt User to input values
                    cout<<"Input the first number: "<<endl;
                    cin>>num1;
                    cout<<"Input the second number: "<<endl;
                    cin>>num2;
                    if(num1>num2)
                    cout<<num1<<" is greater than "<<num2<<endl;
                    else if(num1==num2)
                    cout<<num1<<" is equal to "<<num2<<endl;
                    else if(num1<num2)
                    cout<<num1<<" is less than "<<num2<<endl;
                    break;
                }
                case '1':{
                    //Declare Variables
                    unsigned short num;
                    //Prompt user to enter inputs
                    cout<<"Choose a number from 1-10 to convert to Roman Numeral"<<endl;
                    cin>>num;
                    switch (num)
                    {
                        case 1:
                        cout<<"Roman Numeral: I"<<endl;
                        break;
                        case 2:
                        cout<<"Roman Numeral: II"<<endl;
                        break;
                        case 3:
                        cout<<"Roman Numeral: III"<<endl;
                        break;
                        case 4:
                        cout<<"Roman Numeral: IV"<<endl;
                        break;
                        case 5:
                        cout<<"Roman Numeral: V"<<endl;
                        break;
                        case 6:
                        cout<<"Roman Numeral: VI"<<endl;
                        break;
                        case 7:
                        cout<<"Roman Numeral: VII"<<endl;
                        break;
                        case 8:
                        cout<<"Roman Numeral: VIII"<<endl;
                        break;
                        case 9:
                        cout<<"Roman Numeral: IX"<<endl;
                        break;
                        case 10:
                        cout<<"Roman Numeral: X"<<endl;
                        break;
                        default:
                        cout<<"You Must Enter a number from 1-10!"<<endl;
                        break;
                         }
                    break;
                }
                case '2':{
                    //Declare Variables
                    unsigned short moth,day,yr;
                    //Prompt User for inputs
                    cout<<"This program is to see if your birth date is a magic date!"<<endl;
                    cout<<"Input month in numbers"<<endl;
                    cin>>moth;
                    cout<<"Input day in numbers as well"<<endl;
                    cin>>day;
                    cout<<"Input the last two digits of your year"<<endl;
                    cin>>yr;
                    //if else statement
                    if (moth*day==yr)
                        cout<<"You have a magic date!"<<endl;
                    else
                        cout<<"You don't have a magic date!"<<endl;
                    break;
                }
                case '3':{
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
                    break;
                }
                case '4':{
                    //Declare Variables
                    float weigt,heigt,bmI;
                    //Prompt user for inputs
                    cout<<"Enter your weight in lbs such as xxx.xx!"<<endl;
                    cin>>weigt;
                    cout<<"Enter your height in inches as xxx.xx!"<<endl;
                    cin>>heigt;
                    //Calculations
                    bmI=(weigt*703)/(heigt*heigt);
                    //if else
                    if (bmI>=18.5&&bmI<=25)
                        cout<<"You have optimal weight!"<<endl;
                    else if (bmI<18.5)
                        cout<<"You are under weight!"<<endl;
                    else if (bmI>25)
                        cout<<"You are over weight!"<<endl;
                    else
                        cout<<"Enter valid inputs!"<<endl;
                    break;
                }
            case '5':{
                //Declare Variables
                float weigt,mass;
                //Prompt user for inputs
                cout<<"Enter the mass of the object: "<<endl;
                cin>>mass;
                //Calculations
                weigt=mass*9.8;
                //If else
                if (weigt>1000)
                    cout<<"The object is to heavy!"<<endl;
                else if (weigt<10)
                    cout<<"The object is to light!"<<endl;
                else
                    cout<<"The object is just the right weight!"<<endl;
                break;
            }
            case '6':{
                //Global Constants
                unsigned char MNTS=60;
                unsigned short HRS=3600;
                unsigned long DYS=86400;
                //Declare Variables
                float sec,min,hrs,days;
                cout<<"This Program Converts seconds to min,hours,or days."<<endl;
                cout<<"Your Range is to 10^38!"<<endl;
                //Prompt User for Inputs
                cout<<"Enter the number of seconds you wish to convert."<<endl;
                cin>>sec;
                //Calculations
                min=sec/MNTS;
                hrs=sec/HRS;
                days=sec/(static_cast<float>(DYS));
                //if else
                cout<<setprecision(2)<<fixed<<showpoint;
                if (sec>=60&&sec<3600)
                    cout<<"There are "<<min<<" minutes in "<<sec<<" seconds!"<<endl;  
                else if (sec>=3600&&sec<86400)
                    cout<<"There are "<<hrs<<" hours in "<<sec<<" seconds!"<<endl;
                else if (sec>=86400)
                    cout<<"There are "<<days<<" days in "<<sec<<" seconds!"<<endl;
                else
                    cout<<"Enter a number greater than or equal to 60!"<<endl;
                break;
            }
            case '7':{
                //Declare Variables
                int pen=1,nik=5,dim=10,qrt=25,numpen,numnik,numdim,numqrt;
                int ttlnum;
                //Prompt User for inputs
                cout<<"Type in number of pennies:"<<endl;
                cin>>numpen;
                cout<<"Type in number of nickels:"<<endl;
                cin>>numnik;
                cout<<"Type in number of dimes:"<<endl;
                cin>>numdim;
                cout<<"Type in number of quarters:"<<endl;
                cin>>numqrt;
                //Calculations
                ttlnum=(pen*numpen)+(nik*numnik)+(dim*numdim)+(qrt*numqrt);
                //If else
                if (ttlnum<100)
                    cout<<"You didn't win the game"<<endl;
                else if (ttlnum==100)
                    cout<<"You win the game!"<<endl;
                else if (ttlnum>100)
                    cout<<"You didn't win the game"<<endl;
                else
                    cout<<"Type in appropriate values!"<<endl;
                break;
            }
            case '8':{
                //Declare Variables
                short ttl,qant,pck,cst=99;
                unsigned int   ttlwD1,ttlwD2,ttlwD3,ttlwD4,ttlw;
                //Prompt user for inputs
                cout<<"Enter the amount of packages you bought"<<endl;
                cin>>pck;
                //Calculations
                ttl=pck*cst;
                ttlwD1=ttl-(.20*ttl);
                ttlwD2=ttl-(.30*ttl);
                ttlwD3=ttl-(.40*ttl);
                ttlwD4=ttl-(.50*ttl);
                //if else
                if      (pck>=10&&pck<=19)
                    cout<<"Your total cost is going to be $ "<<ttlwD1<<endl;
                else if (pck>=20&&pck<=49)
                    cout<<"Your total cost is going to be $ "<<ttlwD2<<endl;
                else if (pck>=50&&pck<=99)
                    cout<<"Your total cost is going to be $ "<<ttlwD3<<endl;
                else if (pck>=100)
                    cout<<"Your total cost is going to be $ "<<ttlwD4<<endl;
                else if (pck<=9)
                    cout<<"You must buy 10 or more packages"<<endl;
                break;
            }
            case '9':{
                //Declare Variables
                unsigned short numbk;//Number of books
                //Prompt User for inputs
                cout<<"How many books did you read this month?"<<endl;
                cin>>numbk;
                //if else
                if (numbk==0)
                    cout<<"You have not read any books!"<<endl;
                else if (numbk==1)
                    cout<<"You read 1 book this month: 5 points"<<endl;
                else if (numbk==2)
                    cout<<"Good job you read 2 books this month : 15 Points"<<endl;
                else if (numbk==3)
                    cout<<"Fantastic you read 3 books: 30 points"<<endl;
                else if (numbk>=4)
                    cout<<"Your a Bookworm! You get 60 points!"<<endl;
                else
                    cout<<"Enter valid inputs!"<<endl;
    
                break;
            }
                default:{
                        cout<<"Exit?"<<endl;
                        loop=false;
                        break;
                }
        };
    }while(loop);//Upper do-while
    return 0;
}

