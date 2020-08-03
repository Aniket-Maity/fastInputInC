#include<stdio.h>
#include<stdlib.h>
#define gcx getchar_unlocked
#define pcx putchar_unlocked
typedef long int lint;

lint getValue(){
    lint n = 0;
    int c = gcx();
    while(c<'0' ||c>'9') c = gcx();
    while(c>='0' && c<='9'){
        n = n*10 + c-'0';
        c=gcx();
    }
    return n;
}
void putsx(char *s){
    while(*s) pcx(*s++);
}
int gcd(lint a,lint b){
    if(b) return gcd(b,a%b);
    return a;
}
int main(){
    putsx("enter the values");
    lint n = getValue();
    //this is a test 1 *****
    // while(n--){
    //     lint a = getValue();
    //     lint b = getValue();
    //     if(a==b) putsx("yes\n");
    //     else putsx("no\n");
    // }
    //this is a test 2 *****
    lint arr[2];
    while(n--){
        for(int i=0;i<2;i++){
            arr[i] = getValue();
        }
        arr[0] = gcd(arr[0],arr[1]);
        if(arr[0] & arr[0]-1) putsx("No\n");
        else putsx("Yes\n");
    }
}