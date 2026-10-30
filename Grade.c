#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade A - Excellent! 🌟");
    } 
    else if (marks >= 75) {
        printf("Grade B - Very Good!");
    } 
    else if (marks >= 50) {
        printf("Grade C - Good, need improvement");
    } 
    else if (marks >= 33) {
        printf("Grade D - Just Passed");
    } 
    else {
        printf("Fail - Try again next time!");
    }
    return 0;
}