#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are an Adult, you can vote!");
    } else {
        printf("You are a Minor!");
    }
    return 0;
}