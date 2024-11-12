main () {
    int t;
    int loeZmthuFO;
    int XFpWamQPvoI;
    int bZay4F [100000] [2];
    int i;
    int ZSraUyeF;
    int b [10000];
    int ktYVqUxF4r [10000];
    t = 0;
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
    loeZmthuFO = 0;
    scanf ("%d", &XFpWamQPvoI);
    {
        i = 913 - 912;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            t = t + 1;
            scanf ("%d %d", &bZay4F[i - (461 - 460)][0], &bZay4F[i - (23 - 22)][1]);
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
            if (!(0 != bZay4F[i - 1][0]) && !(0 != bZay4F[i - 1][1])) {
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (XFpWamQPvoI >= i) {
            b[i - 1] = 0;
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
            i = i + 1;
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (XFpWamQPvoI >= i) {
            ktYVqUxF4r[i - 1] = 0;
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
            i = i + 1;
        };
    }
    {
        ZSraUyeF = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZSraUyeF <= XFpWamQPvoI -1) {
            {
                i = 1;
                while (i <= t - 1) {
                    if (bZay4F[i - 1][1] == ZSraUyeF) {
                        b[ZSraUyeF] = b[ZSraUyeF] + 1;
                    }
                    i = i + 1;
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
            ZSraUyeF = ZSraUyeF +1;
        };
    }
    {
        ZSraUyeF = 0;
        while (ZSraUyeF <= XFpWamQPvoI -1) {
            {
                i = 1;
                while (i <= t - 1) {
                    if (bZay4F[i - 1][0] == ZSraUyeF)
                        ktYVqUxF4r[ZSraUyeF] = ktYVqUxF4r[ZSraUyeF] + 1;
                    i++;
                };
            }
            ZSraUyeF = ZSraUyeF +1;
        };
    }
    {
        ZSraUyeF = 0;
        while (ZSraUyeF <= XFpWamQPvoI -1) {
            if (b[ZSraUyeF] == XFpWamQPvoI -1 && ktYVqUxF4r[ZSraUyeF] == 0)
                printf ("%d", ZSraUyeF);
            ZSraUyeF++;
            loeZmthuFO = 1;
        };
    }
    if (loeZmthuFO == 0)
        printf ("NOT FOUND");
}

