#include<stdio.h>
#include<string.h>

int main()
{
    char f1[200],s1[200],f2[200],s2[200];
    scanf("%s %s %s %s", f1, s1, f2, s2);

    int res = strcmp(s1, s2);

    if(res == 0){
        printf("ARE Brothers");
    }else{
        printf("NOT");
    }
    
    return 0;
}