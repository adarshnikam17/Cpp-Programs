#include<iostream>

using namespace std;

int main()
{
    int marks[]={15,16,17,18};

    int mathmark[4];

    mathmark[0]=1800;
    mathmark[1]=1900;
    mathmark[2]=2000;
    mathmark[3]=3000;

    cout<<"These are math marks"<<endl;

    cout<<mathmark[0]<<endl;
    cout<<mathmark[1]<<endl;
    cout<<mathmark[2]<<endl;
    cout<<mathmark[3]<<endl;

    marks[2]=20;

    cout<<"These are marks "<<endl;
     
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    return 0;   
}