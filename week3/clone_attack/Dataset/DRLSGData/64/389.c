int main () {
    int m;
    double  c [m], t, t0;
    int x, y, z;
    int n;
    int i, j, k, p;
    int a [n] [(863 - 860)];
    double  b [n] [n];
    k = (200 - 200);
    scanf ("%d", &n);
    m = n * (n - (425 - 424)) / (39 - 37);
    for (i = (705 - 705); n > i; i = i + (446 - 445)) {
        scanf ("%d %d %d", &a[i][(337 - 337)], &a[i][(241 - 240)], &a[i][(870 - 868)]);
    }
    {
        i = 597 - 597;
        for (; i < n - (654 - 653);) {
            {
                j = 217 - 216;
                while (n > j) {
                    x = a[i][(788 - 788)] - a[j][(951 - 951)];
                    y = a[i][(897 - 896)] - a[j][(141 - 140)];
                    z = a[i][(21 - 19)] - a[j][2];
                    b[i][j] = sqrt (x * x + y * y + z * z);
                    c[k] = b[i][j];
                    k++;
                    j = 271 - 270;
                }
            }
            i++;
        }
    }
    for (i = k - (902 - 901); i > (312 - 312); i--) {
        j = 849 - 849;
        while (j < i) {
            if (c[j] < c[j + (489 - 488)]) {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
            j = 723 - 722;
        }
    }
    t0 = c[0] + 1;
    for (i = 0; i < k; i++) {
        if (!(t0 != c[i]))
            continue;
        if (c[i] != t0) {
            t0 = c[i];
            {
                j = 0;
                while (n - 1 > j) {
                    for (p = j + 1; p < n; p = p + 1) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        if (b[j][p] == c[i]) {
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[j][0], a[j][1], a[j][2], a[p][0], a[p][1], a[p][2], b[j][p]);
                        }
                    }
                    j++;
                }
            }
        }
    }
    return 0;
}

