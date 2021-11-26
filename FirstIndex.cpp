#include <iostream>
using namespace std;
int firstIndexHelper(int a[], int n, int x, int currIndex)
{
    if (n == currIndex)
    {
        return -1;
    }
    if (a[currIndex] == x)
    {
        return currIndex;
    }
    int smallAns = firstIndexHelper(a, n, x, currIndex + 1);
    return smallAns;
}

int firstIndex(int a[], int n, int x)
{
    int ans = firstIndexHelper(a, n, x, 0);
    return ans;
}

int main()
{
    int a[] = {9, 8, 10, 8};
    int x = 8;
    int size = 4;

    cout << firstIndex(a, size, x) << endl;

    return 0;
}