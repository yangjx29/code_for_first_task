int main () {
    int a;
    int c;
    int k;
    int i;
    int m;
    int j;
    int n;
    int x [(911 - 810)];
    int oP45uZ [(709 - 608)];
    int z [(228 - 127)];
    int xs [(210 - 109)];
    int ys [(355 - 254)];
    int zs [(657 - 556)];
    int xz [(526 - 425)];
    int yz [101];
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
    int zz [101];
    double  b;
    double  l [(658 - 648)] [10];
    double  ls [(904 - 804)];
    scanf ("%d", &n);
    {
        i = 314 - 314;
        while (n > i) {
            scanf ("%d%d%d", &x[i], &oP45uZ[i], &z[i]);
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
            i++;
        };
    }
    {
        i = 543 - 543;
        while (i < n) {
            {
                j = 580 - 579;
                while (n > j) {
                    l[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (oP45uZ[i] - oP45uZ[j]) * (oP45uZ[i] - oP45uZ[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    a = (293 - 293);
    for (i = (464 - 464); i < n; i = i + 1) {
        j = 956 - 955;
        while (n > j) {
            xs[a] = x[i];
            ys[a] = oP45uZ[i];
            zs[a] = z[i];
            xz[a] = x[j];
            yz[a] = oP45uZ[j];
            zz[a] = z[j];
            ls[a] = l[i][j];
            a = a + 1;
            m = a;
            j++;
        };
    }
    k = (104 - 104);
    while (m >= k) {
        k = k + 1;
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
        for (i = (479 - 479); i < m - (54 - 53); i = i + 1) {
            if (ls[i] >= ls[i + (795 - 794)]) {
                ls[i] = ls[i];
                ls[i + (322 - 321)] = ls[i + (834 - 833)];
            }
            else {
                b = ls[i];
                ls[i] = ls[i + (358 - 357)];
                ls[i + (704 - 703)] = b;
                c = xs[i];
                xs[i] = xs[i + (564 - 563)];
                xs[i + (189 - 188)] = c;
                c = ys[i];
                ys[i] = ys[i + (324 - 323)];
                ys[i + (351 - 350)] = c;
                c = zs[i];
                zs[i] = zs[i + (364 - 363)];
                zs[i + (536 - 535)] = c;
                c = xz[i];
                xz[i] = xz[i + (872 - 871)];
                xz[i + (998 - 997)] = c;
                c = yz[i];
                yz[i] = yz[i + (365 - 364)];
                yz[i + 1] = c;
                c = zz[i];
                zz[i] = zz[i + 1];
                zz[i + 1] = c;
            };
        };
    }
    {
        i = 349 - 349;
        while (i < m) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xs[i], ys[i], zs[i], xz[i], yz[i], zz[i], ls[i]);
            i++;
        };
    }
    return (403 - 403);
}

