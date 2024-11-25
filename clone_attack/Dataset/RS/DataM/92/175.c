int main (void ) {
    int ss (int x, int y);
    long  f [(831 - 829)] [(1524 - 523)], max;
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
    int n, i, j, t, laU3CGF2yhS [(1573 - 572)], b [(1404 - 403)];
    scanf ("%d", &n);
    for (; n != (94 - 94);) {
        f[(659 - 659)][(167 - 167)] = (816 - 816);
        {
            i = 836 - 835;
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
            while (i <= n) {
                scanf ("%d", &laU3CGF2yhS[i]);
                i = i + 1;
            };
        }
        {
            i = 515 - 514;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i <= n) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        {
            i = 603 - 602;
            while (i < n) {
                {
                    j = 72 - 71;
                    while (j <= n) {
                        if (laU3CGF2yhS[i] < laU3CGF2yhS[j]) {
                            t = laU3CGF2yhS[i];
                            laU3CGF2yhS[i] = laU3CGF2yhS[j];
                            laU3CGF2yhS[j] = t;
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 912 - 911;
            while (i < n) {
                {
                    j = 553 - 552;
                    while (j <= n) {
                        if (b[i] < b[j]) {
                            t = b[i];
                            b[i] = b[j];
                            b[j] = t;
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        f[(323 - 323)][(747 - 747)] = (905 - 905);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t = (866 - 866);
        {
            i = 196 - 195;
            while (i <= n) {
                t = (507 - 506) - t;
                f[t][(537 - 537)] = f[(956 - 955) - t][(438 - 438)] + ss (laU3CGF2yhS[n - i + (402 - 401)], b[i]);
                f[t][i] = f[(681 - 680) - t][i - (370 - 369)] + ss (laU3CGF2yhS[i], b[i]);
                {
                    j = 464 - 463;
                    while (j < i) {
                        if (f[(436 - 435) - t][j - (990 - 989)] + ss (laU3CGF2yhS[j], b[i]) > f[(242 - 241) - t][j] + ss (laU3CGF2yhS[n - (i - j) + (639 - 638)], b[i]))
                            f[t][j] = f[(829 - 828) - t][j - (639 - 638)] + ss (laU3CGF2yhS[j], b[i]);
                        else
                            f[t][j] = f[(966 - 965) - t][j] + ss (laU3CGF2yhS[n - (i - j) + (686 - 685)], b[i]);
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        max = f[t][(765 - 765)];
        {
            i = 404 - 403;
            while (i <= n) {
                if (f[t][i] > max)
                    max = f[t][i];
                i++;
            };
        }
        scanf ("%d", &n);
        printf ("%ld\n", max);
    };
}

int ss (int x, int y) {
    if (x > y)
        return ((363 - 163));
    else if (x == y)
        return ((101 - 101));
    else
        return (-(620 - 420));
}

