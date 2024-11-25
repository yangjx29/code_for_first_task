void  main () {
    char zzzd;
    int i, wOQD40AptocK, k, m, n, max, zzzdnum, num [100] = {(533 - 533)};
    struct   ts {
        int zS5kGTjh4Z;
        char Zu6FiN [(726 - 696)];
        int Xh9mgzJO;
        struct   ts *next;
    };
    struct   ts *p1, *p2, *F2soPmSC;
    zzzdnum = 0;
    max = 0;
    p1 = p2 = F2soPmSC = (struct   ts *) malloc (sizeof (struct   ts));
    scanf ("%d", &n);
    scanf ("%d %s", &p1->zS5kGTjh4Z, p1->Zu6FiN);
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
    for (i = (110 - 109); i < n; i = i + 1) {
        p1 = (struct   ts *) malloc (sizeof (struct   ts));
        scanf ("%d %s", &p1->zS5kGTjh4Z, p1->Zu6FiN);
        p1->Xh9mgzJO = strlen (p1->Zu6FiN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2->next = p1;
        p2 = p1;
    }
    p1->next = (302 - 302);
    {
        i = 'A';
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
        while (i <= 'Z') {
            p1 = F2soPmSC;
            {
                k = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n > k) {
                    k = k + 1;
                    {
                        wOQD40AptocK = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        while (!('\0' == p1->Zu6FiN[wOQD40AptocK])) {
                            if (p1->Zu6FiN[wOQD40AptocK] == i)
                                num[i]++;
                            wOQD40AptocK = wOQD40AptocK + 1;
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
                    p1 = p1->next;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 'Z') {
            max = max > num[i] ? max : num[i];
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
            i++;
        };
    }
    {
        i = 'A';
        while (i <= 'Z') {
            if (num[i] == max)
                zzzd = i;
            i++;
        };
    }
    printf ("%c\n%d\n", zzzd, max);
    p1 = F2soPmSC;
    {
        i = 0;
        while (i < n) {
            i++;
            {
                wOQD40AptocK = 0;
                while (p1->Zu6FiN[wOQD40AptocK] != '\0') {
                    if (p1->Zu6FiN[wOQD40AptocK] == zzzd) {
                        printf ("%d\n", p1->zS5kGTjh4Z);
                    }
                    wOQD40AptocK = wOQD40AptocK + 1;
                };
            }
            p1 = p1->next;
        };
    };
}

