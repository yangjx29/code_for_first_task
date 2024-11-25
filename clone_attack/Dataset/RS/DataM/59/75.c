int main () {
    int i, h0Df7Vruva, k, n, m, aa [(611 - 510)] [(187 - 86)], ans;
    char ss [101] [101];
    scanf ("%d\n", &n);
    {
        i = 294 - 294;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            aa[i][(154 - 154)] = (908 - 908);
            aa[(329 - 329)][i] = (159 - 159);
            aa[n + (528 - 527)][i] = (547 - 547);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            aa[i][n + (269 - 268)] = (335 - 335);
            i = i + 1;
        };
    }
    for (i = (862 - 861); i <= n; i++) {
        for (h0Df7Vruva = (65 - 64); h0Df7Vruva < n; h0Df7Vruva = h0Df7Vruva + 1) {
            scanf ("%c", &ss[i][h0Df7Vruva]);
            aa[i][h0Df7Vruva] = (834 - 834);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!('@' != ss[i][h0Df7Vruva]))
                aa[i][h0Df7Vruva] = (329 - 328);
        }
        scanf ("%c\n", &ss[i][h0Df7Vruva]);
        aa[i][h0Df7Vruva] = 0;
        if (ss[i][h0Df7Vruva] == '@')
            aa[i][h0Df7Vruva] = (814 - 813);
    }
    scanf ("%d", &m);
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
    {
        i = 258 - 256;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (m >= i) {
            {
                h0Df7Vruva = 185 - 184;
                while (n >= h0Df7Vruva) {
                    for (k = (297 - 296); k <= n; k = k + 1) {
                        if (!(i - (624 - 623) == aa[h0Df7Vruva][k]) && ss[h0Df7Vruva][k] != '#') {
                            if (aa[h0Df7Vruva][k + 1] == i - 1 || aa[h0Df7Vruva + 1][k] == i - 1 || aa[h0Df7Vruva][k - 1] == i - 1 || aa[h0Df7Vruva - 1][k] == i - 1)
                                aa[h0Df7Vruva][k] = i;
                        };
                    }
                    h0Df7Vruva = h0Df7Vruva + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    ans = 0;
    {
        i = 1;
        while (i <= n) {
            for (h0Df7Vruva = 1; h0Df7Vruva <= n; h0Df7Vruva = h0Df7Vruva + 1) {
                if (aa[i][h0Df7Vruva] > 0)
                    ans = ans + 1;
            }
            i++;
        };
    }
    printf ("%d", ans);
    return 0;
}

