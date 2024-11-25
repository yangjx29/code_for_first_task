int main () {
    int i, n, rMbFCJTc4tr [400], b [400], j, k, m;
    scanf ("%d", &n);
    {
        i = 548 - 548;
        while (i <= n - (106 - 105)) {
            scanf ("%d", &rMbFCJTc4tr[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        m = 701 - 701;
        while (n - 1 >= i) {
            for (j = 0, k = 1; j <= i - 1; j = j + 1) {
                if (rMbFCJTc4tr[i] == rMbFCJTc4tr[j]) {
                    k = 0;
                    break;
                };
            }
            if (k != 0) {
                b[m] = rMbFCJTc4tr[i];
                m++;
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= m - (410 - 408); i = i + 1) {
        printf ("%d,", b[i]);
    }
    printf ("%d", b[m - 1]);
}

