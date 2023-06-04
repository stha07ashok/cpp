#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
//this will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4    4 5
    a = b;               //4    5 5
    b = temp;            //4    5 4
}

//call by reference by using pointer
void swapPointer(int *a, int *b){ //temp a b
    int temp = *a;        //4    4 5
   * a = *b;               //4    5 5
   * b = temp;            //4    5 4
}

//call by reference using c++ reference variables
void swapReference(int &a, int &b){ //temp a b
    int temp = a;                  //4    4 5
    a = b;                        //4    5 5
    b = temp;                      //4    5 4
}

 
int main (){
    int a = 4, b= 5;
    //cout<<"the sum of 4 and 5 is "<<sum(a,b);
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    //swap(x,y) this wil not sqap a and b
    //swapPointer(&a, &b); this will swap a and b using pointer reference
    swapReference(a,b);//this will swap a and b using reference variables
    cout << "the value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}