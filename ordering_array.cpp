#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int array[size];
    int array_copy[size];
    int Ascending_array[size];
    int Descending_array[size];

    for(int num=0; num<size; num++)
    {
        cout << "Enter value : ";
        cin >> array[num];
        array_copy[num] = array[num];
    }


    for(int count=0; count<size; count++)
    {
        int temp=0;

        for(int trigger=0; trigger <size; trigger++)
        {
            if (temp<array[trigger])
            temp = array[trigger];
        }


        for(int counter=0;counter<size;counter++)
        {
            if (array[counter] == temp)
            {
                array[counter]=0;
                Ascending_array[count]=temp;
                break;
            } 
        }
    }

    cout << "Descending array is : ";
    for(int number=0; number < size; number++)
    {
        cout << Ascending_array[number] << ", ";
    }

    for(int stack=0; stack < size ; stack++)
    {
        array[stack]=array_copy[stack];
    }

    for(int count=0; count<size; count++)
        {
            int temp=9999;
    
            for(int trigger=0; trigger <size; trigger++)
            {
                if (temp>array[trigger])
                temp = array[trigger];
            }
    
    
            for(int counter=0;counter<size;counter++)
            {
                if (array[counter] == temp)
                {
                    array[counter]=99999;
                    Descending_array[count]=temp;
                    break;
                } 
            }
        }

          cout << "\nAscending array is : ";
    for(int number=0; number < size; number++)
    {
        cout << Descending_array[number] << ", ";
    }
}