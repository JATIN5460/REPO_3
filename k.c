#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder, original_num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    original_num = num;

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    // Compare the reversed number to the original number
    if (original_num == reversed_num) {
        printf("%d is a palindrome\n", original_num);
    } else {
        printf("%d is not a palindrome\n", original_num);
    }

    return 0;
}
