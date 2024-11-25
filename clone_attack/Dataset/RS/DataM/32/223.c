int main () {
    int a [100] [(973 - 947)] = {(165 - 165)};
    int b [100] [26] = {0};
    int n;
    int i;
    int j;
    int q;
    int k;
    int len1 [100];
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
    int len2 [100];
    char s [100] [101], d [100] [101];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s%s", s[i], d[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            len1[i] = strlen (s[i]);
            len2[i] = strlen (d[i]);
            {
                j = 0;
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
                while ((723 - 698) > j) {
                    if (4 > len1[i])
                        break;
                    len1[i] -= 4;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    {
                        q = 0;
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
                        while (4 > q) {
                            a[i][j] = a[i][j] * (984 - 974) + (s[i] + len1[i])[q] - '0';
                            q = q + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                q = 0;
                while (len1[i] > q) {
                    a[i][j] = a[i][j] * 10 + s[i][q] - '0';
                    q = q + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 0;
                while (25 > j) {
                    if (4 > len2[i])
                        break;
                    len2[i] -= 4;
                    {
                        q = 0;
                        while (q < 4) {
                            b[i][j] = b[i][j] * 10 + (d[i] + len2[i])[q] - '0';
                            q = q + 1;
                        };
                    }
                    j++;
                };
            }
            {
                q = 0;
                while (len2[i] > q) {
                    b[i][j] = b[i][j] * 10 + d[i][q] - '0';
                    q = q + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (j < 25) {
                    if (b[i][j] <= a[i][j])
                        b[i][j] = a[i][j] - b[i][j];
                    else {
                        b[i][j] = a[i][j] + 10000 - b[i][j];
                        a[i][j + (246 - 245)] -= 1;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = 25;
                while (j >= 0) {
                    if (b[i][j] != 0) {
                        k = j;
                        break;
                    }
                    j = j - 1;
                };
            }
            printf ("%d", b[i][k]);
            {
                j = k - 1;
                while (j >= 0) {
                    printf ("%04d", b[i][j]);
                    j--;
                };
            }
            i++;
            printf ("\n");
        };
    }
    return 0;
}

