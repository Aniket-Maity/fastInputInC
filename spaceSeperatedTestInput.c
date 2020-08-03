#include<stdio.h>
#include<stdlib.h>
// #include<sys/time.h>
#define gcx getchar_unlocked
#define pcx putchar_unlocked
typedef long int lint;

static inline lint getValue(){
    lint n = 0;
    int c = gcx();
    while(c<'0' || c>'9') c = gcx();
    while(c>='0' && c<='9'){
        n = n*10 + c-'0';
        c=gcx();
    }
    return n;
}
int main(){
    // int n;
    // clock_t tic = clock();

    // lint n = getValue();
    // scanf("%d",&n);
    

    
    lint n = getValue();
    lint arr[n];
    for(int i=0;i<n;i++){
        arr[i] = getValue();
    }
    // clock_t toc = clock();
    // printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}