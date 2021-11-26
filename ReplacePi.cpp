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

void replacePi(char s[], int start)
{
    if (s[start] == '\0' || s[start + 1] == '\0')
    {
        return;
    }
    replacePi(s, start + 1);
    if (s[start] == 'p' && s[start + 1] == 'i')
    {
        int len = length(s);
        cout << len << endl;
        s[len + 2] = '\0';

        for (int i = len - 1; i >= start + 2; i--)
        {
            s[i + 2] = s[i];
        }

        s[start] = '3';
        s[start + 1] = '.';
        s[start + 2] = '1';
        s[start + 3] = '4';
    }
}

int main()
{
    char s[] = "pixyppipopi";
    replacePi(s, 0);
    cout << s << endl;
}