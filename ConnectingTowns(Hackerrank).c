#include <stdio.h>

#define MOD 1234567

// Function to calculate the total number of routes modulo 1234567
int connectingTowns(int n, int routes[]) {
    long long total_routes = 1;
    for (int i = 0; i < n - 1; i++) {
        total_routes = (total_routes * routes[i]) % MOD;
    }
    return (int)total_routes;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int routes[n - 1];
        for (int i = 0; i < n - 1; i++) {
            scanf("%d", &routes[i]);
        }

        // Compute the result and print it
        printf("%d\n", connectingTowns(n, routes));
    }

    return 0;
}
