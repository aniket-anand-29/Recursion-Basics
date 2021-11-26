#include <iostream>
using namespace std;
bool checkNumber(int a[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (a[0] == x)
    {
        return true;
    }

    bool smallAns = checkNumber(a + 1, n - 1, x);

    return smallAns;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    bool check = checkNumber(a, 8, 2);
    cout << check << endl;
}