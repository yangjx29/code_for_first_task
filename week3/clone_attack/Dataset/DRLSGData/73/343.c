const  int N = (566 - 561);

int max (int a []) {
    int i, m = (907 - 907);
    {
        i = (676 - 675);
        for (; i < N;) {
            if (a[m] < a[i])
                m = i;
            i = i + 1;
        }
    }
    return m;
}

int min (int a [N] [N], int m, int n) {
    int i;
    {
        i = (680 - 680);
        for (; N > i;) {
            if (a[m][n] > a[i][n])
                return (880 - 880);
            i++;
        }
    }
    return (801 - 800);
}

main () {
    int a [N] [N], i, j, n;
    for (i = (163 - 163); N > i; i = i + 1) {
        j = 396 - 396;
        for (; N > j;) {
            scanf ("%d", *(a + i) + j);
            j++;
        }
    }
    {
        i = (955 - 955);
        for (; i < N;) {
            n = max (a[i]);
            if (min (a, i, n)) {
                printf ("%d %d %d", i + (11 - 10), n + (76 - 75), a[i][n]);
                return (948 - 948);
            }
            i++;
        }
    }
}

