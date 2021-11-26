#include <iostream>
using namespace std;
void allIndices(int a[], int n, int x, int currIndex)
{
    if (n == 0)
    {
        return;
    }
    if (currIndex == n)
    {
        return;
    }
    if (a[currIndex] == x)
    {
        cout << currIndex << " ";
    }
    allIndices(a, n, x, currIndex + 1);
}

int main()
{
    int a[] = {9, 8, 10, 8, 15, 20, 25, 8, 8, 2, 8, 9, 8, 10, 8, 11, 8};
    int x = 8;
    int size = 4;
    allIndices(a, 17, 8, 0);
    cout << endl;
    return 0;
}