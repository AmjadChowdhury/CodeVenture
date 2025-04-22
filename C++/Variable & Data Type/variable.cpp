#include<iostream>

int main()
{
    // integer data type....
    int age; // variable declaration
    age = 22; // assign value
    int year = 2025;
    int day = 7;
    std::cout<<age<<"\n";

    // double data type.whice take decimal value..
    double marks = 45.89;
    double cgpa = 3.65;
    // const which can't change
    const double PI = 3.1416;
    std::cout<<cgpa<<"\n";

    // character data type. which take single character in ''
    char alphabet1 = 'A';
    char alphabet2 = 'G';
    char dollarSign = '$';
    std::cout<<dollarSign<<"\n";

    // boolean data type.which take onle true or false
    bool isGood = true;
    bool isNight = false;
    std::cout<<isNight<<"\n";

    // string(object that represent sequence of text)
    std::string name = "Amjad chy";
    std::string dept = "IIT";
    std::cout <<"Hello! "<<name<<".Tumi ki "<<dept<<" te poro?"<<std::endl;


    return 0;
}