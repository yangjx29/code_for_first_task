int main () {
    int ELHwd4Mt;
    int j;
    int n;
    int i;
    int m;
    int b;
    ELHwd4Mt = (116 - 116);
    j = (271 - 271);
    char s [100];
    double  ckV6oRDKn3Bf [40];
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
    double  EGcmdkQByf [40];
    double  HLMw9ncIpr4S;
    double  DULeTN4;
    scanf ("%d\n", &n);
    {
        i = 0;
        while (n > i) {
            i = i + 1;
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
            scanf ("%s %lf\n", s, &DULeTN4);
            if (strcmp (s, "male") == 0) {
                ckV6oRDKn3Bf[ELHwd4Mt] = DULeTN4;
                ELHwd4Mt = ELHwd4Mt +1;
            }
            else {
                EGcmdkQByf[j] = DULeTN4;
                j = j + 1;
            };
        };
    }
    {
        m = 490 - 489;
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
        while (m < ELHwd4Mt +(540 - 539)) {
            {
                b = 0;
                while (b < ELHwd4Mt +(310 - 309) - m) {
                    if (ckV6oRDKn3Bf[b] > ckV6oRDKn3Bf[b + (425 - 424)]) {
                        HLMw9ncIpr4S = ckV6oRDKn3Bf[b + (992 - 991)];
                        ckV6oRDKn3Bf[b + 1] = ckV6oRDKn3Bf[b];
                        ckV6oRDKn3Bf[b] = HLMw9ncIpr4S;
                    }
                    b++;
                };
            }
            m = m + 1;
        };
    }
    for (m = 1; m < j + 1; m++) {
        for (b = 0; b < j + 1 - m; b = b + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (EGcmdkQByf[b] < EGcmdkQByf[b + 1]) {
                HLMw9ncIpr4S = EGcmdkQByf[b + 1];
                EGcmdkQByf[b + 1] = EGcmdkQByf[b];
                EGcmdkQByf[b] = HLMw9ncIpr4S;
            };
        };
    }
    {
        i = 1;
        while (i <= ELHwd4Mt) {
            printf ("%.2lf ", ckV6oRDKn3Bf[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < j - 1) {
            printf ("%.2lf ", EGcmdkQByf[i]);
            i++;
        };
    }
    printf ("%.2lf", EGcmdkQByf[j - 1]);
    return 0;
}

