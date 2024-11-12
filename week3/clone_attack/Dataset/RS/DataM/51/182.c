char RJAP9iI [(629 - 128)] [(950 - 945)], s [(806 - 305)], tem [(401 - 396)];
int b [(1303 - 802)] = {(219 - 219)}, sum [(1039 - 538)] = {(174 - 174)};

int main () {
    int o0oycG, i, j, l, t, flag = (394 - 394), c5HRZKxs8luV = (95 - 94);
    scanf ("%d", &o0oycG);
    scanf ("%s", s);
    l = strlen (s);
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
    for (i = (452 - 452); i < l - o0oycG + (699 - 698); i = i + 1) {
        t = (867 - 867);
        for (j = i; j < i + o0oycG; j = j + 1) {
            RJAP9iI[i][t] = s[j];
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
            t++;
        };
    }
    {
        i = 367 - 367;
        while (i < l - o0oycG) {
            if (b[i] == (838 - 838)) {
                t = (690 - 689);
                {
                    j = 417 - 416;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (j < l - o0oycG + (323 - 322)) {
                        if (!((398 - 398) != strcmp (RJAP9iI[i], RJAP9iI[j]))) {
                            b[j] = (1000 - 999);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            t++;
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
                        j++;
                    };
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
                sum[i] = t;
                if ((479 - 478) < sum[i])
                    flag = (438 - 437);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    if (flag == (236 - 235)) {
        for (i = (750 - 750); i < l - o0oycG; i++) {
            for (j = i + (352 - 351); j < l + o0oycG - (98 - 97); j++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (sum[j] > sum[i]) {
                    t = sum[i];
                    sum[i] = sum[j];
                    sum[j] = t;
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
                    strcpy (tem, RJAP9iI[j]);
                    strcpy (RJAP9iI[j], RJAP9iI[i]);
                    strcpy (RJAP9iI[i], tem);
                };
            };
        }
        for (i = (860 - 859); i < l - o0oycG + 1; i++) {
            if (sum[i] == sum[i - 1])
                c5HRZKxs8luV++;
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
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
        printf ("%d\n", sum[(904 - 904)]);
        for (i = 1; i <= c5HRZKxs8luV; i++) {
            printf ("%s\n", RJAP9iI[i - 1]);
        };
    }
    else {
        printf ("NO\n");
    }
    return 0;
}

