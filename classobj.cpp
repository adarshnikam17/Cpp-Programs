#include<iostream>

using namespace std;

class player
{
    private:
    float age,edu;
    public:
    float runs,hundreds,sr; 


void setdata(float age1,float edu1);
void getdata()
{
    cout<<"The age of virat kohli is"<< age <<endl;
    cout<<"virat kohli education is "<< edu <<endl;
    cout<<"virat kohli runs is"<< runs <<endl;
    cout<<"hundreds of virat kohli is "<< hundreds <<endl;
    cout<<"strike rate of virat kohli is"<< sr <<endl;
}
};
void player :: setdata(float age1,float edu1) 
{
    age = age1;
    edu = edu1;

}
int main()
{
    player virat;
    virat.setdata(34, 12);
    virat.runs = 25000;
    virat.hundreds = 75;
    virat.sr = 137.40;
    virat.getdata();

    return 0;
}