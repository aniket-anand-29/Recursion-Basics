#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int smallAns1 = fibonacci(n - 1);
    int smallAns2 = fibonacci(n - 2);

    return smallAns1 + smallAns2;
}
int main()
{
    int n;
    cin >> n;
    int fib = fibonacci(n);
    cout << fib << endl;
}