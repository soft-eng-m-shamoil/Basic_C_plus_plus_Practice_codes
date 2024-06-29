#include <iostream>
using namespace std;

class GCD
{
private:
    int num1;
    int num2;

public:
    GCD(int n1 = 1, int n2 = 1) : num1(n1), num2(n2) {}

    int calculation();

    int get_GCD()
    {
        return calculation();
    }
};

 int GCD::calculation()
 {
     int gcd = 1;
     int divisor = 1;
     while (divisor<=num1 && divisor <=num2)
     {
         if (num1%divisor == 0 && num2%divisor == 0)
             gcd = divisor;
         divisor++;
     }
     return gcd;
 }

int GCD::calculation()
{
    
}

int main()
{
    GCD cal(128, 96);
    cout << cal.get_GCD();
}