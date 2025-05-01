#include <iostream>
using namespace std;

class Stove
{
private:
    int temperature = 0;

public:
    Stove(int temperature)
    {
        setTemp(temperature);
    }
    void setTemp(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
    int getTemp()
    {
        return temperature;
    }
};
int main()
{

    Stove stove1(-3);
    cout << stove1.getTemp() << endl;

    Stove stove2(50);
    cout << stove2.getTemp() << endl;

    Stove stove3(7);
    cout << stove3.getTemp() << endl;

    return 0;
}