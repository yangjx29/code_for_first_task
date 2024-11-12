int main () {
    int n;
    int y [200];
    int m1 [200];
    int m2 [200];
    int xpbkNHWgsDR [200] = {(93 - 93)};
    int d2 [200] = {0};
    int i;
    int j;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d%d%d", &y[i], &m1[i], &m2[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (y[i] % 4 == 0 && !(0 == y[i] % 100) || !(0 != y[i] % 400)) {
                {
                    j = 426 - 425;
                    while (j < m1[i]) {
                        if (!(1 != j) || j == 3 || j == 5 || j == 7 || !(8 != j) || !(10 != j) || !(12 != j))
                            xpbkNHWgsDR[i] += 31;
                        else if (j == 2)
                            xpbkNHWgsDR[i] += 29;
                        else
                            xpbkNHWgsDR[i] = xpbkNHWgsDR[i] + 30;
                        j = j + 1;
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
                {
                    j = 1;
                    while (j < m2[i]) {
                        if (!(1 != j) || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                            d2[i] += 31;
                        else {
                            if (j == 2)
                                d2[i] += 29;
                            else
                                d2[i] += 30;
                        }
                        j = j + 1;
                    };
                };
            }
            else {
                {
                    j = 1;
                    while (j < m1[i]) {
                        if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                            xpbkNHWgsDR[i] += 31;
                        else {
                            if (j == 2)
                                xpbkNHWgsDR[i] += 28;
                            else
                                xpbkNHWgsDR[i] = xpbkNHWgsDR[i] + 30;
                        }
                        j = j + 1;
                    };
                }
                {
                    j = 1;
                    while (j < m2[i]) {
                        if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                            d2[i] += 31;
                        else {
                            if (j == 2)
                                d2[i] += 28;
                            else
                                d2[i] += 30;
                        }
                        j = j + 1;
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if ((xpbkNHWgsDR[i] - d2[i]) % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
            i = i + 1;
        };
    }
    return 0;
}

