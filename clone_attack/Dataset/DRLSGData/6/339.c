int main () {
    int himcqfv2;
    int DKPI15l;
    int UxJNGueRLDt6 [(137 - 37)];
    int LcMlekq4DH [100];
    int wgvaVh4FmrXO [100] [100];
    int cxb39yLpk;
    int Pel96L;
    int va7xdjEc;
    int tUeLjlnCbfu;
    int B0eGi6Ic;
    scanf ("%d", &DKPI15l);
    {
        cxb39yLpk = (268 - 268);
        while (cxb39yLpk < DKPI15l) {
            himcqfv2 = (988 - 988);
            scanf ("%d%d", &UxJNGueRLDt6[cxb39yLpk], &LcMlekq4DH[cxb39yLpk]);
            tUeLjlnCbfu = UxJNGueRLDt6[cxb39yLpk] - 1;
            B0eGi6Ic = LcMlekq4DH[cxb39yLpk] - 1;
            {
                Pel96L = (675 - 675);
                while (Pel96L < UxJNGueRLDt6[cxb39yLpk]) {
                    {
                        va7xdjEc = (24 - 24);
                        while (va7xdjEc < LcMlekq4DH[cxb39yLpk]) {
                            scanf ("%d", &wgvaVh4FmrXO[Pel96L][va7xdjEc]);
                            va7xdjEc++;
                        };
                    }
                    Pel96L++;
                };
            }
            {
                Pel96L = (34 - 34);
                while (Pel96L < UxJNGueRLDt6[cxb39yLpk]) {
                    himcqfv2 = himcqfv2 + wgvaVh4FmrXO[Pel96L][(274 - 274)] + wgvaVh4FmrXO[Pel96L][B0eGi6Ic];
                    Pel96L++;
                };
            }
            {
                va7xdjEc = 0;
                while (va7xdjEc < LcMlekq4DH[cxb39yLpk]) {
                    himcqfv2 = himcqfv2 + wgvaVh4FmrXO[0][va7xdjEc] + wgvaVh4FmrXO[tUeLjlnCbfu][va7xdjEc];
                    va7xdjEc++;
                };
            }
            himcqfv2 = himcqfv2 - wgvaVh4FmrXO[0][0] - wgvaVh4FmrXO[0][B0eGi6Ic] - wgvaVh4FmrXO[tUeLjlnCbfu][0] - wgvaVh4FmrXO[tUeLjlnCbfu][B0eGi6Ic];
            printf ("%d\n", himcqfv2);
            himcqfv2 = 0;
            cxb39yLpk++;
        };
    }
    return 0;
}

