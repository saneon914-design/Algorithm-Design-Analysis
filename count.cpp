#include <stdio.h>

int main() {
    int n, number;
    int count = 0;

    scanf("%d", &n);
    
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = 0; i < n; i++) {
        if (a[i] == number) {
            count++;
        }
    }

    printf("%d appears %d times", number, count);

    return 0;
}