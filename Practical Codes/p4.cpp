#include<iostream>
using namespace std;
class PrimeNumber{
    public:
    int number;
    void getnumber(){
        cout<<"Enter The Number: ";
        cin>>number;
    }
    bool is_prime(){
        if (number<2) return false;
        for (int i =2; i<=number/2;i++){
            if (number%i==0) return false;
        }
        return true;
    }
    void display(){
        if (is_prime()){
            cout<<number<<" is a Prime Number."<<endl;
        }
        else{
            cout<<number<<" is not a Prime Number."<<endl;
        }
    }
};
int main()
{
    PrimeNumber check;
    check.getnumber();
    check.display();
    return 0;
}