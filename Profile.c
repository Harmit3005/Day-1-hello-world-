#include <stdio.h>

int main() {
    char name[20];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("\n--- Your Profile ---\n");
    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
    printf("You are a Future Google Engineer!\n");
    
    return 0;
}
