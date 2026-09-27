#include <stdio.h>

int main() {
    int cents;
    do {
        printf("change owed: ");
        if (scanf("%d", &cents) != 1 || cents < 0) {
            return 1;
        }
    } while (cents < 0);

    int count = 0;
    count += cents / 25;
    cents %= 25;
    count += cents / 10;
    cents %= 10;
    count += cents / 5;
    cents %= 5;
    count += cents;
    printf("%d\n", count);
    return 0;
}