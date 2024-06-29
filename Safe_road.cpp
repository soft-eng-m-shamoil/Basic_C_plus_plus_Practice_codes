#include <iostream>
using namespace std;


int main()
{
    int accidents[4];
try{
    for(int count =0; count <4;count++)
    {
        cout << "Enter number of accidents on road " << count+1 << " : ";
        cin >> accidents[count];
        if(cin.fail())
        {
            throw accidents[count];
        }
    }

    int safe=accidents[0];
    for(int counter=1;counter<4;counter++)
    {
        if(safe > accidents[counter])
        {
            safe = accidents[counter];
        }

    }

    int safe_count=0;

    for(int number=0;number<4;number++)
    {
        if(safe==accidents[number])
        {
            safe_count++;
        }
    }

    if(safe_count==1)
    {
        for(int trigger=0;trigger<4;trigger++)
        {
            if(safe==accidents[trigger])
            {
                cout << "Road " << trigger+1 << " is the safest";
            }
        }
    }
    else if(safe_count==4)
    {
        cout << "All roads are equally safe";
    }
    else 
    {
        for(int trigger=0;trigger<4;trigger++)
        {
            if(safe==accidents[trigger])
            {
                cout << "Road " << trigger+1 << " safe";
            }
        }
    }

    }
    
    catch(int)
    {
        cout << "Since you gave me wrong output so i am not telling you safe road I pray you die finding that safe road";
    }
}