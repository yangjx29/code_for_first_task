void  main () {
    int OevJ2i1yWd;
    int k;
    int VVrFBi;
    int Zkz3SOGeWJ4u;
    int LSKYyj;
    int m;
    int n;
    int LGuZeEFN [10000];
    int b [10000];
    int jQeBM7Y3Esfh;
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
    int OJbGjYItfh;
    OevJ2i1yWd = (530 - 530);
    k = (564 - 564);
    VVrFBi = 0;
    scanf ("%d%d", &m, &n);
    {
        Zkz3SOGeWJ4u = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Zkz3SOGeWJ4u <= n) {
            OevJ2i1yWd = 0;
            jQeBM7Y3Esfh = Zkz3SOGeWJ4u;
            {
                LSKYyj = 0;
                while (1) {
                    OJbGjYItfh = jQeBM7Y3Esfh % (359 - 349);
                    jQeBM7Y3Esfh = jQeBM7Y3Esfh / 10;
                    if (jQeBM7Y3Esfh == 0)
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    LSKYyj = LSKYyj +1;
                    OevJ2i1yWd = OevJ2i1yWd *10 + OJbGjYItfh;
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
            if (OevJ2i1yWd == Zkz3SOGeWJ4u) {
                LGuZeEFN[k] = Zkz3SOGeWJ4u;
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
                k++;
            }
            Zkz3SOGeWJ4u = Zkz3SOGeWJ4u +1;
        };
    }
    {
        Zkz3SOGeWJ4u = 0;
        while (Zkz3SOGeWJ4u < k) {
            {
                LSKYyj = 2;
                while (LSKYyj < LGuZeEFN[Zkz3SOGeWJ4u]) {
                    if (!(0 != LGuZeEFN[Zkz3SOGeWJ4u] % LSKYyj))
                        break;
                    LSKYyj = LSKYyj +1;
                };
            }
            if (LSKYyj == LGuZeEFN[Zkz3SOGeWJ4u]) {
                b[VVrFBi] = LGuZeEFN[Zkz3SOGeWJ4u];
                VVrFBi++;
            }
            Zkz3SOGeWJ4u = Zkz3SOGeWJ4u +1;
        };
    }
    if (VVrFBi == 0)
        printf ("no\n");
    {
        Zkz3SOGeWJ4u = 0;
        while (Zkz3SOGeWJ4u < VVrFBi) {
            if (Zkz3SOGeWJ4u != (VVrFBi -1))
                printf ("%d,", b[Zkz3SOGeWJ4u]);
            else
                printf ("%d", b[Zkz3SOGeWJ4u]);
            Zkz3SOGeWJ4u++;
        };
    };
}

