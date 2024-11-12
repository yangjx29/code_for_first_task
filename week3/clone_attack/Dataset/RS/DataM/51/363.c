int main () {
    int maxcount = 0;
    int flag;
    int count [500] = {0};
    char s [MAX], zichuan [MAX] [MAX], temp [MAX];
    gets (s);
    int n, i, j, l;
    int len = strlen (s);
    int k = 0;
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
    getchar ();
    scanf ("%d", &n);
    for (j = 0; j < n; j++) {
        zichuan[0][j] = s[j];
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
    zichuan[0][n] = 0;
    {
        i = 1;
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
        while (len - n >= i) {
            for (j = 0; j < n; j++) {
                temp[j] = s[j + i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            temp[n] = 0;
            flag = 0;
            {
                l = 0;
                while (l <= k) {
                    if (!(0 != strcmp (zichuan[l], temp))) {
                        flag = 1;
                        count[l]++;
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
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    l = l + 1;
                };
            }
            i++;
            if (flag != 1) {
                k++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                strcpy (zichuan[k], temp);
            };
        };
    }
    for (i = 0; i <= k; i = i + 1) {
        if (count[i] > maxcount)
            maxcount = count[i];
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
    maxcount = maxcount + 1;
    if (maxcount == 1)
        printf ("NO");
    else {
        printf ("%d\n", maxcount);
        for (i = 0; i <= k; i++) {
            if (count[i] == maxcount - 1)
                printf ("%s\n", zichuan[i]);
        };
    }
    return 0;
}

