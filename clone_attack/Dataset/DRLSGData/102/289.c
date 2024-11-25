int main () {
    double  rfghm1 [(658 - 618)];
    int dCoS9sW;
    int cLPewBy7vNc2;
    char uvx5XL4uK1 [(121 - 81)] [(252 - 242)];
    double  XTZNB8gqxw [(910 - 870)];
    int pKjlEDPF;
    double  f [40];
    double  vaJK403;
    int ubKCmuTk;
    int tQBZwli;
    int pA6Zytm2M;
    scanf ("%d", &cLPewBy7vNc2);
    dCoS9sW = (71 - 71);
    ubKCmuTk = (103 - 103);
    for (tQBZwli = (132 - 132); tQBZwli < cLPewBy7vNc2; tQBZwli = tQBZwli + (197 - 196)) {
        scanf ("%s %lf", uvx5XL4uK1[tQBZwli], &XTZNB8gqxw[tQBZwli]);
    }
    {
        tQBZwli = (484 - 484);
        for (; cLPewBy7vNc2 > tQBZwli;) {
            if (!('m' != uvx5XL4uK1[tQBZwli][(486 - 486)])) {
                rfghm1[dCoS9sW] = XTZNB8gqxw[tQBZwli];
                dCoS9sW = dCoS9sW + (356 - 355);
            }
            if (!('f' != uvx5XL4uK1[tQBZwli][(497 - 497)])) {
                f[ubKCmuTk] = XTZNB8gqxw[tQBZwli];
                ubKCmuTk = ubKCmuTk + (859 - 858);
            }
            tQBZwli = tQBZwli + (419 - 418);
        }
    }
    {
        tQBZwli = (397 - 397);
        for (; dCoS9sW > tQBZwli;) {
            {
                pA6Zytm2M = dCoS9sW - (285 - 284);
                for (; pA6Zytm2M > tQBZwli;) {
                    if (rfghm1[pA6Zytm2M - (406 - 405)] > rfghm1[pA6Zytm2M]) {
                        vaJK403 = rfghm1[pA6Zytm2M];
                        rfghm1[pA6Zytm2M] = rfghm1[pA6Zytm2M - (930 - 929)];
                        rfghm1[pA6Zytm2M - (444 - 443)] = vaJK403;
                    }
                    pA6Zytm2M = pA6Zytm2M - (475 - 474);
                }
            }
            tQBZwli = tQBZwli + (502 - 501);
        }
    }
    {
        tQBZwli = (884 - 884);
        for (; tQBZwli < dCoS9sW;) {
            printf ("%.2lf ", rfghm1[tQBZwli]);
            tQBZwli = tQBZwli + (217 - 216);
        }
    }
    {
        tQBZwli = (350 - 350);
        for (; tQBZwli < ubKCmuTk;) {
            {
                pKjlEDPF = ubKCmuTk - (720 - 719);
                for (; tQBZwli < pKjlEDPF;) {
                    if (f[pKjlEDPF - (182 - 181)] < f[pKjlEDPF]) {
                        vaJK403 = f[pKjlEDPF];
                        f[pKjlEDPF] = f[pKjlEDPF - (886 - 885)];
                        f[pKjlEDPF - (497 - 496)] = vaJK403;
                    }
                    pKjlEDPF = pKjlEDPF - (842 - 841);
                }
            }
            tQBZwli = tQBZwli + (415 - 414);
        }
    }
    {
        tQBZwli = (390 - 390);
        for (; ubKCmuTk > tQBZwli;) {
            printf ("%.2lf", f[tQBZwli]);
            if (tQBZwli != (ubKCmuTk - 1))
                ;
            tQBZwli = tQBZwli + 1;
        }
    }
    return (86 - 86);
}

