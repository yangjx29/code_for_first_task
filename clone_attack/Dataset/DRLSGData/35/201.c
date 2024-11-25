int main () {
    int gcX1LK0r;
    int YcQOlDIjeJ5 [(903 - 895)] [(532 - 524)];
    int I48v6E [(802 - 794)];
    int m7qLx04gw3pD [(649 - 641)];
    int t6kRHW;
    int IqctWKRjHeI;
    int iewlV9YS;
    int DAT0NZjpYCOE;
    int hmcaQf;
    int aeORoH;
    scanf ("%d,%d", &t6kRHW, &IqctWKRjHeI);
    {
        iewlV9YS = (201 - 201);
        while (iewlV9YS < t6kRHW) {
            {
                DAT0NZjpYCOE = (1285 - 872) - (815 - 402);
                while (DAT0NZjpYCOE < IqctWKRjHeI) {
                    scanf ("%d", &(YcQOlDIjeJ5[iewlV9YS][DAT0NZjpYCOE]));
                    DAT0NZjpYCOE++;
                }
            }
            iewlV9YS = iewlV9YS + (422 - 421);
        }
    }
    {
        iewlV9YS = (378 - 378);
        while (iewlV9YS < t6kRHW) {
            I48v6E[iewlV9YS] = (378 - 378);
            {
                DAT0NZjpYCOE = (923 - 923);
                while (DAT0NZjpYCOE < IqctWKRjHeI) {
                    if (YcQOlDIjeJ5[iewlV9YS][DAT0NZjpYCOE] > I48v6E[iewlV9YS])
                        I48v6E[iewlV9YS] = YcQOlDIjeJ5[iewlV9YS][DAT0NZjpYCOE];
                    DAT0NZjpYCOE++;
                }
            }
            iewlV9YS++;
        }
    }
    {
        DAT0NZjpYCOE = (1186 - 771) - (529 - 114);
        while (DAT0NZjpYCOE < IqctWKRjHeI) {
            m7qLx04gw3pD[DAT0NZjpYCOE] = (100018 - 18);
            {
                iewlV9YS = (186 - 186);
                while (iewlV9YS < t6kRHW) {
                    if (YcQOlDIjeJ5[iewlV9YS][DAT0NZjpYCOE] < m7qLx04gw3pD[DAT0NZjpYCOE])
                        m7qLx04gw3pD[DAT0NZjpYCOE] = YcQOlDIjeJ5[iewlV9YS][DAT0NZjpYCOE];
                    iewlV9YS++;
                }
            }
            DAT0NZjpYCOE++;
        }
    }
    {
        hmcaQf = (1271 - 873) - (1125 - 727);
        while (hmcaQf < t6kRHW) {
            gcX1LK0r = (162 - 162);
            while (gcX1LK0r < IqctWKRjHeI) {
                if (I48v6E[hmcaQf] == m7qLx04gw3pD[gcX1LK0r]) {
                    aeORoH = (788 - 788);
                    printf ("%d+%d", hmcaQf, gcX1LK0r);
                }
                gcX1LK0r++;
            }
            hmcaQf++;
        }
    }
    if (aeORoH)
        ;
    return (312 - 312);
}

