#include <iostream>

using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is" << endl
             << id << "and this is employee no" << count << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is" << count << endl;
    }
};
int employee::count;

int main()
{
    employee adarsh, avinash, raj;

    adarsh.setdata();
    adarsh.getdata();
    employee::getcount();

    avinash.setdata();
    avinash.getdata();
    employee::getcount();

    raj.setdata();
    raj.getdata();
    employee::getcount();

    return 0;
}