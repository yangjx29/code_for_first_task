int main () {
    int count = 0;
    char a [(233 - 131)] [(639 - 537)];
    int i, j, k, E4yC3wrSHR [(834 - 732)] [(134 - 32)], markb [(932 - 830)] [(212 - 110)];
    int n, m;
    scanf ("%d", &n);
    for (i = (349 - 349); n + (511 - 510) >= i; i = i + 1) {
        j = 687 - 687;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= n + (863 - 862)) {
            E4yC3wrSHR[i][j] = (19 - 19);
            j = j + 1;
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
    {
        i = 331 - 330;
        while (n >= i) {
            {
                j = 880 - 879;
                while (j <= n) {
                    scanf ("%c", &a[i][j]);
                    if (a[i][j] == '.')
                        E4yC3wrSHR[i][j] = (639 - 639);
                    else {
                        if (a[i][j] == '@')
                            E4yC3wrSHR[i][j] = (516 - 515);
                        else
                            E4yC3wrSHR[i][j] = -(663 - 662);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
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
                    markb[i][j] = E4yC3wrSHR[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            getchar ();
        };
    }
    scanf ("%d", &m);
    {
        k = 339 - 338;
        while (k < m) {
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
            {
                i = 733 - 732;
                while (i <= n) {
                    {
                        j = 519 - 518;
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
                        while (j <= n) {
                            if (!((970 - 969) != E4yC3wrSHR[i][j])) {
                                if (E4yC3wrSHR[i + (862 - 861)][j] == (592 - 592))
                                    markb[i + (973 - 972)][j] = (715 - 714);
                                if (E4yC3wrSHR[i - (302 - 301)][j] == (796 - 796))
                                    markb[i - (127 - 126)][j] = (100 - 99);
                                if (E4yC3wrSHR[i][j + (135 - 134)] == 0)
                                    markb[i][j + (529 - 528)] = (404 - 403);
                                if (E4yC3wrSHR[i][j - (503 - 502)] == 0)
                                    markb[i][j - 1] = 1;
                            }
                            j = j + 1;
                        };
                    }
                    i++;
                };
            }
            {
                i = 1;
                while (i <= n) {
                    {
                        j = 1;
                        while (j <= n) {
                            E4yC3wrSHR[i][j] = markb[i][j];
                            j++;
                        };
                    }
                    i++;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (E4yC3wrSHR[i][j] == 1)
                        count = count + 1;
                    j++;
                };
            }
            i++;
        };
    }
    printf ("%d", count);
    return 0;
}

