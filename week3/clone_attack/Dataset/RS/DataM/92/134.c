void  paixu (int *lZCFbMxV4s, int k);

main () {
    int ipqmCABQ, i, j, k, m, max;
    int tian [2020];
    int qi [1010];
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
    for (;;) {
        scanf ("%d", &ipqmCABQ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ipqmCABQ != (663 - 663)) {
            for (i = (429 - 429); ipqmCABQ > i; i++)
                scanf ("%d", &tian[i]);
            {
                j = 0;
                while (j < ipqmCABQ) {
                    scanf ("%d", &qi[j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            paixu (tian, ipqmCABQ);
            paixu (qi, ipqmCABQ);
            max = -ipqmCABQ;
            {
                k = 0;
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
                while (k < ipqmCABQ) {
                    tian[ipqmCABQ + k] = tian[k];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k++;
                };
            }
            {
                i = 0;
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
                while (i < ipqmCABQ) {
                    m = 0;
                    {
                        j = 0;
                        while (j < ipqmCABQ) {
                            if (tian[j + i] > qi[j])
                                m = m + 1;
                            if (tian[j + i] < qi[j])
                                m = m - 1;
                            j++;
                        };
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
                    i++;
                    if (m > max)
                        max = m;
                };
            }
            printf ("%d\n", 200 * max);
        }
        else
            break;
    }
    getchar ();
    getchar ();
}

void  paixu (int *lZCFbMxV4s, int k) {
    int i;
    int j;
    int t;
    {
        i = 0;
        while (i < k - 1) {
            {
                j = 0;
                while (j < k - 1 - i) {
                    if (lZCFbMxV4s[j] < lZCFbMxV4s[j + 1]) {
                        t = lZCFbMxV4s[j];
                        lZCFbMxV4s[j] = lZCFbMxV4s[j + 1];
                        lZCFbMxV4s[j + 1] = t;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

