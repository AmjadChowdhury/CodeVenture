#include<stdio.h>
int max(int a,int b){
    int max = (a > b) ? a : b;
    return max;
}
int main()
{
    int max_ans = max(5,6);
    printf("Max number is %d!\n",max_ans);

    return 0;
}