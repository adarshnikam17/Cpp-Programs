#include<iostream>
using namespace std;

class employee
{
    int salary;
    int id;
    int num[10];
    char emailid;

    public:
    void setId(void)
    {
        salary=2000;
        cout<<"Enter the id of employee: "<<endl;
        cin>>id;
        cout<<"Enter the mobile number of employee: "<<endl;
        cin>>num[10];
        cout<<"Enter the email id of employee: "<<endl;
        cin>>emailid;
    }
    void getId(void)
    {
        cout<<"The id of employee is: "<<id<<endl;
        cout<<"The mobile number of employee is: "<<num<<endl;
        cout<<"The email id of employee is: "<<emailid<<endl;
        cout<<"The salary of employee is: "<<salary<<endl;
    }
};

int main()
{
    
    employee fb[4];
    
    for(int i=0;i<4;i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}