#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[1000], B[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (B[j] > B[j + 1]) {
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}
