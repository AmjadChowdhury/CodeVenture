#include<iostream>
using namespace std;

double getTotal(double pricees[],int size);
int main()
{
    double prices[] = {20.24,43.4,22,77.09};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices,size);
    cout<<total<<endl;

    return 0;
}
double getTotal(double prices[],int size)
{
    double total = 0;
    for(int i=0;i<size;i++)
    {
        total += prices[i];
    }
    return total;
}