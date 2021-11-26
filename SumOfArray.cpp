#include <iostream>
using namespace std;
int sumOfArray(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = a[0] + sumOfArray(a + 1, n - 1);

    return smallAns;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sumArray = sumOfArray(a, 10);
    cout << sumArray << endl;
}