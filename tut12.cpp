#include<iostream>
using namespace std;

//function prototype
/*type function-name (arguments);
*/
//int sum(int a , int b){ => acceptable
//int sum(int a , b){ =>not acceptable
int sum(int , int );    //=>acceptable
//void g(void);
void g();
    
    


int main (){
    int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout <<"the sum is "<<sum(num1, num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
    //a and b will be taking vale¥ues from actual parameters num1 and num2
    //a and b are formal parameters
    int c = a+b;
    return c;
}

void g(){
    cout<<"hello good morning"<<endl;
}