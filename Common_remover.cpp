#include <iostream>

int main()
{
    int size = 20;
    char array[size] = {'A', 'B', 'C', 'B', 'A', 'C', 'D'};

    for (int count = 0; count < 20; count++)
    {
        int check = array[count];
        for (int counter = count; counter < 20; counter++)
        {
            if (check == array[counter] && count != counter)
            {
                array[counter] = '\0';
            }
        }
    }

    for (int trigger = 0; trigger < 20; trigger++)
    {
        if (array[trigger] != '\0')
        {
            std::cout << array[trigger];
        }
    }
}