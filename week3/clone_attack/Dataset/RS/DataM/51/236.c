main () {
    static char s [500], ofPBkJe [500] [5], H2Kgwn1 [7];
    int b;
    int d1;
    int d2;
    int k9;
    int n;
    int EoFr2PZaB;
    int j;
    int l [(596 - 96)];
    int j56aKSM9fx;
    int a;
    int m;
    int d3 [(961 - 461)] = {(381 - 381)};
    int k8;
    b = (269 - 269);
    d1 = (685 - 685);
    d2 = (969 - 969);
    k9 = (522 - 522);
    gets (H2Kgwn1);
    gets (s);
    scanf ("%d", &n);
    {
        EoFr2PZaB = 0;
        while (!('\0' == s[EoFr2PZaB +n - 1])) {
            {
                j = 0;
                while (n > j) {
                    ofPBkJe[EoFr2PZaB][j] = s[EoFr2PZaB +j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            EoFr2PZaB++;
        };
    }
    a = EoFr2PZaB;
    for (EoFr2PZaB = 0; a > EoFr2PZaB; EoFr2PZaB = EoFr2PZaB +1) {
        {
            j = 0;
            while (a > j) {
                m = 1;
                for (j56aKSM9fx = 0; j56aKSM9fx < n; j56aKSM9fx = j56aKSM9fx + 1)
                    if (!(ofPBkJe[j][j56aKSM9fx] == ofPBkJe[EoFr2PZaB][j56aKSM9fx])) {
                        m = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        break;
                    }
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
                if (m == 1)
                    b++;
                j = j + 1;
            };
        }
        l[EoFr2PZaB] = b;
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
        b = 0;
    }
    for (EoFr2PZaB = 0; EoFr2PZaB < a; EoFr2PZaB++)
        if (l[EoFr2PZaB] > d1)
            d1 = l[EoFr2PZaB];
    if (1 >= d1)
        ;
    else {
        printf ("%d\n", d1);
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
        {
            EoFr2PZaB = 0;
            while (EoFr2PZaB < a) {
                k9 = 0;
                if (d1 == l[EoFr2PZaB]) {
                    {
                        k8 = 1;
                        while (k8 <= d2) {
                            if (0 == strcmp (ofPBkJe[EoFr2PZaB], ofPBkJe[d3[k8]])) {
                                k9 = 1;
                                break;
                            }
                            k8 = k8 + 1;
                        };
                    }
                    if (k9 == 0) {
                        for (j56aKSM9fx = 0; j56aKSM9fx < n; j56aKSM9fx = j56aKSM9fx + 1)
                            printf ("%c", ofPBkJe[EoFr2PZaB][j56aKSM9fx]);
                    };
                }
                d2 = d2 + 1;
                d3[d2] = EoFr2PZaB;
                EoFr2PZaB++;
            };
        };
    };
}

