int yu (char y) {
    int LrHxD9WCbZ;
    if (!('0' != y))
        LrHxD9WCbZ = (162 - 162);
    if (!('1' != y))
        LrHxD9WCbZ = (408 - 407);
    if (!('2' != y))
        LrHxD9WCbZ = 2;
    if (!('3' != y))
        LrHxD9WCbZ = 3;
    if (y == '4')
        LrHxD9WCbZ = 4;
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
    if (!('5' != y))
        LrHxD9WCbZ = 5;
    if (!('6' != y))
        LrHxD9WCbZ = 6;
    if (!('7' != y))
        LrHxD9WCbZ = 7;
    if (!('8' != y))
        LrHxD9WCbZ = 8;
    if (!('9' != y))
        LrHxD9WCbZ = 9;
    return (LrHxD9WCbZ);
}

void  main () {
    char a [(31 - 11)] [103], LrHxD9WCbZ [20] [103];
    int jcmvnWxp2hF, j, k, n, c [20], XNmtUuTpMc9 [20], e [20] [103], PeMnAu4O [20] [103], m;
    scanf ("%d", &n);
    {
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
        for (jcmvnWxp2hF = (16 - 16); jcmvnWxp2hF < 20; jcmvnWxp2hF = jcmvnWxp2hF + 1) {
            for (j = (414 - 414); 103 > j; j = j + 1) {
                a[jcmvnWxp2hF][j] = '\0';
                LrHxD9WCbZ[jcmvnWxp2hF][j] = '\0';
            };
        };
    }
    for (jcmvnWxp2hF = (241 - 241); n > jcmvnWxp2hF; jcmvnWxp2hF = jcmvnWxp2hF + 1) {
        scanf ("%s", a[jcmvnWxp2hF]);
        scanf ("%s", LrHxD9WCbZ[jcmvnWxp2hF]);
        printf ("\n\n");
        printf ("\n");
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (jcmvnWxp2hF = 0; n > jcmvnWxp2hF; jcmvnWxp2hF = jcmvnWxp2hF + 1) {
            for (j = 0; (c[jcmvnWxp2hF] = strlen (a[jcmvnWxp2hF])) > j; j = j + 1)
                e[jcmvnWxp2hF][j] = yu (a[jcmvnWxp2hF][j]);
            for (j = 0; j < (XNmtUuTpMc9[jcmvnWxp2hF] = strlen (LrHxD9WCbZ[jcmvnWxp2hF])); j = j + 1)
                PeMnAu4O[jcmvnWxp2hF][j] = yu (LrHxD9WCbZ[jcmvnWxp2hF][j]);
        };
    }
    for (jcmvnWxp2hF = 0; jcmvnWxp2hF < n; jcmvnWxp2hF = jcmvnWxp2hF + 1)
        for (j = (c[jcmvnWxp2hF] - 1); j >= (c[jcmvnWxp2hF] - XNmtUuTpMc9[jcmvnWxp2hF]); j = j - 1) {
            k = (j - c[jcmvnWxp2hF] + XNmtUuTpMc9[jcmvnWxp2hF]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (e[jcmvnWxp2hF][j] > PeMnAu4O[jcmvnWxp2hF][k])
                e[jcmvnWxp2hF][j] = (e[jcmvnWxp2hF][j] - PeMnAu4O[jcmvnWxp2hF][k]);
            else {
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
                if (e[jcmvnWxp2hF][j] == PeMnAu4O[jcmvnWxp2hF][k])
                    e[jcmvnWxp2hF][j] = 0;
                else {
                    if (e[jcmvnWxp2hF][j] < PeMnAu4O[jcmvnWxp2hF][k]) {
                        e[jcmvnWxp2hF][j] = (e[jcmvnWxp2hF][j] + 10 - PeMnAu4O[jcmvnWxp2hF][k]);
                        {
                            for (m = (j - 1); e[jcmvnWxp2hF][m] == 0; m = m - 1)
                                e[jcmvnWxp2hF][m] = 9;
                        }
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        e[jcmvnWxp2hF][m] = (e[jcmvnWxp2hF][m] - 1);
                    };
                };
            };
        }
    {
        jcmvnWxp2hF = 0;
        while (jcmvnWxp2hF < n) {
            j = 0;
            while (e[jcmvnWxp2hF][j] == 0)
                j = j + 1;
            for (; j < c[jcmvnWxp2hF]; j = j + 1)
                printf ("%d", e[jcmvnWxp2hF][j]);
            jcmvnWxp2hF = jcmvnWxp2hF + 1;
            printf ("\n");
        };
    }
    printf ("\n");
}

