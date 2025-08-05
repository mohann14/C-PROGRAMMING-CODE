#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    if(n%4==0 && n%400==0)
    printf("Leap year");
    else
    printf("Not leap year");
    return 0;
}
