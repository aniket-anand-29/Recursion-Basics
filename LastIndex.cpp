#include <iostream>
using namespace std;
int lastIndexHelper(int a[], int n, int x, int curr)
{
    if (n <= curr)
    {
        return -1;
    }
    if (a[curr] == x)
    {
        return curr;
    }
    int smallAns = lastIndexHelper(a, n, x, curr - 1);
    return smallAns;
}
int lastIndex(int a[], int n, int x)
{
    int ans = lastIndexHelper(a, n, x, n - 1);
    return ans;
}
int main()
{
    int a[] = {9, 8, 10, 8, 9, 10, 11, 12, 21, 13, 12, 14, 13, 13, 13};
    cout << lastIndex(a, 15, 14) << endl;
}