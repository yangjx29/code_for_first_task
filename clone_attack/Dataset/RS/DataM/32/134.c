void  main () {
    int i;
    int XhuPUq3;
    int n;
    int len1;
    int len2;
    int hJdk7EPBrpx [101];
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
    char s1 [30] [101];
    char s2 [30] [101];
    scanf ("%d", &n);
    for (i = 1; n >= i; i = i + 1) {
        scanf ("%s", s1[i]);
        scanf ("%s", s2[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("\n");
    }
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
        while (i <= n) {
            len1 = strlen (s1[i]);
            len2 = strlen (s2[i]);
            for (XhuPUq3 = 0; XhuPUq3 <= len2 - 1; XhuPUq3 = XhuPUq3 +1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (s1[i][len1 - XhuPUq3 -1] < s2[i][len2 - XhuPUq3 -1]) {
                    s1[i][len1 - XhuPUq3 -2] = s1[i][len1 - XhuPUq3 -2] - '1' + 48;
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
                    hJdk7EPBrpx[XhuPUq3] = s1[i][len1 - XhuPUq3 -1] - s2[i][len2 - XhuPUq3 -1] + 10;
                }
                else {
                    hJdk7EPBrpx[XhuPUq3] = s1[i][len1 - XhuPUq3 -1] - s2[i][len2 - XhuPUq3 -1];
                };
            }
            for (XhuPUq3 = len2; XhuPUq3 <= len1 - 1; XhuPUq3 = XhuPUq3 +1) {
                hJdk7EPBrpx[XhuPUq3] = s1[i][len1 - XhuPUq3 -1] - 48;
            }
            i = i + 1;
            for (XhuPUq3 = (len1 - 1); XhuPUq3 >= 0; XhuPUq3 = XhuPUq3 -1) {
                printf ("%d", hJdk7EPBrpx[XhuPUq3]);
            }
            printf ("\n");
        };
    };
}

