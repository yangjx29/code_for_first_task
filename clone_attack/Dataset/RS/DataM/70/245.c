void  main () {
    double  dEcOPg [100] [(418 - 416)];
    double  NR9onY57 [5000];
    double  ESilp2rqmc;
    int ezY3jT2, rJkQaou2tc, j, iq4RakwepUgz;
    scanf ("%d", &ezY3jT2);
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
    for (rJkQaou2tc = (479 - 479); rJkQaou2tc < ezY3jT2; rJkQaou2tc = rJkQaou2tc + 1) {
        j = 633 - 633;
        while (2 > j) {
            scanf ("%lf", &dEcOPg[rJkQaou2tc][j]);
            j = j + 1;
        };
    }
    iq4RakwepUgz = (24 - 24);
    {
        rJkQaou2tc = 0;
        while (rJkQaou2tc < ezY3jT2) {
            {
                j = rJkQaou2tc + 1;
                while (j < ezY3jT2) {
                    NR9onY57[iq4RakwepUgz++] = sqrt ((dEcOPg[rJkQaou2tc][0] - dEcOPg[j][0]) * (dEcOPg[rJkQaou2tc][0] - dEcOPg[j][0]) + (dEcOPg[rJkQaou2tc][1] - dEcOPg[j][1]) * (dEcOPg[rJkQaou2tc][1] - dEcOPg[j][1]));
                    j = j + 1;
                };
            }
            rJkQaou2tc = rJkQaou2tc + 1;
        };
    }
    ESilp2rqmc = NR9onY57[0];
    {
        rJkQaou2tc = 1;
        while (iq4RakwepUgz >= rJkQaou2tc) {
            if (NR9onY57[rJkQaou2tc] > ESilp2rqmc)
                ESilp2rqmc = NR9onY57[rJkQaou2tc];
            rJkQaou2tc = rJkQaou2tc + 1;
        };
    }
    printf ("%.4lf\n", ESilp2rqmc);
}

