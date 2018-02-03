#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int gameOfThrones(char* s){
    int odd=0;
    int arr[256]={0};
    for(int i=0;i<strlen(s);i++)
    {
        arr[s[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if((arr[i]%2)==1)
        {
            odd=odd+1;
              
        }
        if(odd==2)
            return 1;
    }
    return 0;
    // Complete this function
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    int result = gameOfThrones(s);
    if(result==0)
        printf("YES");
    else
        printf("NO");
 //   printf("%s\n", result);
    return 0;
}
