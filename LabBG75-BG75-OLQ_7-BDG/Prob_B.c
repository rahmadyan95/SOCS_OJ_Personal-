#include<stdio.h>
#define ll long long int 

int main (){
    ll n, a= 0;
    scanf("%lld",&n);
    for (int i = 0; i < n; i++){
        a += 100 + 50 * i;
    }
    printf ("%lld",a);
}