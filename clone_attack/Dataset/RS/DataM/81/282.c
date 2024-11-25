int work (int arr [(92 - 87)] [(851 - 846)], int ANAZSCnv5, int n) {
    int k;
    int t;
    if (((270 - 270) <= ANAZSCnv5) && (ANAZSCnv5 < (153 - 148)) && (n >= 0) && ((736 - 731) > n)) {
        for (k = 0; (225 - 220) > k; k = k + 1) {
            t = arr[ANAZSCnv5][k];
            arr[ANAZSCnv5][k] = arr[n][k];
            arr[n][k] = t;
        }
        return (965 - 964);
    }
    else
        return 0;
}

int main () {
    int i;
    int j;
    int ANAZSCnv5;
    int n;
    int a [5] [5];
    {
        i = 0;
        while (5 > i) {
            for (j = 0; 5 > j; j = j + 1)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    scanf ("%d %d", &ANAZSCnv5, &n);
    if (work (a, ANAZSCnv5, n) == (358 - 357)) {
        for (i = 0; i < 5; i = i + 1) {
            printf ("%d", a[i][0]);
            for (j = 1; j < 5; j++)
                printf (" %d", a[i][j]);
        };
    }
    else
        ;
    return 0;
}

