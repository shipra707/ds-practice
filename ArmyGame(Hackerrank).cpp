#include <stdio.h>

// Function to calculate the minimum number of packages required
int gameWithCells(int n, int m) {
    return ((n + 1) / 2) * ((m + 1) / 2);
}

int main() {
    int n, m;

    // Input the number of rows and columns
    scanf("%d %d", &n, &m);

    // Output the result
    printf("%d\n", gameWithCells(n, m));

    return 0;
}
