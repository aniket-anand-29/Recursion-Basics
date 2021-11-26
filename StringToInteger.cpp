#include <iostream>
using namespace std;

int length(char s[]){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }

    return count;
}
int stringToInt(char s[], int n){
    if(n == 0){
        return s[n] - '0';
    }
    int smallAns = stringToInt(s,n-1);
    int a = s[n] - '0';

    return smallAns * 10 + a;

}

int main(){
    char s[] = "1234";
    int len = length(s);
    int ans = stringToInt(s , len-1);
    cout << s << " " << ans << endl;
}