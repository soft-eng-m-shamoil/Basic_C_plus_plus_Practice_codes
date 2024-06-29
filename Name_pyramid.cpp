#include <iostream>
int string_length(std::string name);

int main()
{
    std::string first_name, surname;
    int first_name_length=1, surname_length=0;

    //while(first_name_length != surname_length) 
    //{
        system("CLS");

        std::cout << "Enter Your First Name : ";
        std::cin >> first_name;

        std::cout << "Enter Your Surname : ";
        std::cin >> surname;

        first_name_length = string_length(first_name);
        surname_length = string_length(surname);

        //if(first_name_length!=surname_length)
        //{
        //    std::cout << "Length of first name and second name is not same pls enter equal size names" << std::endl;
        //    system("pause");
        //}
    //}

    system("CLS");
    std::cout << "First Name : " << first_name << '\n';
    std::cout << "Surname : " << surname << std::endl;

    int length;
    bool first_finish_check=false;

    if(first_name_length>surname_length)
    {
        length=first_name_length;
    }
    else
    {
        length = surname_length;
    }

    for(int count =0 ; count < length; count++)
    {
        for(int trigger =0 ; trigger< first_name_length-(count-1); trigger++)
        {
            std::cout << " ";
        }

        if(first_name[count]=='\0' || first_finish_check ==true)
        {
            std::cout << " ";
            first_finish_check=true;
        }
        else
            std::cout << first_name[count];

        for(int striker=0; striker < count*2; striker++)
        {
            std::cout << " ";
        }

        std::cout << surname[count] << std::endl;
    }

}

int string_length(std::string name)
{
    int length=0;
    int counter=0;

    while(name[counter]!='\0')
    {
        length++;
        counter++;
    }

    return length;
}
