#include<stdio.h>

double square(double x){
    return x*x;
}
int main()
{
    double ans = square(4.4);
    printf("By returning, ans is %.2lf\n",ans);

    return 0;
}