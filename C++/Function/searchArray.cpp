#include<iostream>
using namespace std;

int searchArray(int array[],int size,int element);

int main()
{
    int number;
    int numbers[] = {2,1,5,6,9,3,4,10,7,8};
    cout<<"Enter a number : ";
    cin >> number;

    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index = searchArray(numbers,size,number);

    if(index != -1)
    {
        cout << number <<" found at position "<<index<< " \n";
    }
    else
    {
        cout<< number << " not found.\n";
    }



    return 0;
}

int searchArray(int array[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }
    return -1;
}