#include <stdio.h>

int main(){
    float maths,science,english;

    printf("enter your maths marks: ");
    scanf("%f", &maths);

    printf("enter your science marks: ");
    scanf("%f", &science);

    printf("enter your english marks: ");
    scanf("%f", &english);

    float totalmarks=maths+science+english;

    printf("total marks %.2f\n",totalmarks);
    printf("avg marks %.2f\n", totalmarks/3);


    

    return 0;



}