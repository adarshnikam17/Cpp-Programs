#include<iostream>

using namespace std;

int main()
{
    int height;

    cout<<"Tell me tour height "<<endl;
    cin>>height;

    switch (height)
    {
    case 152:
        cout<<"you are 152 height"<<endl;
        break;
    case 160:
        cout<<"you are 160 height"<<endl;
        break;
    default:
        cout<<"not special case"<<endl;
        break;
    }
    return 0;
}