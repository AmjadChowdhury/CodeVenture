#include<iostream>
using namespace std;
// Function overloading in C++ is a feature that allows you to define multiple functions with the same name but with different parameter lists (i.e., different number or types of parameters). The correct function to call is determined by the arguments passed during the function call—this is known as compile-time polymorphism.

void bakePizza()
{
    cout<<"Here is your pizza!\n";
}
void bakePizza(string topping1)
{
    cout<<"Here is your " << topping1<< " pizza !\n";
}
void bakePizza(string topping1,string topping2)
{
    cout<<"Here is your " << topping1<< " and "<< topping2 <<" pizza!\n";
}

int main()
{

    bakePizza();
    bakePizza("pepperoni");
    bakePizza("Pepperoni","Mushroom");

    return 0;
}