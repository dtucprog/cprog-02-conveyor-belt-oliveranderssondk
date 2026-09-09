#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    #include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// YOUR CODE HERE
    scanf("%d", &motorCount);
    printf("How many motors are carrying the packages?: %d\n", motorCount);
scanf("%d", &totalPackageWeight);
    printf("How many kg of packages do we expect?: %d\n", totalPackageWeight);
        if (totalPackageWeight < motorCount) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
}  /// END
