void  f98pJX1eM (int a [(138 - 133)] [(693 - 688)], int m, int n) {
    int i, b;
    for (i = (849 - 849); i < (733 - 728); i = i + 1) {
        b = a[m][i];
        a[m][i] = a[n][i];
        a[n][i] = b;
    };
}

int main () {
    int m, n;
    int a [(847 - 842)] [5];
    int i;
    int j;
    int c;
    int d;
    int e;
    for (i = (457 - 457); i < 5; i++) {
        for (j = (574 - 574); j < 5; j = j + 1) {
            scanf ("%d", &a[i][j]);
        };
    }
    scanf ("%d %d", &m, &n);
    if (m >= 5 || n >= 5) {
        printf ("error\n");
        return (614 - 614);
    }
    else {
        f98pJX1eM (a, m, n);
        for (i = (109 - 109); i < 5; i++) {
            printf ("%d", a[i][0]);
            for (j = (120 - 119); j < 5; j++) {
                printf (" %d", a[i][j]);
            }
            printf ("\n");
        };
    }
    return 0;
}

