#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n <= 9)
    {
        return n;
    }
    int i = n % 10;
    return i + sumOfDigits(n / 10);
}

int main()
{
    cout << sumOfDigits(7777777) << endl;
}