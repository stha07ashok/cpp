#include<iostream>
//there  are two types of header files
//1.system header files: it comes with the compiler
//2.user defined header files:it is written by the programer
//#include"this.h"  this will produce an error if this.h id no present in current directary
using namespace std;
int main(){
    int a=4,b=5;
    cout << "this is hellow world program"<<endl;
    cout << "operators in c++"<<endl;
    cout << "following are the tupws of operators in c++"<<endl;
    //arthmetic operators
    cout <<"the value of a+b "<<a+b<<endl;
    cout <<"the value of a-b "<<a-b<<endl;
    cout <<"the value of a*b "<<a*b<<endl;
    cout <<"the value of a/b "<<a/b<<endl;
    cout <<"the value of a%b "<<a%b<<endl;
    cout <<"the value of a++ "<<a++<<endl;
    cout <<"the value of a-- "<<b++<<endl;
    cout <<"the value of ++a "<<++a<<endl;
    cout <<"the value of --a "<<++b<<endl;

    //assignment operators used to addign values to variables
    //int a = 3, b = 9;
    //char d = ' d';

    //comparison operators
    cout<<"the value of a==b is"<<(a==b)<<endl;
    cout<<"the value of a!=b is"<<(a!=b)<<endl;
    cout<<"the value of a>=b is"<<(a>=b)<<endl;   
    cout<<"the value of a<=b is"<<(a<=b)<<endl; 
    cout<<"the value of a<b is"<<(a<b)<<endl; 
    cout<<"the value of a>b is"<<(a>b)<<endl; 
    cout<<endl;

     //logical operators
     cout<<"following are the logical operator in c++"<<endl;
    cout<<"the value of this logical and operator  ((a==b) && (a<b)) is"<<((a==b) && (a<b))<<endl;
    return 0;
    cout<<"the value of this logical or operator  ((a==b) || (a<b)) is"<<((a==b) || (a<b))<<endl;
    cout<<"the value of this logical not operator  (!(a==b)) is"<<(!(a==b))<<endl;
    return 0;
    return 0;

}