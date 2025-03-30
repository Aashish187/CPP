#include<iostream>
using namespace std;
class number{
    public:
    int a;
    int b;
    void getdata(void);
    void putdata(void);
};
void number::getdata(void){
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;

}
void number::putdata(void){
    cout<<"The Difference of a and b is: "<<(a-b)<<".";
}
int main()
{
    number x;
    x.getdata();
    x.putdata();
    return 0;
}