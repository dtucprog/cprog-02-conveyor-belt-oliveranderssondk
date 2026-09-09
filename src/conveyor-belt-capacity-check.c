    #include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// YOUR CODE HERE
    scanf("%d", &motorCount);
scanf("%d", &totalPackageWeight);
        if (totalPackageWeight < motorCount) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
}  /// END
