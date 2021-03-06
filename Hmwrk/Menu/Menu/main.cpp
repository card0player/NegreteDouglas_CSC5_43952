/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 * Purpose:  To incorporate the code for
 * developing a menu
 * Created on October 13, 2011, 6:44 PM
 */

#include <iostream>//input and output
#include <math.h>//allows me to use the power function
#include <cstdlib>//rand and srand
#include <ctime>//for the time function
#include <iomanip>//allows us to format the output
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Please type a letter from a-j(lowercase) for a problem,"<<endl;
        cout<<"or type 'x' to see a list of the problems."<<endl;
        cout<<"Type anything else to quit with no solutions.\n"<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //cout<<"\n"<<endl;
        //Solve a problem that has been chosen.
        switch(choice){
                case 'a':{
                    float one,two;
                    cout<<"\nPlease enter two numbers, ex:2 4:"<<endl;
                    cin>>one>>two;
                    if(one>two){
                        cout<<"The first number is larger.\n"<<endl;
                    }
                    else{
                        cout<<"The second number is larger.\n"<<endl;
                    }
                    break;
                }
                case 'b':{
                    float num;
                    cout<<"\nPlease enter a number(1-10):"<<endl;
                    cin>>num;
                    if(num >= 1 && num <= 10){
                        if(num==1)
                            cout<<"I\n"<<endl;
                        else if(num==2)
                            cout<<"II\n"<<endl;
                        else if(num==3)
                            cout<<"III\n"<<endl;
                        else if(num==4)
                            cout<<"IV\n"<<endl;
                        else if(num==5)
                            cout<<"V\n"<<endl;
                        else if(num==6)
                            cout<<"VI\n"<<endl;
                        else if(num==7)
                            cout<<"VII\n"<<endl;
                        else if(num==8)
                            cout<<"VIII\n"<<endl;
                        else if(num==9)
                            cout<<"IX\n"<<endl;
                        else
                            cout<<"X\n"<<endl; 
                    }
                    else{
                        cout<<"Does not accept a number less than 1, or "
                                "greater than 10.\n"<<endl;
                    }
                    break;
                }
                case 'c':{
                    int mon,day,year;
                    cout<<"\nPlease enter a date in month, day, year. "
                            "format(4 12 95)."<<endl;
                    cin>>mon>>day>>year;
                    if(mon*day==year)
                    {
                        cout<<"The date is magic.\n"<<endl;
                    }
                    else
                    {
                        cout<<"The day is not magic.\n"<<endl;
                    }
                    break;
                }
                case 'd':{
                    float RL1,RW1,RL2,RW2;//Rectangle length 1, width 1; Rectangle length 2, width 2
                    cout<<"\nPlease enter the dimensions of two "
                            "rectangles(Length1 Width1 Length2 Width2)."<<endl;
                    cin>>RL1>>RW1>>RL2>>RW2;
                    if((RL1*RW1)>(RL2*RW2)){
                        cout<<"The first rectangle is larger.\n"<<endl;
                    }
                    else if((RL1*RW1)<(RL2*RW2)){
                        cout<<"The second rectangle is larger.\n"<<endl;
                    }
                    else
                        cout<<"They are the same.\n"<<endl;
                    break;
                }
                case 'e':{
                    float inch,lbs,BMI;
                    cout<<"\nPlease enter your height and weight"
                            "(inches pounds)"<<endl;
                    cin>>inch>>lbs;
                    BMI=(lbs*703)/(pow(inch,2));
                    if(BMI>=18.5 && BMI<=25)
                        cout<<"You have an optimal BMI, your BMI is: "
                                <<BMI<<"\n"<<endl;
                    else if(BMI>25)
                        cout<<"You are overweight, your BMI is: "
                                <<BMI<<"\n"<<endl;
                    else
                        cout<<"You are underweight, your BMI is: "
                                <<BMI<<"\n"<<endl;
                    break;
                }
                case 'f':{
                    float mass,newtons;
                    cout<<"\nPlease enter the mass of an object:\n"<<endl;
                    cin>>mass;
                    newtons=mass*9.8;
                    cout<<newtons<<" newtons"<<endl;
                    if(newtons>1000)
                        cout<<"The object is too heavy.\n"<<endl;
                    else if(newtons<10)
                        cout<<"The object is too light.\n"<<endl;
                    break;
                }
                case 'g':{
                   float seconds;
                    cout<<"\nPlease enter the number of seconds:"<<endl;
                    cin>>seconds;
                    if(seconds>=86400)
                        cout<<seconds/86400.0<<" day(s)\n"<<endl;
                    else if(seconds>=3600)
                        cout<<seconds/3600.0<<" hour(s)\n"<<endl;
                    else if(seconds>=60)
                        cout<<seconds/60.0<<" minute(s)\n"<<endl;
                    else
                        cout<<seconds<<" second(s)\n"<<endl;
                    break;
                }
                case 'h':{
                    unsigned seed = time(0);//gets the system time
                    srand(seed);//seed the random number generator
    
                    short num1, num2, min, max, sum, ans;
                    min = 100;
                    max = 999;

                    num1 = (rand()%(max-min+1))+min;
                    num2 = (rand()%(max-min+1))+min;

                    cout<<"\nwhat is "<<num1<<"\n       +"<<num2<<endl;

                    sum=num1+num2;
                    cout<<"\nWhat is the answer?"<<endl;
                    cin>>ans;

                    if (cin.get() == '\n')
                        if(ans==sum)
                            cout<<"\nYou got it right!\n"<<endl;
                        else
                            cout<<"\nSorry, that's not right, it's "
                                    <<sum<<"\n"<<endl;
                    
                    break;    
                }
                case 'i':{
                    float num;
                    cout<<"\nPlease enter the number of packages sold:"<<endl;
                    cin>>num;
                    if(num>0)
                        if(num>=100)
                            cout<<"\nThe cost is "<<(num*99)*.5<<"\n"<<endl;
                        else if(num>=50 && num<=99)
                            cout<<"\nThe cost is "<<(num*99)*.4<<"\n"<<endl;
                        else if(num>=20 && num<=49)
                            cout<<"\nThe cost is "<<(num*99)*.3<<"\n"<<endl;
                        else if(num>=10 && num<=19)
                            cout<<"\nThe cost is "<<(num*99)*.2<<"\n"<<endl;
                        else
                            cout<<"\nThe cost is "<<(num*99)<<"\n"<<endl;
                    else
                        cout<<"The number must be larger than 0."<<endl;
                    break;
                }
                case 'j':{
                    float books;
                    cout<<"\nPlease enter the number of books bought:"<<endl;
                    cin>>books;
                    if(books>=0)
                        if(books>=4)
                            cout<<"\nThe points awarded is 60\n"<<endl;
                        else if(books>=3)
                            cout<<"\nThe points awarded is 30\n"<<endl;
                        else if(books>=2)
                            cout<<"\nThe points awarded is 15\n"<<endl;
                        else if(books>=1)
                            cout<<"\nThe points awarded is 5\n"<<endl;
                        else
                            cout<<"\nThere are no points awarded\n"<<endl;
                    else
                        cout<<"You can't buy a negative number of books."<<endl;
                    break;
                }
                case 'k':{
                    float weight,dstnce,chrgs;
                    cout<<"\nPlease enter the weight of the object in kg, "
                            "then the distance to be shipped:"<<endl;
                    cin>>weight>>dstnce;
                    if((weight<0||weight>20)||(dstnce<10||dstnce>3000))
                        cout<<"The item can not be shipped.\n"<<endl;
                    else if(weight<=2)
                        if(dstnce<=500)
                            chrgs=1.10;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*1.10)+1.10;
                    else if(weight<=6)
                        if(dstnce<=500)
                            chrgs=2.20;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*2.20)+2.20;
                    else if(weight<=10)
                        if(dstnce<=500)
                            chrgs=3.75;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*3.75)+3.75;
                    else if(weight<=20)
                        if(dstnce<=500)
                            chrgs=4.80;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*4.80)+4.80;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"The total charges are "<<chrgs<<"\n"<<endl;
                    break;
                }
                case 'x':{
                    cout<<"\nThe (a)first problem decides which of two numbers "
                            "is larger."<<endl;
                    cout<<"\nThe (b)second problem gives you a roman numeral "
                            "for 1-10."<<endl;
                    cout<<"\nThe (c)third problem decides if a calendar date "
                            "is magic."<<endl;
                    cout<<"\nThe (d)fourth problem decides which of two "
                            "rectangles is larger."<<endl;
                    cout<<"\nThe (e)fifth problem calculates your BMI."<<endl;
                    cout<<"\nThe (f)sixth problem calculates newtons from "
                            "mass."<<endl;
                    cout<<"\nThe (g)seventh problem calculates time from "
                            "seconds."<<endl;
                    cout<<"\nThe (h)eighth problem is a simple math "
                            "tutor."<<endl;
                    cout<<"\nThe (i)ninth problem calculates the price of a "
                            "software order."<<endl;
                    cout<<"\nThe (j)tenth problem calculates book club "
                            "points."<<endl;
                    cout<<"\nThe (k)eleventh problem calculates charges for a "
                            "shipping company.\n"<<endl;
                    break;
                }
                default:{
                        cout<<"Exit"<<endl;
                        loop=false;
                        break;
                }
        };
    }while(loop);//Upper do-while
    return 0;
}

