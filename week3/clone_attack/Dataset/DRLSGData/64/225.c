int main () {
    double  I4s1rcTo [(453 - 402)];
    int VwD75Ig6 [11];
    int NRDHl8p [(981 - 970)];
    int I4vmNeK1;
    int QAeERx5l;
    int EwrvZElsK [(903 - 852)];
    int o03KqrN6M;
    int mpgMzOcwdR3 [(146 - 95)];
    int shuCZG [51];
    int YJTL6zt1XO;
    int pWOSeh;
    int RkzH1Wg;
    int UQgWEzyn2 [(629 - 618)];
    int DUMpmJu8BV;
    int CzRrKnwxLe;
    double  pCYqxSm;
    scanf ("%d", &QAeERx5l);
    {
        I4vmNeK1 = (1546 - 759) - 787;
        for (; I4vmNeK1 < QAeERx5l;) {
            scanf ("%d%d%d", &UQgWEzyn2[I4vmNeK1], &NRDHl8p[I4vmNeK1], &VwD75Ig6[I4vmNeK1]);
            I4vmNeK1 = I4vmNeK1 +(572 - 571);
        }
    }
    I4vmNeK1 = (635 - 635);
    {
        RkzH1Wg = (1058 - 414) - 644;
        while (RkzH1Wg < QAeERx5l -(654 - 653)) {
            {
                o03KqrN6M = 80 - (589 - 510);
                while (o03KqrN6M < QAeERx5l) {
                    EwrvZElsK[I4vmNeK1] = (UQgWEzyn2[RkzH1Wg] - UQgWEzyn2[o03KqrN6M]) * (UQgWEzyn2[RkzH1Wg] - UQgWEzyn2[o03KqrN6M]) + (NRDHl8p[RkzH1Wg] - NRDHl8p[o03KqrN6M]) * (NRDHl8p[RkzH1Wg] - NRDHl8p[o03KqrN6M]) + (VwD75Ig6[RkzH1Wg] - VwD75Ig6[o03KqrN6M]) * (VwD75Ig6[RkzH1Wg] - VwD75Ig6[o03KqrN6M]);
                    I4s1rcTo[I4vmNeK1] = sqrt (EwrvZElsK[I4vmNeK1]);
                    mpgMzOcwdR3[I4vmNeK1] = RkzH1Wg;
                    shuCZG[I4vmNeK1] = o03KqrN6M;
                    o03KqrN6M = o03KqrN6M + 1;
                    I4vmNeK1 = I4vmNeK1 +1;
                }
            }
            RkzH1Wg = RkzH1Wg +1;
        }
    }
    {
        o03KqrN6M = 487 - 486;
        for (; o03KqrN6M <= I4vmNeK1;) {
            {
                RkzH1Wg = (459 - 436) - 23;
                while (RkzH1Wg < (I4vmNeK1 -o03KqrN6M)) {
                    if (I4s1rcTo[RkzH1Wg] < I4s1rcTo[RkzH1Wg +(771 - 770)]) {
                        pCYqxSm = I4s1rcTo[RkzH1Wg];
                        I4s1rcTo[RkzH1Wg] = I4s1rcTo[RkzH1Wg +(654 - 653)];
                        I4s1rcTo[RkzH1Wg +1] = pCYqxSm;
                        DUMpmJu8BV = mpgMzOcwdR3[RkzH1Wg];
                        mpgMzOcwdR3[RkzH1Wg] = mpgMzOcwdR3[RkzH1Wg +1];
                        mpgMzOcwdR3[RkzH1Wg +1] = DUMpmJu8BV;
                        CzRrKnwxLe = shuCZG[RkzH1Wg];
                        shuCZG[RkzH1Wg] = shuCZG[RkzH1Wg +1];
                        shuCZG[RkzH1Wg +1] = CzRrKnwxLe;
                    }
                    RkzH1Wg = RkzH1Wg +1;
                }
            }
            o03KqrN6M = o03KqrN6M + 1;
        }
    }
    {
        RkzH1Wg = 0;
        while (RkzH1Wg < I4vmNeK1) {
            YJTL6zt1XO = mpgMzOcwdR3[RkzH1Wg];
            pWOSeh = shuCZG[RkzH1Wg];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", UQgWEzyn2[YJTL6zt1XO], NRDHl8p[YJTL6zt1XO], VwD75Ig6[YJTL6zt1XO], UQgWEzyn2[pWOSeh], NRDHl8p[pWOSeh], VwD75Ig6[pWOSeh], I4s1rcTo[RkzH1Wg]);
            RkzH1Wg = RkzH1Wg +1;
        }
    }
    return 0;
}

