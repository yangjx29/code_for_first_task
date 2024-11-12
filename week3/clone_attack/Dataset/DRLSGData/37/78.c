main () {
    int O9EHBy7;
    int Q6ayVEqShc2;
    int tNJg25U;
    int Yy4injeZXcI;
    int hpQRbs;
    char CjgpCc2sqwKX [100001];
    int FtPQ7ydf;
    int rJA4Tkm3brt [100001];
    int xxkCsY;
    scanf ("%d", &FtPQ7ydf);
    {
        O9EHBy7 = (593 - 592);
        for (; FtPQ7ydf >= O9EHBy7;) {
            memset (CjgpCc2sqwKX, 0, sizeof (CjgpCc2sqwKX));
            memset (rJA4Tkm3brt, 0, sizeof (rJA4Tkm3brt));
            scanf ("%s", CjgpCc2sqwKX);
            Q6ayVEqShc2 = strlen (CjgpCc2sqwKX);
            Yy4injeZXcI = (620 - 620);
            {
                hpQRbs = 0;
                for (; Q6ayVEqShc2 -1 >= hpQRbs;) {
                    {
                        xxkCsY = 0;
                        for (; Q6ayVEqShc2 -1 >= xxkCsY;) {
                            if (CjgpCc2sqwKX[hpQRbs] == CjgpCc2sqwKX[xxkCsY])
                                rJA4Tkm3brt[hpQRbs]++;
                            xxkCsY = xxkCsY + 1;
                        }
                    }
                    hpQRbs = hpQRbs + 1;
                }
            }
            {
                tNJg25U = 0;
                for (; tNJg25U <= Q6ayVEqShc2 -1;) {
                    if (rJA4Tkm3brt[tNJg25U] == 1) {
                        printf ("%c\n", CjgpCc2sqwKX[tNJg25U]);
                        Yy4injeZXcI = Yy4injeZXcI +1;
                        break;
                    }
                    tNJg25U = tNJg25U + 1;
                }
            }
            if (Yy4injeZXcI == 0)
                ;
            O9EHBy7 = O9EHBy7 +1;
        }
    }
}

