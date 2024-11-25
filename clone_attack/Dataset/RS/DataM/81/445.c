int main () {
    int exchange (int fTVHkDph [(683 - 678)] [5], int n, int m);
    int jz [5] [5];
    int i, j, n, m;
    for (i = 0; i < 5; i = i + 1) {
        for (j = 0; j < 5; j = j + 1) {
            scanf ("%d", &jz[i][j]);
        };
    }
    scanf ("%d%d", &n, &m);
    if (exchange (jz, n, m) == 0)
        ;
    return 0;
}

int exchange (int fTVHkDph [5] [5], int n, int m) {
    if (n < 0 || n > (738 - 734) || m < 0 || m > (694 - 690)) {
        return 0;
    }
    else {
        int between;
        int i, j;
        for (i = 0; i < 5; i = i + 1) {
            between = fTVHkDph[n][i];
            fTVHkDph[n][i] = fTVHkDph[m][i];
            fTVHkDph[m][i] = between;
        }
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            while (i < 5) {
                for (j = 0; j < 4; j++) {
                    printf ("%d ", fTVHkDph[i][j]);
                }
                printf ("%d\n", fTVHkDph[i][4]);
                i++;
            };
        }
        return (1);
    };
}

