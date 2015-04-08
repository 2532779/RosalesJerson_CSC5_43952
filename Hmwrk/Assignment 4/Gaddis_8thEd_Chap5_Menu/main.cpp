/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Purpose:  Gaddis Menu For Chapter 5 Homework
 * Problem 1 -> Sum of numbers calculator
 * Problem 2 -> Ocean Level Rise 
 * Problem 3 -> How much Calories burned
 * Problem 4 -> Rates For Country Club
 * Problem 5 -> Calculates Miles driven each hour
 * Problem 6 -> Program Calculates each day pennies double
 * Problem 7 -> Math Tutor!
 * Problem 8 -> Program for hotels(Calculates occupations with percentages)
 * Problem 9 -> Celsius to Fahrenheit Converter 
 * Problem 10 -> Guessing Game!
 * Created on April 8,2015 10:00AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 6 to solve problem 6"<<endl;
        cout<<"Type 7 to solve problem 7"<<endl;
        cout<<"Type 8 to solve problem 8"<<endl;
        cout<<"Type 9 to solve problem 9"<<endl;
        cout<<"Type 10 to solve problem 10"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        int choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                    //Declare Variables
                    char agn;
                    int num,ttl=0;
                    do{
                    //Prompt user for inputs
                    cout<<"Input a number you wish to get the sum of."<<endl;
                    cin>>num;
                    //Input Validation
                    while (num<0)
                    {
                        cout<<"Error enter a positive number!"<<endl;
                        cin>>num;
                    }
                    //for loop
                    for (int cnt=1;cnt<=num;cnt++)
                    {
                        ttl+=cnt;
                    }
                    cout<<"The total sum is "<<ttl<<endl;
                    cout<<"Do you want to find a sum of another number?(Y/N)"<<endl;
                    cin>>agn;
                    }while(agn=='Y'||agn=='y');
                    cout<<"Have a nice day!"<<endl;
                    break;
                }
                case 2:{
                    //Declare Variables
                    float miL=1.5;
                    unsigned short yrs;
                    cout<<"The ocean level rise is:"<<endl;
                        cout<<endl;
                        cout<<"Year"<<"      "<<"Milliliters"<<endl;
                        cout<<"---------------------------------"<<endl;
                    //Loop
                    for(yrs=1;yrs<=25;yrs++)//for loop for 25 years
                        //Output and calculations
                        cout<<"Year: "<<yrs<<"  Milliliters: "<<(miL*yrs)<<endl;     
                    break;
                }
                case 3:{
                    //Declare Variables
                    float caL=3.6;
                    unsigned short min=5;
                    cout<<"Minutes"<<"      "<<"Calories Burned"<<endl;
                    cout<<"---------------------------------------"<<endl;
                    //Loop
                    while (min<=30)
                    {
                        cout<<"Minute: "<<min<<"   Calories Burned: "<<(caL*min)<<endl;
                        min+=5;
                    }
                    break;
                }
                case 4:{
                    //Global Constants
                    unsigned char CNVTPCT=100;
                    //Declare Variables
                    unsigned short yrs=1,yrsRte,inT,strt=2500,ttl;
                    cout<<"Increased Rates for Country Club up to Year 6:"<<endl;
                    cout<<endl;
                    cout<<"Year"<<"      "<<"Amount"<<endl;
                    cout<<"--------------------------"<<endl;
                    //Loop
                    while (yrs<=6)
                    {
                        //Calculations
                        inT=2500.0f*(4/static_cast<float>(CNVTPCT));
                        yrsRte+=inT;
                        ttl=yrsRte+strt;
                        //Output
                        cout<<"Year: "<<yrs<<"   Amount: $"<<ttl<<endl;
                        yrs++;
                    }
                    break;
                }
                case 5:{
                    //Declare Variables
                    char agn;
                    float spd,hrsDvn,dstnce;
                    //Introduction to Program
                    cout<<"This Program calculates how many miles you driven each hour"<<endl;
                    cout<<endl;
                    //Prompt user for inputs
                    cout<<"How many hours have you driven?"<<endl;
                    cin>>hrsDvn;
                    while (hrsDvn<0)
                    {
                        cout<<"ERROR!.....Input a number greater than zero"<<endl;
                        cin>>hrsDvn;
                    }
                    cout<<"What was your average speed each hour?"<<endl;
                    cin>>spd;
                    while (spd<0)
                    {
                        cout<<"ERROR!.....Input a number greater than zero"<<endl;
                        cin>>spd;
                    }
                    cout<<"Hour  "<<"   "<<"Miles Driven  "<<endl;
                    cout<<"-------------------------------"<<endl;
                    for(float hrs=1;hrs<=hrsDvn;hrs++)
                    {
                        dstnce+=spd;
                        cout<<hrs<<"        "<<dstnce<<endl;
                    }
                    break;
                }
            case 6:{
                //Global Constants
                unsigned short CVTPCT=100;
                 //Declare Variables
                float days,pen=1;
                //Intro to the Program
                cout<<"This program calculates each day your pennies double!"<<endl;
                cout<<endl;
                //Prompt user for input
                cout<<"How many days are you going to work this week?"<<endl;
                cin>>days;
                //Input validation
                while (days<=0)
                {
                    cout<<"ERROR enter a number great than zero"<<endl;
                    cin>>days; 
                }
                //Output the results
                cout<<"   Day"<<"        "<<"Total"<<endl;
                cout<<"------------------------------"<<endl;
                //For loop
                for (unsigned short cnt=1;cnt<=days;cnt++)
                {
                    cout<<"   "<<cnt<<"           "<<"$"<<pen/static_cast<float>(CVTPCT)
                    <<endl;
                    pen*=2;
                }
                break;
            }
            case 7:{
                ///Global Constants
                short minval=1,maxval=50;//Minimum Addition and Subtraction Values
                short minMval=1,maxMval=12;//Minimum Multiplication and Division Values
                char choice;
                do{
                //Menu
                cout<<"If you wish to use the Addition tutor enter 1"<<endl;
                cout<<"If you wish to use the Subtraction tutor enter 2"<<endl;
                cout<<"If you wish to use the Multiplication tutor enter 3"<<endl;
                cout<<"If you wish to use the Division tutor enter 4"<<endl;
                cout<<"Type any other number to exit"<<endl;
                cin>>choice;
                switch (choice){
                    case '1':{
                            //Declare variables
                            unsigned char again;
                            unsigned short num1,num2,ansr;
                            //System time
                            unsigned seed = time(0);
                            //Seed random number generator
                            srand(seed);
                            cout<<"This program is a Addition Math Tutor"<<endl;
                            cout<<"You must Type a number!"<<endl;
                            do{
                            num1=(rand()%(maxval-minval+1))+minval;
                            num2=(rand()%(maxval-minval+1))+minval;
                            cout<<" "<<num1<<endl;
                            cout<<"+"<<num2<<endl;
                            cout<<"----"<<endl;
                            cin>>ansr;
                            if(ansr==num1+num2)
                                cout<<"Hurray you did it!"<<endl;
                            else if (ansr!=num1+num2)
                                cout<<"Oh no! The answer is actually: "<<(num1+num2)<<endl;
                            cout<<"Do you want to try another problem?(Y/N)"<<endl;
                            cin>>again;
                            }while (again=='Y'||again=='y');
                            break;
                    }
                    case '2':{
                            unsigned char again;
                            short num1,num2,ansr;
                            //System time
                            unsigned seed = time(0);
                            //Seed random number generator
                            srand(seed);
                            cout<<"This program is a Subtraction Math Tutor"<<endl;
                            cout<<"You must Type a number!"<<endl;
                            do{
                            num1=(rand()%(maxval-minval+1))+minval;
                            num2=(rand()%(maxval-minval+1))+minval;
                            cout<<" "<<num1<<endl;
                            cout<<"-"<<num2<<endl;
                            cout<<"----"<<endl;
                            cin>>ansr;
                            if(ansr==num1-num2)
                                cout<<"Hurray you did it!"<<endl;
                            else if (ansr!=num1-num2)
                                cout<<"Oh no! The answer is actually: "<<(num1-num2)<<endl;
                            cout<<"Do you want to try another problem?(Y/N)"<<endl;
                            cin>>again;
                            }while (again=='Y'||again=='y');
                            break;
                    }
                    case '3':{
                            unsigned char again;
                            unsigned short num1,num2,ansr;
                            //System time
                            unsigned seed = time(0);
                            //Seed random number generator
                            srand(seed);
                            cout<<"This program is a Multiplication Math Tutor"<<endl;
                            cout<<"You must Type a number!"<<endl;
                            do{
                            num1=(rand()%(maxMval-minMval+1))+minval;
                            num2=(rand()%(maxMval-minMval+1))+minval;
                            cout<<" "<<num1<<endl;
                            cout<<"*"<<num2<<endl;
                            cout<<"----"<<endl;
                            cin>>ansr;
                            if(ansr==num1*num2)
                                cout<<"Hurray you did it!"<<endl;
                            else if (ansr!=num1*num2)
                                cout<<"Oh no! The answer is actually: "<<(num1*num2)<<endl;
                            cout<<"Do you want to try another problem?(Y/N)"<<endl;
                            cin>>again;
                            }while (again=='Y'||again=='y');
                            break;
                    }
                    case '4':{
                            unsigned char again;
                            float num1,num2,ansr;
                            //System time
                            unsigned seed = time(0);
                            //Seed random number generator
                            srand(seed);
                            cout<<"This program is a Division Math Tutor"<<endl;
                            cout<<"You must Type a number!"<<endl;
                            do{
                            num1=(rand()%(maxMval-minMval+1))+minval;
                            num2=(rand()%(maxMval-minMval+1))+minval;
                            cout<<" "<<num1<<endl;
                            cout<<"%"<<num2<<endl;
                            cout<<"----"<<endl;
                            cin>>ansr;
                            //Formatting output
                            cout<<setprecision(2)<<fixed<<showpoint<<endl;
                            if(ansr==num1/num2)
                                cout<<"Hurray you did it!"<<endl;
                            else if (ansr!=num1/num2)
                                cout<<"Oh no! The answer is actually: "<<(num1/num2)<<endl;
                            cout<<"Do you want to try another problem?(Y/N)"<<endl;
                            cin>>again;
                            }while (again=='Y'||again=='y');
                            break;
                    }
                    default:{
                            cout<<"Exit?"<<endl;
                            break;
                    }
                };
                }while(choice>='1'&&choice<='4');
                break;
            }
            case 8:{
               //Declare Variables
                unsigned short flr,rms,ocu,unocu;
                float ttlrms,ttlocu;
                //Prompt user for inputs
                cout<<"How many floors are in the Hotel"<<endl;
                cin>>flr;
                for(unsigned short cnt=1;cnt<=flr;cnt++)
                {
                    if(cnt!=13){
                        cout<<"How many rooms are there in floor "<<cnt<<"?"<<endl;
                        cin>>rms;
                        cout<<"How many rooms are occupied in floor "<<cnt<<"?"<<endl;
                        cin>>ocu;
                        ttlrms+=rms;
                        ttlocu+=ocu;
                        if (cnt==flr){
                            cout<<"Total Floor in the Hotel: "<<flr<<endl;
                            cout<<"Total Rooms in the Hotel: "<<ttlrms<<endl;
                            cout<<"Total Rooms occupied: "<<ttlocu<<endl;
                            cout<<"Total Rooms unoccupied: "<<(ttlrms-ttlocu)<<endl;
                            cout<<setprecision(2)<<fixed<<showpoint<<endl;
                            cout<<"Percentage of rooms occupied: %"<<(ttlocu/ttlrms)*100<<endl; 
                        }
                    }
                    else if (cnt==13)
                    {
                        cout<<"Skipping 13 floor"<<endl;
                    }

                }
                break;
            }
            case 9:{
                //Declare Variables
                float cEl,fAhr;
                //Intro to the program
                cout<<"This program converts Celsius to Fahrenheit (1-20)"<<endl;
                cout<<endl;
                cout<<"Celsius"<<"      "<<"Fahrenheit"<<endl;
                cout<<"----------------------------------"<<endl;
                for(cEl=1;cEl<=20;cEl++)
                {
                    fAhr=(1.8*cEl)+32;
                    cout<<"   "<<cEl<<"             "<<fAhr<<endl;
                }
                break;
            }
            case 10:{
                //Global Constants
                unsigned short minval=1,maxval=25;//Minimum Addition and Subtraction Values
                //Declare variables
                char again;
                unsigned short num1,gues;
                //System time
                unsigned seed = time(0);
                //Seed random number generator
                srand(seed);
                do{
                cout<<"This is a guessing game, Enter a number (1-25)!"<<endl;
                num1=(rand()%(maxval-minval+1))+minval;
                cin>>gues;
                do{
                if (gues<num1)
                {
                    cout<<"Try again your to low,Pick a Higher number!"<<endl;
                    cin>>gues;
                }
                if (gues>num1)
                {
                    cout<<"Try again your to high,Pick a Lower Number!"<<endl;
                    cin>>gues;
                }
                }while (gues!=num1);

                    cout<<"You win!"<<endl;
                    cout<<"Do you want to play again?(Y/N)"<<endl;
                    cin>>again;
                }while(again=='Y'||again=='y');
    
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

