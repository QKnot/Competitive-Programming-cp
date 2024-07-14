#include <stdio.h>
#include <stdbool.h>

void QKnot() 
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);

    bool data[26] = {false};
    int count = 0;
    for(int i = 0; i < n; i++){
        if(!data[s[i] - 'a']) {
            count++;
            data[s[i] - 'a'] = true;
        }
    }
    printf("%d\n", count);
}

int main()
{
    int test;
    scanf("%d", &test);
    while(test--) QKnot();
    return 0;
}
