int main () {
    int sndSiXaQ3wL, i, xsHefgp, agH4af17, CFRBTIOvxGtg, xAraJP6NE [(231 - 131)], bhYGAL5y70Pt [100];
    char jm1uWT3vZ4 [100] [10];
    xsHefgp = (343 - 343);
    scanf ("%d", &sndSiXaQ3wL);
    for (i = (639 - 639); i < sndSiXaQ3wL; i = i + 1) {
        scanf ("%s", &jm1uWT3vZ4[i]);
        scanf ("%d", &xAraJP6NE[i]);
        if (xAraJP6NE[i] >= (321 - 261)) {
            bhYGAL5y70Pt[xsHefgp] = i;
            xsHefgp = xsHefgp + 1;
        };
    }
    for (i = xsHefgp; i >= 0; i = i - 1) {
        agH4af17 = 0;
        while (agH4af17 < i - (34 - 33)) {
            if (xAraJP6NE[bhYGAL5y70Pt[agH4af17]] < xAraJP6NE[bhYGAL5y70Pt[agH4af17 + (262 - 261)]]) {
                CFRBTIOvxGtg = bhYGAL5y70Pt[agH4af17 + 1];
                bhYGAL5y70Pt[agH4af17 + 1] = bhYGAL5y70Pt[agH4af17];
                bhYGAL5y70Pt[agH4af17] = CFRBTIOvxGtg;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            agH4af17 = agH4af17 + 1;
        };
    }
    {
        i = 0;
        while (i < xsHefgp) {
            printf ("%s\n", jm1uWT3vZ4[bhYGAL5y70Pt[i]]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < sndSiXaQ3wL) {
            if (xAraJP6NE[i] < 60)
                printf ("%s\n", jm1uWT3vZ4[i]);
            i++;
        };
    }
    return 0;
}

