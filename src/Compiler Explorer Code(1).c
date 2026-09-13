#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    scanf("%d", &motorCount);
    printf("How many motors are carrying the packages? \n%d\n", motorCount);
    scanf("%d", &totalPackageWeight);
    printf("How many kg of packages do we expect? \n%d\n", totalPackageWeight);
    //Værdierne sætter og outputtes til i linjerne foroven
if (motorCount*12 < totalPackageWeight) {
    printf("No. The conveyor belt cannot carry the packages.");
} else {
    printf("Yes! The conveyor belt can carry the packages.");
}   //efterfølgene kører jeg et if statement der bestemmer otputtet
}