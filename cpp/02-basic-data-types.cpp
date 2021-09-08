#include <iostream>
#include <cstdio>
using namespace std;

int a;
long b;
char c;
float d;
double e;

int main() {
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);

    printf("%d", a);printf("\n");
    printf("%ld", b);printf("\n");
    printf("%c", c);printf("\n");
    printf("%lf", d);printf("\n");
    printf("%f", e);printf("\n");
    return 0;
}