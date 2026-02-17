#include <stdio.h>

int main(){
 int x,y,z;

 printf("Enter a number\n: ");
 scanf("%d",&x);
 printf("Enter a number\n: ");
 scanf("%d",&y);
 printf("Enter a number\n: ");
 scanf("%d",&z);

 if (x>y && x>z){
    printf("%d This is the largest number\n", x);
 } else if (y>x && y>z) {
    printf("%d This is the largest number\n", y);
 } else {
    printf("%d This is the largest number\n", z);
 }

 return 0;
}



/*
int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");*/
// Short hand if else example 