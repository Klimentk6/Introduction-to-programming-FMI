#include <iostream>

using namespace std;

int sortDigits(unsigned int number)
{
    unsigned int result = 0;
    int numberCount = 0;
    int loopNumber = number;

    while(loopNumber != 0)
    {
        loopNumber /= 10;
        numberCount++;
    }

    for(int i = 9; i >= 0; i--)
    {
        int digitCount = 0;
        loopNumber = number;

        while(loopNumber != 0)
        {
            int digit = loopNumber % 10;
            loopNumber /= 10;
            if(digit == i)
            {
                digitCount++;
            }
        }

        for(int j = 0; j < digitCount; j++)
        {
            result += i * pow(10, numberCount - 1);
            numberCount--;
        }
    }
    return result;
}

int main()
{
    cout << sortDigits(4791257) << std::endl;
    cout << sortDigits(1000) << std::endl;
}
