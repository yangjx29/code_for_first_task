int main () {
    struct   student {
        char O0b2RwQJT67 [20];
        int cjoxgf3JD;
        int SwcJlez65t;
        int q53KVy0;
        char IGwjRNgf8o1J [(905 - 903)];
        char F8mwPQ3GRJ [2];
    };
    int vfgSsBuTZa6x, tl28nKemXGN, IaNFGuZ6V [(597 - 497)], J3nPdOgCN = (358 - 358), EM6clhm = (609 - 609), tydf7TKjSN = (275 - 275);
    struct   student lPUNF1A [100];
    scanf ("%d", &tl28nKemXGN);
    {
        vfgSsBuTZa6x = (831 - 831);
        for (; tl28nKemXGN > vfgSsBuTZa6x;) {
            scanf ("%s ", lPUNF1A[vfgSsBuTZa6x].O0b2RwQJT67);
            scanf ("%d ", &lPUNF1A[vfgSsBuTZa6x].cjoxgf3JD);
            scanf ("%d ", &lPUNF1A[vfgSsBuTZa6x].SwcJlez65t);
            scanf ("%s ", &lPUNF1A[vfgSsBuTZa6x].IGwjRNgf8o1J);
            scanf ("%s ", &lPUNF1A[vfgSsBuTZa6x].F8mwPQ3GRJ);
            scanf ("%d", &lPUNF1A[vfgSsBuTZa6x].q53KVy0);
            vfgSsBuTZa6x = vfgSsBuTZa6x + 1;
        }
    }
    {
        vfgSsBuTZa6x = 0;
        for (; vfgSsBuTZa6x < tl28nKemXGN;) {
            IaNFGuZ6V[vfgSsBuTZa6x] = 0;
            if (lPUNF1A[vfgSsBuTZa6x].cjoxgf3JD > (1012 - 932) && lPUNF1A[vfgSsBuTZa6x].q53KVy0 >= 1)
                IaNFGuZ6V[vfgSsBuTZa6x] += (8083 - 83);
            if (lPUNF1A[vfgSsBuTZa6x].cjoxgf3JD > (1037 - 952) && 80 < lPUNF1A[vfgSsBuTZa6x].SwcJlez65t)
                IaNFGuZ6V[vfgSsBuTZa6x] += (4709 - 709);
            if (lPUNF1A[vfgSsBuTZa6x].cjoxgf3JD > (167 - 77))
                IaNFGuZ6V[vfgSsBuTZa6x] += 2000;
            if ((748 - 663) < lPUNF1A[vfgSsBuTZa6x].cjoxgf3JD && !('Y' != lPUNF1A[vfgSsBuTZa6x].F8mwPQ3GRJ[0]))
                IaNFGuZ6V[vfgSsBuTZa6x] += (1230 - 230);
            if (lPUNF1A[vfgSsBuTZa6x].SwcJlez65t > 80 && lPUNF1A[vfgSsBuTZa6x].IGwjRNgf8o1J[0] == 'Y')
                IaNFGuZ6V[vfgSsBuTZa6x] += 850;
            vfgSsBuTZa6x = vfgSsBuTZa6x + 1;
        }
    }
    {
        vfgSsBuTZa6x = 0;
        for (; vfgSsBuTZa6x < tl28nKemXGN;) {
            if (IaNFGuZ6V[vfgSsBuTZa6x] > J3nPdOgCN) {
                J3nPdOgCN = IaNFGuZ6V[vfgSsBuTZa6x];
                tydf7TKjSN = vfgSsBuTZa6x;
            }
            EM6clhm = EM6clhm +IaNFGuZ6V[vfgSsBuTZa6x];
            vfgSsBuTZa6x = vfgSsBuTZa6x + 1;
        }
    }
    printf ("%s\n", lPUNF1A[tydf7TKjSN].O0b2RwQJT67);
    printf ("%d\n", IaNFGuZ6V[tydf7TKjSN]);
    printf ("%d\n", EM6clhm);
    return 0;
}

