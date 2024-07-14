#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        printf("%d\n", (n*(n+1)/2));
    }
   
}