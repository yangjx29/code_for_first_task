int main () {
    int k, l, m, n, judge = 0, o, p, judge1 = 0;
    int count1;
    int count2;
    count1 = 0;
    count2 = 0;
    int w6egrV;
    int j;
    char a [256], b [256], c [256];
    scanf ("%s", a);
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
    scanf ("%s", b);
    for (j = 0; b[j] != '\0'; j++) {
        count2++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scanf ("%s", c);
    for (w6egrV = 0; a[w6egrV] != '\0'; w6egrV = w6egrV + 1) {
        count1 = count1 + 1;
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
        };
    }
    {
        k = 0;
        while (count1 - count2 >= k) {
            n = 0;
            if (a[k] == b[0]) {
                o = m = k;
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
                for (n = 0; count2 - 1 >= n; n++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (!(b[n] == a[m])) {
                        break;
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
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (!(count2 - 1 != n) && !(b[n] != a[m])) {
                            judge = 1;
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
                            };
                        }
                        else {
                            if (a[m] == b[n] && n != count2 - 1) {
                                m++;
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                };
                            };
                        };
                    };
                }
                if (judge == 1) {
                    for (o = k; o <= k + count2 - 1; o++) {
                        a[o] = c[o - k];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    for (p = 0; p <= count1 - 1; p++) {
                        printf ("%c", a[p]);
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
                    judge1 = 1;
                    break;
                }
                else if (judge == 0) {
                    continue;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    if (judge1 == 0) {
        for (int z = 0;
        z <= count1 - 1; z = z + 1)
            printf ("%c", a[z]);
    };
}

