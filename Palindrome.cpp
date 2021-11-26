#include <iostream>
using namespace std;
int length(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
bool checkPalindrome(char a[], int si, int ei)
{
    if (a[0] == '\0' || a[1] == '\0')
    {
        return true;
    }
    if (si >= ei)
    {
        return true;
    }
    if (a[si] == a[ei])
    {
        return checkPalindrome(a, si + 1, ei - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    char a[] = "ADBA";
    int si = 0;
    int ei = length(a) - 1;
    cout << checkPalindrome(a, si, ei) << endl;
}