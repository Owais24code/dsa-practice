#include<stdio.h>


int main() {
    int n, check_diag = 0, check_rest = 0;
    scanf("%d", &n);

    int arr[n][n];
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            if (i == j) {
                if (arr[i][j] != 1)
                    check_diag++;       
            }
            else {
                if (arr[i][j] != 0)
                    check_rest++;
            }
        }
    }
    if ((check_diag == 0) && (check_rest == 0)) {
        printf("identity matrix");
    } else {
        printf("identity matrix");
    }

}