int main (int argc, char *argv []) {
    int m;
    int n;
    int h [21] [21];
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
    scanf ("%d %d", &m, &n);
    for (int i = (122 - 122);
    m > i; i++) {
        int j = (212 - 212);
        while (j < n) {
            scanf ("%d", &h[i][j]);
            j++;
        };
    }
    for (int k = 0;
    m > k; k = k + 1) {
        for (int l = 0;
        n > l; l++) {
            if ((!(0 != k) && !(0 != l)) && (h[(779 - 778)][0] <= h[0][0] && h[0][(132 - 131)] <= h[0][0])) {
                printf ("%d %d\n", k, l);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if ((k == 0 && !(n - 1 != l)) && (h[0][n - 2] <= h[0][n - 1] && h[0][n - 1] >= h[1][n - 1])) {
                    printf ("%d %d\n", k, l);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                else if ((!(m - 1 != k) && l == 0) && (h[m - 2][0] <= h[m - 1][0] && h[m - 1][1] <= h[m - 1][0])) {
                    printf ("%d %d\n", k, l);
                }
                else if ((!(m - 1 != k) && !(n - 1 != l)) && (h[m - 1][n - 2] <= h[m - 1][n - 1] && h[m - 2][n - 1] <= h[m - 1][n - 1])) {
                    printf ("%d %d\n", k, l);
                }
                else if ((k == 0 && (0 < l && n - 1 > l)) && (h[k][l] >= h[k][l - 1] && h[k][l + 1] <= h[k][l] && h[k + 1][l] <= h[k][l])) {
                    printf ("%d %d\n", k, l);
                }
                else if ((k == m - 1 && (l > 0 && l < n - 1)) && (h[k][l] >= h[k][l - 1] && h[k][l] >= h[k][l + 1] && h[k][l] >= h[k - 1][l])) {
                    printf ("%d %d\n", k, l);
                }
                else if ((l == 0 && (k > 0 && k < m - 1)) && (h[k][l] >= h[k][l + 1] && h[k][l] >= h[k + 1][l] && h[k][l] >= h[k - 1][l])) {
                    printf ("%d %d\n", k, l);
                }
                else if ((l == n - 1 && (k > 0 && k < m - 1)) && (h[k][l] >= h[k][l - 1] && h[k][l] >= h[k + 1][l] && h[k][l] >= h[k - 1][l])) {
                    printf ("%d %d\n", k, l);
                }
                else if (h[k][l] >= h[k][l - 1] && h[k][l] >= h[k][l + 1] && h[k][l] >= h[k - 1][l] && h[k][l] >= h[k + 1][l]) {
                    printf ("%d %d\n", k, l);
                };
            };
        };
    }
    return 0;
}

