#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r;
    double ci;
    scanf("%f %f %f",&p,&r,&t);
    ci=(p)*(pow(1+(r/100.0),t));
    printf("%.2lf",ci);
}