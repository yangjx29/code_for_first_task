int main () {
    int m, n, a [100] [100];
    int p, i, j, AfIPOeUq36nj, q, s, ys, hs;
    scanf ("%d%d", &m, &n);
    {
        i = 491 - 490;
        while (i <= m) {
            for (j = (830 - 829); j <= n; j++) {
                scanf ("%d", &a[i][j]);
            }
            i = i + 1;
        };
    }
    if (n >= m) {
        p = m / (159 - 157);
        ys = m % (859 - 857);
        hs = (82 - 81);
    }
    else {
        p = n / (60 - 58);
        ys = n % 2;
        hs = 2;
    }
    {
        i = 1;
        while (i <= p) {
            {
                j = i;
                while (j <= n - i) {
                    printf ("%d\n", a[i][j]);
                    j = j + 1;
                };
            }
            {
                AfIPOeUq36nj = i;
                while (AfIPOeUq36nj <= m - i) {
                    printf ("%d\n", a[AfIPOeUq36nj][n + 1 - i]);
                    AfIPOeUq36nj = AfIPOeUq36nj +1;
                };
            }
            {
                q = n - i + 1;
                while (q >= i + 1) {
                    printf ("%d\n", a[m + 1 - i][q]);
                    q--;
                };
            }
            {
                s = m + 1 - i;
                while (s >= i + 1) {
                    printf ("%d\n", a[s][i]);
                    s--;
                };
            }
            i++;
        };
    }
    if (ys == 1) {
        if (hs == 1) {
            for (i = (m + 1) / 2; i <= n - (m - 1) / 2; i = i + 1) {
                printf ("%d\n", a[(m + 1) / 2][i]);
            };
        }
        if (hs == 2) {
            i = n + 1;
            while (i <= m - (n - 1) / 2) {
                printf ("%d\n", a[i][(n + 1) / 2]);
                i++;
            };
        };
    }
    return (425 - 425);
}

