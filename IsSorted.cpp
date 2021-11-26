#include <iostream>
using namespace std;
bool isSorted(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }

    bool smallAns = isSorted(a + 1, n - 1);
    return smallAns;
}

int main()
{
    int a[] = {1, 2, 3, 10, 5, 6, 7, 8};
    bool sorted = isSorted(a, 8);
    cout << sorted << endl;
}