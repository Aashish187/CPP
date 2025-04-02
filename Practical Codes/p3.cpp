#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    string name;
    string EmployeeId;
    double salary;
    void get_detail();
    void show_detail();
};
void employee::get_detail(){
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter YOur EmployeeId : ";
    cin>>EmployeeId;
    cout<<"Enter your Salary : ";
    cin>> salary;
}
void employee::show_detail(){
    cout<<" Employee Details "<<endl;
    cout<<name<<endl;
    cout<<EmployeeId<<endl;
    cout<<salary<<endl;
}
int main()
{
    employee A;
    A.get_detail();
    A.show_detail();
    return 0;
}