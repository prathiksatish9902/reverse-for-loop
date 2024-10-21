#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "hello world";
    int len = strlen(s);
        printf("reversed : ");
    for(int i = len - 1 ; i>=0; i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
