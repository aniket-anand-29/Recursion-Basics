#include <iostream>
using namespace std;
int mul(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    if (b > a)
    {
        return mul(b, a);
    }

    return a + mul(a, b - 1);
}

int main()
{
    cout << mul(100, 34) << endl;
}