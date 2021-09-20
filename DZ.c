#include <stdio.h>
#include <math.h>

int inv(int n){
    int r = 0;
    while(n){
        r *= 10;
        r += n%10;
        n /= 10;
    }
    return r;
}

int palm(int n){
    int f=1, p=0, c=0;
    while(f){
        c++;
        p = inv(n);
        if (p == n) f=0;
        else n+=p;
    }
    c--;
    printf("Ya nashel za %d iteracii\n", c);
    return p;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Polidrom of %d is %d\n", n, palm(n));
    printf("-------------------DZ-------------------\n");
    printf("Sizeof(int) - %d bait = %d bit\n", sizeof(int), sizeof(int)*8);
    int need = pow(2, 31)-1;
    printf("Therefore max int number is - %d\n", need);
    printf("Max polindrom is 2147447412\n");
    printf("-------------------END-DZ-------------------\n");
    return 0;
}