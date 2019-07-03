#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    char s[10];
    scanf("%s", s);
    
    if(s[0] == s[1] && s[1] != s[2] && s[2] == s[3]){printf("Yes\n");}
    else if (s[0] == s[2] && s[2] != s[1] && s[1] == s[3]){printf("Yes\n");}
    else if (s[0] == s[3] && s[0] != s[1] && s[1] == s[2]){printf("Yes\n");}
    else{printf("No\n");}
    
    return 0;
}
