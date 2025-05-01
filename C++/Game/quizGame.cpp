#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string questions[] = {"1. Which of the following is used to create an object in C++?","2. What is the default access specifier for members of a class in C++?","3. Which of the following is not a valid C++ data type?"};

    string options[][4] = {{"A) #include","B) class","C) new","D) malloc"},
                          {"A) public","B) private","C) protected","D) static"},
                          {"A) float","B) real","C) int","D) double"}};

    char answer[] = {'C','B','A'};
    char ans;
    int correctGuess = 0;

    for(int i=0;i<sizeof(questions)/sizeof(questions[0]);i++)
    {
        cout<< questions[i] << endl;

        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++)
        {
            cout<<options[i][j]<<endl;
        }
        cout<< "Please choose correct option from below : ";
        cin >> ans;
        if(toupper(ans) == answer[i])
        {
            cout<<"CORRECT!\n";
            correctGuess++;
        }
        else
        {
            cout<<"WRONG!\n";
        }
    }

    cout<< "Correct ans "<<correctGuess<<"/"<<sizeof(questions)/sizeof(questions[0])<<endl;

    return 0;
}