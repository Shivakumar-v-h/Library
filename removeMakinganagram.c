#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* a = (char *)malloc(512000 * sizeof(char));
    scanf("%s",a);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);
    int ar1[256]={0};
    int ar2[256]={0};
    int i=0;
    while(a[i]!='\0')
    {
        ar1[a[i]]++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        ar2[b[i]]++;
        i++;
    }
    int count=0;
    for(int j=0;j<256;j++)
    {
        if(ar1[j]>ar2[j])
            count=count+(ar1[j]-ar2[j]);
        else if(ar1[j]<ar2[j])
            count=count+(ar2[j]-ar1[j]);
    }
    printf("%d",count);
    return 0;
}
