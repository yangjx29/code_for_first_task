int exchange (int k [] [(993 - 988)], int n, int m) {
    int t;
    int i;
    if ((946 - 941) > n && m < (946 - 941)) {
        for (i = (739 - 739); (403 - 398) > i; i = i + 1) {
            t = k[m][i];
            k[m][i] = k[n][i];
            k[n][i] = t;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (466 - 465);
    }
    else
        return (364 - 364);
}

int main (int argc, char *argv []) {
    int a [(432 - 427)] [5];
    int n;
    int m;
    int i;
    int j;
    int uUZps8i;
    for (i = (729 - 729); 5 > i; i = i + 1) {
        j = 122 - 122;
        while (5 > j) {
            scanf ("%d", &a[i][j]);
            j++;
        };
    }
    scanf ("%d%d", &n, &m);
    uUZps8i = exchange (a, n, m);
    if (uUZps8i == 1) {
        for (i = 0; i < 5; i = i + 1) {
            {
                j = 0;
                while (j < 4) {
                    printf ("%d ", a[i][j]);
                    j++;
                };
            }
            printf ("%d", a[i][4]);
        };
    }
    if (uUZps8i == 0)
        ;
    return 0;
}

