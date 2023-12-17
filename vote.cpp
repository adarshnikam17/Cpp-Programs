#include<iostream>

using namespace std;

int main()
{
    int age;

    cout<<"Enter your age "<<endl;
    cin>>age;

    if(age<18) 
    {
       cout<<"You are not Vote "<<endl;
    }
    else
    {
        cout<<"You are Vote "<<endl;
    }

    return 0;
    
}