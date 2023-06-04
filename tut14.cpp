#include<iostream>
using namespace std;

int product(int a, int b){
    //not recomended to use below lines with inline functions
    //static int c= 0;// this executes only once
    // c = c+1;//next time this function is run, the value of c will be retained
    return a*b;
}

float moneyRecivied(int currentMoney, float factor = 1.04){
    return currentMoney * factor;

}

//int strlen(const char*p){

//}

int main (){
    int a,b;
    //cout<<"enter the value of a and b ";
    //cin>>a>>b;
   // cout<<"the product of a and b is "<<product(a,b);
   int money=10000;
   cout <<"if you have "<<money<<" rs in your bank account, you will receive"<<moneyRecivied(money,1.1)<<"rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyRecivied(money, 1.1)<< " Rs after 1 year";   
    return 0;
}