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

void removeX(char s[], int start)
{
    if (s[start] == '\0')
    {
        return;
    }
    removeX(s, start + 1);
    if (s[start] == 'x')
    {
        int len = length(s);
        int i;
        for (i = start + 1; i < len; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = '\0';
    }
}
int main()
{
    char s[] = "xxxabx";
    removeX(s, 0);
    cout << s << endl;
}