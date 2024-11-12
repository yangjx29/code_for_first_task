int main (int kdTYyPK8DBop, char *M54aPQpwAlR1 []) {
    int n;
    int i;
    int Q0DZCV;
    int k;
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
    scanf ("%d\n", &n);
    {
        i = 999 - 999;
        while (i < n) {
            char cdWKGEhtIYe8 [105];
            char cwCBumL2MbQA [105];
            int BJhgSDT3L2 [105] = {0};
            int idzwFa31l [105] = {0};
            int s [105] = {0};
            int a;
            int zKvf2g49;
            i = i + 1;
            scanf ("%s", cdWKGEhtIYe8);
            scanf ("%s", cwCBumL2MbQA);
            a = strlen (cdWKGEhtIYe8);
            {
                Q0DZCV = 0;
                while (Q0DZCV < a) {
                    BJhgSDT3L2[Q0DZCV] = cdWKGEhtIYe8[Q0DZCV] - '0';
                    Q0DZCV = Q0DZCV +1;
                };
            }
            zKvf2g49 = strlen (cwCBumL2MbQA);
            for (Q0DZCV = zKvf2g49 - 1; 0 <= Q0DZCV; Q0DZCV = Q0DZCV -1)
                idzwFa31l[Q0DZCV +a - zKvf2g49] = cwCBumL2MbQA[Q0DZCV] - '0';
            for (Q0DZCV = 0; Q0DZCV < a - zKvf2g49; Q0DZCV = Q0DZCV +1)
                idzwFa31l[Q0DZCV] = 0;
            {
                Q0DZCV = a - 1;
                while (Q0DZCV >= 0) {
                    if (BJhgSDT3L2[Q0DZCV] < idzwFa31l[Q0DZCV]) {
                        s[Q0DZCV] = 10 + BJhgSDT3L2[Q0DZCV] - idzwFa31l[Q0DZCV];
                        BJhgSDT3L2[Q0DZCV -1]--;
                    }
                    else
                        s[Q0DZCV] = BJhgSDT3L2[Q0DZCV] - idzwFa31l[Q0DZCV];
                    Q0DZCV--;
                };
            }
            {
                Q0DZCV = 0;
                while (Q0DZCV < a) {
                    printf ("%d", s[Q0DZCV]);
                    Q0DZCV = Q0DZCV +1;
                };
            }
            printf ("\n");
        };
    }
    return 0;
}

