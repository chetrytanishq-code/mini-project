#include <stdio.h>

int main() {
    int n, m;
    printf("enter number of students and number of days: ");
    scanf("%d %d", &n, &m);

    int b[n][m];

    printf("enter the bills: \n");
    for (int i = 0; i < n; i++) {
        printf("enter the bill of student %d: ",i+1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int st[n];
    int dt[m];

    
    for (int i = 0; i < n; i++)
        st[i] = 0;

    for (int j = 0; j < m; j++)
        dt[j] = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            st[i] += b[i][j];
            dt[j] += b[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, st[i]);
    }

    
    int maxD = 0;
    for (int j = 1; j < m; j++) {
        if (dt[j] > dt[maxD])
            maxD = j;
    }

    printf("\nHighest collection on Day %d\n", maxD + 1);

    
    int maxS= 0;
    for (int i = 1; i < n; i++) {
        if (st[i] > st[maxS])
            maxS= i;
    }

    
    printf("Highest spender: Student %d", maxS + 1);

    for (int i = 0; i < n; i++) {
        if (i != maxS&& st[i] == st[maxS]) {
            printf(" and Student %d", i + 1);
        }
    }

    return 0;
}
