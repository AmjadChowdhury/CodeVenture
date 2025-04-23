#include<iostream>
using namespace std;

int main()
{
    cout<<"For continue \n";
    for(int i=1;i<=10;i++)
    {
        if(i%2 == 1)
        {
            continue;
        }
        cout<<i<<endl;
    }

    cout<<"For break : \n";
    for(int i=1;i<=10;i++)
    {
        if(i==4)
        {
            break;
        }
        cout<<i<<endl;
    }


    return 0;
}

