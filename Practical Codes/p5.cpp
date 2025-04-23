#include<iostream>
using namespace std;
inline int sum(int a , int b){  // Inline Function 
    return a+b;
}
int main()
{ 
    int a,b;
    cout<<"Enter Num1: ";
    cin>>a;
    cout<<"Enter Num2: ";
    cin>>b;
    cout<<"Sum: "<<sum(a,b)<<endl;
    return 0;
}