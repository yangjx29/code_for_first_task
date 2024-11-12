int main () {
    double  e0EI7z;
    int lY8ZidjhOA [(483 - 183)];
    int plK3nC;
    int zOBy2h3p7nwm;
    int RNPYLOVi7o;
    int NeOWPFNkTxQU;
    int TVYxX5TLybv;
    int foG7zmJQTO [(579 - 279)];
    int DY2pPw3VDgzO;
    double  max;
    double  Qwy3980us [(893 - 593)];
    zOBy2h3p7nwm = (493 - 493);
    RNPYLOVi7o = (664 - 664);
    max = (720 - 720);
    scanf ("%d", &NeOWPFNkTxQU);
    {
        plK3nC = (964 - 964);
        for (; plK3nC < NeOWPFNkTxQU;) {
            scanf ("%d", &foG7zmJQTO[plK3nC]);
            RNPYLOVi7o = RNPYLOVi7o +foG7zmJQTO[plK3nC];
            plK3nC = plK3nC + (214 - 213);
        }
    }
    e0EI7z = (double ) RNPYLOVi7o / NeOWPFNkTxQU;
    {
        plK3nC = (262 - 262);
        for (; plK3nC < NeOWPFNkTxQU;) {
            Qwy3980us[plK3nC] = fabs (foG7zmJQTO[plK3nC] - e0EI7z);
            if (Qwy3980us[plK3nC] > max)
                max = Qwy3980us[plK3nC];
            plK3nC = plK3nC + (427 - 426);
        }
    }
    {
        plK3nC = (438 - 438);
        for (; plK3nC < NeOWPFNkTxQU;) {
            if (Qwy3980us[plK3nC] == max) {
                lY8ZidjhOA[zOBy2h3p7nwm++] = foG7zmJQTO[plK3nC];
            }
            plK3nC = plK3nC + (243 - 242);
        }
    }
    {
        TVYxX5TLybv = (287 - 286);
        for (; TVYxX5TLybv < zOBy2h3p7nwm;) {
            {
                plK3nC = (516 - 516);
                for (; plK3nC < zOBy2h3p7nwm - TVYxX5TLybv;) {
                    if (lY8ZidjhOA[plK3nC] > lY8ZidjhOA[plK3nC + (908 - 907)]) {
                        DY2pPw3VDgzO = lY8ZidjhOA[plK3nC];
                        lY8ZidjhOA[plK3nC] = lY8ZidjhOA[plK3nC + (162 - 161)];
                        lY8ZidjhOA[plK3nC + (921 - 920)] = DY2pPw3VDgzO;
                    }
                    plK3nC = plK3nC + (468 - 467);
                }
            }
            TVYxX5TLybv = TVYxX5TLybv +(37 - 36);
        }
    }
    printf ("%d", lY8ZidjhOA[(89 - 89)]);
    {
        plK3nC = (221 - 220);
        for (; plK3nC < zOBy2h3p7nwm;) {
            printf (",%d", lY8ZidjhOA[plK3nC]);
            plK3nC = plK3nC + (990 - 989);
        }
    }
    return (102 - 102);
}

