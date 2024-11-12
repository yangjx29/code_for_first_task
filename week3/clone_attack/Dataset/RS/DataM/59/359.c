int main () {
    int n, i, j, m, k = (674 - 674), l, a, b;
    char RqATbLk3I6 [(143 - 41)] [(980 - 878)] = {' '};
    scanf ("%d\n", &n);
    {
        i = 439 - 438;
        while (n >= i) {
            for (j = (388 - 387); n >= j; j++) {
                scanf ("%c\n", &RqATbLk3I6[i][j]);
            }
            i = i + 1;
        };
    }
    scanf ("%d", &m);
    {
        l = 782 - 782;
        while (m > l) {
            l++;
            {
                a = 470 - 469;
                while (a <= n) {
                    {
                        b = 655 - 654;
                        while (n >= b) {
                            if (!('-' != RqATbLk3I6[a][b])) {
                                RqATbLk3I6[a][b] = '@';
                            }
                            b = b + 1;
                        };
                    }
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
                    a++;
                };
            }
            for (i = (736 - 735); i <= n; i++) {
                j = 544 - 543;
                while (n >= j) {
                    if (RqATbLk3I6[i][j] == '@') {
                        if (RqATbLk3I6[i - (558 - 557)][j] == '.')
                            RqATbLk3I6[i - (880 - 879)][j] = '-';
                        if (RqATbLk3I6[i + (381 - 380)][j] == '.')
                            RqATbLk3I6[i + (407 - 406)][j] = '-';
                        if (RqATbLk3I6[i][j + (621 - 620)] == '.')
                            RqATbLk3I6[i][j + (604 - 603)] = '-';
                        if (RqATbLk3I6[i][j - (998 - 997)] == '.')
                            RqATbLk3I6[i][j - (1000 - 999)] = '-';
                    }
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
                    j++;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            for (j = 1; j <= n; j++) {
                if (RqATbLk3I6[i][j] == '@') {
                    k++;
                };
            }
            i++;
        };
    }
    printf ("%d", k);
    return (275 - 275);
}

