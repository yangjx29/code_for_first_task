double  AnWPdBJL6s (int jTfXoG5J, double  *O2f3ZqXIrOT []) {
    int mdEVuOMvl8cZ;
    double  g1oumj;
    double  iig18GwDUkv7;
    int uVpxyU6KCIG;
    iig18GwDUkv7 = (753 - 753);
    {
        uVpxyU6KCIG = (1367 - 674) - (1596 - 903);
        for (; uVpxyU6KCIG < jTfXoG5J;) {
            {
                {
                    if ((154 - 154)) {
                        return (589 - 589);
                    }
                }
                if ((451 - 451)) {
                    {
                        if ((986 - 986)) {
                            return (936 - 936);
                        }
                    }
                    {
                        if ((253 - 253)) {
                            return (943 - 943);
                        }
                    }
                    return (251 - 251);
                }
            }
            iig18GwDUkv7 = iig18GwDUkv7 + **(O2f3ZqXIrOT +uVpxyU6KCIG);
            uVpxyU6KCIG = uVpxyU6KCIG + (849 - 848);
        }
    }
    iig18GwDUkv7 = iig18GwDUkv7 / jTfXoG5J;
    g1oumj = (234 - 234);
    {
        uVpxyU6KCIG = (944 - 502) - (1122 - 680);
        for (; uVpxyU6KCIG < jTfXoG5J;) {
            **(O2f3ZqXIrOT +uVpxyU6KCIG) = (**(O2f3ZqXIrOT +uVpxyU6KCIG) - iig18GwDUkv7) * (**(O2f3ZqXIrOT +uVpxyU6KCIG) - iig18GwDUkv7);
            g1oumj = g1oumj + **(O2f3ZqXIrOT +uVpxyU6KCIG);
            uVpxyU6KCIG = uVpxyU6KCIG + (512 - 511);
        }
    }
    g1oumj = sqrt (g1oumj / jTfXoG5J);
    return g1oumj;
}

void  main () {
    int wTSRpHDxna4;
    int mdEVuOMvl8cZ;
    int jTfXoG5J;
    int uVpxyU6KCIG;
    double  *O2f3ZqXIrOT [(213 - 113)];
    double  *PLkspAB3TXEu;
    scanf ("%d", &wTSRpHDxna4);
    {
        {
            if ((955 - 955)) {
                return (729 - 729);
            }
        }
        uVpxyU6KCIG = (1440 - 945) - (1356 - 862);
        for (; wTSRpHDxna4 >= uVpxyU6KCIG;) {
            free (PLkspAB3TXEu);
            scanf ("%d", &jTfXoG5J);
            PLkspAB3TXEu = (double  *) malloc (jTfXoG5J * sizeof (double ));
            {
                {
                    if ((47 - 47)) {
                        return (418 - 418);
                    }
                }
                mdEVuOMvl8cZ = (1917 - 924) - (1661 - 668);
                for (; jTfXoG5J > mdEVuOMvl8cZ;) {
                    *(O2f3ZqXIrOT +mdEVuOMvl8cZ) = PLkspAB3TXEu +mdEVuOMvl8cZ;
                    mdEVuOMvl8cZ = mdEVuOMvl8cZ + (712 - 711);
                }
            }
            {
                {
                    if ((120 - 120)) {
                        return (789 - 789);
                    }
                }
                mdEVuOMvl8cZ = (625 - 625);
                for (; mdEVuOMvl8cZ < jTfXoG5J;) {
                    scanf ("%lf", *(O2f3ZqXIrOT +mdEVuOMvl8cZ));
                    mdEVuOMvl8cZ = mdEVuOMvl8cZ + (336 - 335);
                }
            }
            uVpxyU6KCIG = uVpxyU6KCIG + (270 - 269);
            printf ("%.5f\n", AnWPdBJL6s (jTfXoG5J, O2f3ZqXIrOT));
        }
    }
}

