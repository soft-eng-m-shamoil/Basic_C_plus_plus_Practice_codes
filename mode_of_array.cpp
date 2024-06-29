#include <iostream>
using namespace std;

int main()
{   
    int array[10]={2, 4, 2, 6, 5, 2, 7, 1 ,5 ,4};
    int check[10]={0,0,0,0,0,0,0,0,0,0};
    int mode;

    for(int counter=0; counter<10; counter++)
    {
        for(int count=0; count<10; count++)
        {
            if(array[counter]==array[count])
            {
                check[counter]++;
            }
        }
    }

    mode = check[0];
    int highest_index ;

    for(int counter=0; counter<10; counter++)
    {
        if(mode<check[counter])
        {
            mode = check[counter];
            highest_index=counter;
        }
    }

    cout << "Mode of array is : " << check[highest_index];
    return 0;

}