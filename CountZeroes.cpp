#include <iostream>
using namespace std;

int countZeroes(int n)
{
    if (n <= 9)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int i = 0;
    if (n % 10 == 0)
    {
        i = 1;
    }
    int smallAns = countZeroes(n / 10);

    return i + smallAns;
}
int main()
{
    cout << countZeroes(20120100) << endl;
}