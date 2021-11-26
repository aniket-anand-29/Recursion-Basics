#include <iostream>
using namespace std;

int length(char s[]){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}

void PairStar(char s[], int start){
    if(s[start] == '\0'){
        return;
    }
    PairStar(s, start+1);
    if(s[start] == s[start+1]){
        int len = length(s);
        int i;
        for(i = len-1; i >= start+1; i--){
            s[i+1] = s[i];
        }
        s[i+1] = '*';
    }
}

int main(){
    char s[] = "ssddxx";
    PairStar(s, 0);
    cout << s << endl;
}