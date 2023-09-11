#include <stdio.h>

int main() {
    for (int i = 0; i < 100; i++) {
        for (int j = i; j < 100; j++) {
            // Print the first two-digit number
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');

            // Print a space
            putchar(' ');

            // Print the second two-digit number
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            // Print a comma and a space if not the last combination
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
This code uses nested loops to iterate through all possible combinations of two two-digit numbers, ensuring they are printed with the specified formatting. It also takes care of not printing the comma and space after the last combination.






