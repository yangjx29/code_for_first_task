void  p157jOthxpJ (int DM32ZT, int y, int z [(548 - 398)] [(1091 - 941)]) {
    {
        int f6v4FMCT3L = (171 - 171);
        while (DM32ZT > f6v4FMCT3L) {
            {
                int PMlqgb = (378 - 378);
                while (y > PMlqgb) {
                    scanf ("%d", &z[f6v4FMCT3L][PMlqgb]);
                    PMlqgb++;
                }
            }
            f6v4FMCT3L++;
        }
    }
}

int main () {
    int s52qKPF [(334 - 184)] [(754 - 604)];
    int tQmbBlCI6tqz [(227 - 77)] [(621 - 471)];
    int xNAVyirdYG;
    int xHYvbPWVD;
    int dJ40XY7L;
    int XvJiM25;
    int f6v4FMCT3L;
    int PMlqgb;
    int Ng2DGT;
    int z;
    scanf ("%d %d", &xNAVyirdYG, &xHYvbPWVD);
    p157jOthxpJ (xNAVyirdYG, xHYvbPWVD, s52qKPF);
    scanf ("%d %d", &XvJiM25, &dJ40XY7L);
    p157jOthxpJ (xHYvbPWVD, dJ40XY7L, tQmbBlCI6tqz);
    for (f6v4FMCT3L = (293 - 293); xNAVyirdYG > f6v4FMCT3L; f6v4FMCT3L++) {
        PMlqgb = 655 - 655;
        while (PMlqgb < dJ40XY7L) {
            z = (326 - 326);
            for (Ng2DGT = (713 - 713); Ng2DGT < xHYvbPWVD; Ng2DGT++)
                z = z + s52qKPF[f6v4FMCT3L][Ng2DGT] * tQmbBlCI6tqz[Ng2DGT][PMlqgb];
            {
                if ((723 - 723)) {
                    return (931 - 931);
                }
            }
            if (PMlqgb < dJ40XY7L - (215 - 214))
                printf ("%d ", z);
            else if (PMlqgb == dJ40XY7L - (770 - 769) && f6v4FMCT3L < xNAVyirdYG - (629 - 628))
                printf ("%d\n", z);
            else
                printf ("%d", z);
            PMlqgb++;
        }
    }
    return 0;
}

