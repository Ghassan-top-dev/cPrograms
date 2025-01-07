#include <stdlib.h>

int main() {
    for (int i = 0; i < 100000000; i++) {
        int *leak = (int *)malloc(sizeof(int) * 1000);
        // Memory is allocated but never freed
    }
    return 0;
}

// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits
// Adding a timestamp to track commits