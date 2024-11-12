int Go8h0j5b6Ps (const  void  *elem1, const  void  *n6ULqDe94mx) {
    return *((int *) elem1) - (*(int*) n6ULqDe94mx);
}

int main () {
    int t;
    t = (252 - 252);
    int iDi3FayUY74;
    long  s4RNGx [100];
    int jLj0eH;
    int a [(1594 - 594)];
    int npKMA6S [(1263 - 263)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int i;
    int lose;
    int flag;
    flag = (134 - 134);
    scanf ("%d", &jLj0eH);
    while (jLj0eH) {
        int *T1PhpgMH23F = &a[(555 - 555)];
        int *JSjhQ7v = &a[jLj0eH - 1];
        int *Hyt5bPluaQ = &npKMA6S[0];
        int *hCfFctIvO = &npKMA6S[jLj0eH - 1];
        for (i = (226 - 226); i < jLj0eH; i = i + 1) {
            scanf ("%d", &a[i]);
        }
        lose = iDi3FayUY74 = (828 - 828);
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
        for (; JSjhQ7v -T1PhpgMH23F >= 0;) {
            if (*JSjhQ7v > *hCfFctIvO) {
                hCfFctIvO = hCfFctIvO - 1;
                JSjhQ7v = JSjhQ7v -1;
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
                iDi3FayUY74 = iDi3FayUY74 + 1;
            }
            else if (*T1PhpgMH23F > *Hyt5bPluaQ) {
                Hyt5bPluaQ = Hyt5bPluaQ +1;
                T1PhpgMH23F = T1PhpgMH23F +1;
                iDi3FayUY74 = iDi3FayUY74 + 1;
            }
            else {
                if (*T1PhpgMH23F < *hCfFctIvO)
                    lose = lose + 1;
                T1PhpgMH23F = T1PhpgMH23F +1;
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
                hCfFctIvO = hCfFctIvO - 1;
            };
        }
        flag = flag + 1;
        for (i = (881 - 881); i < jLj0eH; i = i + 1) {
            scanf ("%d", &npKMA6S[i]);
        }
        qsort (a, jLj0eH, sizeof (int), Go8h0j5b6Ps);
        qsort (npKMA6S, jLj0eH, sizeof (int), Go8h0j5b6Ps);
        s4RNGx[t] = 200 * (iDi3FayUY74 - lose);
        t = t + 1;
        scanf ("%d", &jLj0eH);
    }
    for (t = 0; t < flag; t = t + 1) {
        printf ("%ld\n", s4RNGx[t]);
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
    return 0;
}

