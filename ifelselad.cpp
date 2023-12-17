#include<iostream>

using namespace std;

int main()
{
    int age;

    cout<<"Tell me your age "<<endl;
    cin>>age;

    if (age<18)
    {
        cout<<"You are not eligible for pass "<<endl;
    }
    else if (age==18)
    {
      cout<<"You are now 18 so u not eligible "<<endl;
    }
    else
    {
        cout<<"You are eligible for pass "<<endl;
    }

    return 0;
    
}