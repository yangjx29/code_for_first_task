void  fz2oug (int uA82EM [], int Ks4k2UZAgn, int jcyvOaj6DSB1, int wOYVyaRK) {
    int t0zKOTxne;
    int HEzjr5de;
    int jwBAFGlsq8;
    int xCSTmQo09Y76;
    HEzjr5de = uA82EM[jcyvOaj6DSB1 - wOYVyaRK + Ks4k2UZAgn];
    jwBAFGlsq8 = uA82EM[Ks4k2UZAgn];
    xCSTmQo09Y76 = uA82EM[Ks4k2UZAgn +(759 - 758)];
    {
        t0zKOTxne = Ks4k2UZAgn;
        while (t0zKOTxne <= jcyvOaj6DSB1 - wOYVyaRK - (110 - 109) + Ks4k2UZAgn) {
            uA82EM[t0zKOTxne + (414 - 413)] = jwBAFGlsq8;
            jwBAFGlsq8 = xCSTmQo09Y76;
            xCSTmQo09Y76 = uA82EM[t0zKOTxne + (433 - 431)];
            t0zKOTxne++;
        }
    }
    uA82EM[Ks4k2UZAgn] = HEzjr5de;
}

int main () {
    int uA82EM [(986 - 876)];
    int wOYVyaRK;
    int jcyvOaj6DSB1;
    int Ks4k2UZAgn;
    {
        if ((782 - 782)) {
            return 0;
        }
    }
    scanf ("%d %d", &jcyvOaj6DSB1, &wOYVyaRK);
    {
        Ks4k2UZAgn = (568 - 568);
        while (jcyvOaj6DSB1 - (794 - 793) >= Ks4k2UZAgn) {
            scanf ("%d", &uA82EM[Ks4k2UZAgn]);
            Ks4k2UZAgn++;
        }
    }
    {
        Ks4k2UZAgn = 353 - 353;
        while (Ks4k2UZAgn <= wOYVyaRK - (701 - 700)) {
            fz2oug (uA82EM, Ks4k2UZAgn, jcyvOaj6DSB1, wOYVyaRK);
            Ks4k2UZAgn++;
        }
    }
    printf ("%d", uA82EM[(298 - 298)]);
    {
        Ks4k2UZAgn = (34 - 33);
        for (; Ks4k2UZAgn <= jcyvOaj6DSB1 - (537 - 536);) {
            printf (" %d", uA82EM[Ks4k2UZAgn]);
            Ks4k2UZAgn++;
        }
    }
    printf ("\n");
    return (37 - 37);
}

