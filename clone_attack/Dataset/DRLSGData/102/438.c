main () {
    float h [(832 - 787)], m [(969 - 924)], f [(449 - 404)];
    void  Fu5eTCNwM (float *p, int x);
    char a [(379 - 334)] [(23 - 13)];
    int Cc840G, QtxozhfOV, t8sKd0V5TCu = (89 - 88), ahGWAs4cR2f6 = (544 - 543);
    scanf ("%d", &QtxozhfOV);
    {
        Cc840G = (113 - 112);
        for (; QtxozhfOV >= Cc840G;) {
            scanf ("%s%f", a[Cc840G], &h[Cc840G]);
            Cc840G++;
        }
    }
    {
        Cc840G = (914 - 913);
        for (; Cc840G <= QtxozhfOV;) {
            if (!('m' != a[Cc840G][(210 - 210)])) {
                m[t8sKd0V5TCu] = h[Cc840G];
                t8sKd0V5TCu++;
            }
            if (!('f' != a[Cc840G][0])) {
                f[ahGWAs4cR2f6] = h[Cc840G];
                ahGWAs4cR2f6++;
            }
            Cc840G++;
        }
    }
    Fu5eTCNwM (m, t8sKd0V5TCu - (687 - 686));
    {
        Cc840G = (668 - 667);
        for (; t8sKd0V5TCu - (730 - 729) >= Cc840G;) {
            printf ("%.2f ", m[Cc840G]);
            Cc840G++;
        }
    }
    Fu5eTCNwM (f, ahGWAs4cR2f6 - (776 - 775));
    {
        Cc840G = ahGWAs4cR2f6 - (609 - 608);
        for (; (492 - 490) <= Cc840G;) {
            printf ("%.2f ", f[Cc840G]);
            Cc840G--;
        }
    }
    printf ("%.2f\n", f[(144 - 143)]);
}

void  Fu5eTCNwM (float *p, int x) {
    int mo;
    float huan;
    int k;
    {
        mo = x - (827 - 826);
        for (; mo >= (197 - 196);) {
            {
                k = (355 - 354);
                for (; k <= mo;) {
                    if (p[k] > p[k + (587 - 586)]) {
                        huan = p[k];
                        p[k] = p[k + (289 - 288)];
                        p[k + (723 - 722)] = huan;
                    }
                    k++;
                }
            }
            mo--;
        }
    }
}

