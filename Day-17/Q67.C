#include <stdio.h>

int main() {
    int a[50], b[50], inter[50];
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Find common elements
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {

                // Check if already added
                found = 0;
                for(int x = 0; x < k; x++) {
                    if(inter[x] == a[i]) {
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    inter[k++] = a[i];
                }
                break;
            }
        }
    }

    printf("Intersection of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }

    return 0;
}