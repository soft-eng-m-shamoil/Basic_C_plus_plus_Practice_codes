#include <iostream>
using namespace std;

class r_num
{
    private:
        int num;
        int dnum;
        int lcm;
    public:
        r_num(int n , int dn):num(n),dnum(dn){}

        void get()
        {
            cout << num << "/" << dnum;
        }

        friend r_num addition(r_num num1 , r_num num2);
};

r_num addition(r_num num1 , r_num num2)
{
    lcm = lcm_calc(num1.dnum,num2.dnum);
}

int lcm_calc(int d1, int d2)
{
    int *D1 = new int ;
    *D1= d1;
    int*D2 = new int;
    *D2 = d2;
    int *ptr = new int;
    *ptr = 0;

    int counter = 1;
    while(counter < *D1 && counter < *D2)
    {
        if(counter % *D1)
        {
            
        }
    }
}

int main()
{
    r_num r1(9,4);
    r1.get();
}