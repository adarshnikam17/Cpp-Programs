#include<iostream>

using namespace std;

struct student
{
    char name;
    int id;
    float marks;
};

int main()
{
    struct student adarsh;

    adarsh.name='a';
    adarsh.id=2211;
    adarsh.marks=90.20;

    cout<<"The name of student is "<<adarsh.name<<endl;
    cout<<"The id of student is "<<adarsh.id<<endl;
    cout<<"The marks of student is "<<adarsh.marks<<endl;

    return 0;
}