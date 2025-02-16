#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch, s[100], sen[100];
    scanf("%c", &ch);
    scanf("%s", s); //no need of using amperson symbol while storing string in a variable
    getchar(); //this will take over the leftover new line from the previous input
    fgets(sen, 100, stdin);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
