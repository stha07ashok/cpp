#include<iostream>
using namespace std;
int main(){
    //cout<<"this is tutorial";
    int age;
    cout<<"tell me your age:";
    cin>>age;

    //selection control structure : if else if else ladder
    // if((age<18) && (age>0)){
    //     cout <<"you cannot come to my part"<<endl;

    // }
    // else if(age==18){
    //     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not yet born";
    // }
    // else{
    //     cout<<"you can come to party"<<endl;
    // }


    //selection control structure : switch case statement
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break; 
    case 2:
        cout<<"you are 2"<<endl;
        break;       
    
    default:
    cout<<" no special cases"<<endl;
        break;
    }
    cout<<"done with switch case";

 

    return 0;
}