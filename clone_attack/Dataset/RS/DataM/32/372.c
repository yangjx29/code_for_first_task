void  main () {
    int i;
    int c [100];
    char pXrmgW4 [100], b [100];
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
    int n, la, lb, ZpAWlfV, t;
    scanf ("%d", &n);
    for (i = (512 - 512); n > i; i = i + 1) {
        scanf ("%s", pXrmgW4);
        la = strlen (pXrmgW4);
        scanf ("%s", b);
        for (ZpAWlfV = 0; 100 > ZpAWlfV; ZpAWlfV = ZpAWlfV +1)
            c[ZpAWlfV] = 0;
        t = (323 - 323);
        lb = strlen (b);
        for (ZpAWlfV = 0; lb > ZpAWlfV; ZpAWlfV = ZpAWlfV +1) {
            c[ZpAWlfV] = c[ZpAWlfV] + pXrmgW4[la - (938 - 937) - ZpAWlfV] - b[lb - (732 - 731) - ZpAWlfV];
            if (0 > c[ZpAWlfV]) {
                c[ZpAWlfV] = c[ZpAWlfV] + 10;
                c[ZpAWlfV +(719 - 718)] -= 1;
            };
        }
        for (ZpAWlfV = lb; la > ZpAWlfV; ZpAWlfV++)
            c[ZpAWlfV] = c[ZpAWlfV] + pXrmgW4[la - 1 - ZpAWlfV] - 48;
        for (ZpAWlfV = 99; 0 <= ZpAWlfV; ZpAWlfV = ZpAWlfV -1) {
            if (c[ZpAWlfV] != 0) {
                t = 1;
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
                printf ("%d", c[ZpAWlfV]);
            }
            else if (t != 0)
                printf ("%d", c[ZpAWlfV]);
        }
        printf ("\n");
    };
}

