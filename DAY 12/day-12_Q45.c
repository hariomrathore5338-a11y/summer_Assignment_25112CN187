#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return (rev == temp);
}

int main() {
    int num = 121;
    if (isPalindrome(num))
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);
    return 0;
}
