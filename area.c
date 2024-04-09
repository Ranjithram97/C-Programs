#include<stdio.h>
void circle(float r,float *a,float *p);
void main(){
    float area,perimeter,radius=2.5;
    circle(radius,&area,&perimeter);
    printf("Area of circle=%f\n",area);
    printf("Perimeter of circle = %f",perimeter);
}
void circle(float r,float *a,float *p){
    *a=3.14*r*r;
    *p=2*3.14*r;
}
