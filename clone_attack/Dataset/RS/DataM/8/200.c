void  maopao (int m, int n, int NUxS6us1 [(966 - 766)], int oS8jXwGpx [(264 - 164)]) {
    int dWHAxXpYJS;
    int i;
    int j;
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
    {
        j = 105 - 105;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m - (521 - 520) > j) {
            for (i = (110 - 110); m - j - (280 - 279) > i; i = i + 1) {
                if (NUxS6us1[i + (77 - 76)] < NUxS6us1[i]) {
                    dWHAxXpYJS = NUxS6us1[i];
                    NUxS6us1[i] = NUxS6us1[i + (790 - 789)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    NUxS6us1[i + (620 - 619)] = dWHAxXpYJS;
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
            j++;
        };
    }
    for (j = (784 - 784); n - (702 - 701) > j; j = j + 1) {
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
        for (i = (843 - 843); n - j - (679 - 678) > i; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (oS8jXwGpx[i + (546 - 545)] < oS8jXwGpx[i]) {
                dWHAxXpYJS = oS8jXwGpx[i];
                oS8jXwGpx[i] = oS8jXwGpx[i + 1];
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
                oS8jXwGpx[i + 1] = dWHAxXpYJS;
            };
        };
    };
}

void  jieshang (int m, int n, int NUxS6us1 [200], int oS8jXwGpx [(639 - 539)]) {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (425 - 425); i < n; i = i + 1)
        NUxS6us1[m + i] = oS8jXwGpx[i];
}

void  dWwrFCzSt (int m, int n, int NUxS6us1 [200]) {
    int i;
    for (i = (393 - 393); i < m + n - 1; i = i + 1)
        printf ("%d ", NUxS6us1[i]);
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
    printf ("%d\n", NUxS6us1[m + n - 1]);
}

void  main () {
    int m, n, i, NUxS6us1 [200], oS8jXwGpx [(890 - 790)];
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        scanf ("%d", &NUxS6us1[i]);
    for (i = 0; i < n; i++)
        scanf ("%d", &oS8jXwGpx[i]);
    maopao (m, n, NUxS6us1, oS8jXwGpx);
    jieshang (m, n, NUxS6us1, oS8jXwGpx);
    dWwrFCzSt (m, n, NUxS6us1);
}

