#include<iostream>
using namespace std;
class Example{
    public:
    ~Example(){
        cout<<"Destructor is Called."<<endl;
    }
};
int main()
{
    Example obj;
    return 0;
}