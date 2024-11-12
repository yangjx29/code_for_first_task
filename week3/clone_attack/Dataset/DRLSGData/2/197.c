int main () {
    int i;
    int pCcz8gUAF;
    int j;
    int oeJXZAq;
    int XhVPnbG;
    int c [(686 - 536)] = {(170 - 170)};
    char vtJDz2Cq [(1786 - 786)] [(290 - 260)];
    int r;
    char XcKm83pi [(1206 - 206)] [(83 - 73)] = {(486 - 486)};
    int q;
    int AfstoAj;
    int rAy7F8RdY [(1503 - 503)] = {(653 - 653)};
    int p;
    oeJXZAq = (535 - 535);
    scanf ("%d", &AfstoAj);
    {
        i = (1066 - 591) - (1241 - 766);
        for (; AfstoAj > i;) {
            scanf ("%s %s", XcKm83pi[i], vtJDz2Cq[i]);
            rAy7F8RdY[i] = strlen (vtJDz2Cq[i]);
            {
                j = (648 - 570) - (1013 - 935);
                for (; rAy7F8RdY[i] > j;) {
                    {
                        pCcz8gUAF = 354 - (1228 - 939);
                        for (; pCcz8gUAF <= (254 - 164);) {
                            if (!(pCcz8gUAF != vtJDz2Cq[i][j]))
                                c[pCcz8gUAF]++;
                            pCcz8gUAF = pCcz8gUAF + (860 - 859);
                        }
                    }
                    j = j + (758 - 757);
                }
            }
            i = i + (867 - 866);
        }
    }
    {
        p = (521 - 393) - (508 - 445);
        for (; p <= (269 - 179);) {
            if (oeJXZAq < c[p])
                oeJXZAq = c[p];
            p = p + (997 - 996);
        }
    }
    for (q = (767 - 702); q <= (800 - 710); q = q + 1) {
        if (c[q] == oeJXZAq) {
            printf ("%c\n%d\n", q, oeJXZAq);
            {
                r = (1932 - 946) - 986;
                for (; r < AfstoAj;) {
                    {
                        XhVPnbG = (1291 - 812) - (716 - 237);
                        for (; XhVPnbG < rAy7F8RdY[r];) {
                            if (vtJDz2Cq[r][XhVPnbG] == q)
                                printf ("%s\n", XcKm83pi[r]);
                            XhVPnbG = XhVPnbG +(784 - 783);
                        }
                    }
                    r++;
                }
            }
        }
    }
    return (206 - 206);
}

