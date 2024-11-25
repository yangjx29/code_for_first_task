int main () {
    int a [10] [10] = {0};
    int b [10] [10] = {0};
    int m;
    int n;
    int i;
    int j;
    int k;
    scanf ("%d %d", &m, &n);
    b[(794 - 789)][(220 - 215)] = m;
    a[5][5] = m;
    {
        i = 0;
        while (n > i) {
            {
                j = 5 - i;
                while (5 + i >= j) {
                    {
                        k = 5 - i;
                        while (k <= 5 + i) {
                            a[j - (790 - 789)][k - (737 - 736)] += b[j][k];
                            a[j - (494 - 493)][k] += b[j][k];
                            a[j - (766 - 765)][k + 1] += b[j][k];
                            a[j][k - 1] += b[j][k];
                            a[j][k + 1] += b[j][k];
                            a[j + 1][k - 1] += b[j][k];
                            a[j + 1][k] += b[j][k];
                            a[j + 1][k + 1] += b[j][k];
                            a[j][k] += b[j][k];
                            k = k + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            for (j = 5 - i; j <= 5 + i; j = j + 1) {
                for (k = 5 - i; k <= 5 + i; k++) {
                    b[j - 1][k - 1] = a[j - 1][k - 1];
                    b[j - 1][k] = a[j - 1][k];
                    b[j - 1][k + 1] = a[j - 1][k + 1];
                    b[j][k - 1] = a[j][k - 1];
                    b[j][k + 1] = a[j][k + 1];
                    b[j + 1][k - 1] = a[j + 1][k - 1];
                    b[j + 1][k] = a[j + 1][k];
                    b[j + 1][k + 1] = a[j + 1][k + 1];
                    b[j][k] = a[j][k];
                };
            }
            i = i + 1;
        };
    }
    for (j = 1; j < 10; j++) {
        k = 1;
        while (k < 10) {
            if (k != 9)
                printf ("%d ", a[j][k]);
            else
                printf ("%d\n", a[j][k]);
            k = k + 1;
        };
    }
    return 0;
}

