#include<iostream>
using namespace std;

int main (){

    //array example
    int marks[4]={23,24,25,26};
    int mathhMarks[4];
    mathhMarks[0]=2278;
    mathhMarks[1]=738;
    mathhMarks[2]=233;
    mathhMarks[2]=534;

    cout<<"these are math marks"<<endl;
    cout<<mathhMarks[0]<<endl;
    cout<<mathhMarks[1]<<endl;
    cout<<mathhMarks[2]<<endl;
    cout<<mathhMarks[3]<<endl;

    cout<<"these are marks"<<endl;
    // cout <<marks[0]<<endl;
    // cout <<marks[1]<<endl;
    // marks[2]=455; //you can change the value of array
    // cout <<marks[2]<<endl;
    // cout <<marks[3]<<endl;
    // return 0;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"the value of marks "<<i<<" is :"<<marks[i]<<endl;
    }
    


    //pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"the value of *p is"<<*p<<endl;
    // cout<<"the value of *(p+1) is"<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is"<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is"<<*(p+3)<<endl;
    return 0;
    
}