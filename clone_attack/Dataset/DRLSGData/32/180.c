void  main () {
    int CjuLDOpkJIV;
    int GmzKJgA7E;
    int f0wOl9sUTCe;
    char LCDPex [(834 - 814)] [(688 - 587)];
    int OpQmcXiV [(930 - 910)];
    int Nb5HPya [(838 - 818)];
    int gD0iMxmAf;
    int Ca8iLn;
    char sulQZyX7Wi [20] [101];
    char aKXlPJNT [20] [101];
    int duH0cfUb2S8;
    scanf ("%d", &duH0cfUb2S8);
    for (f0wOl9sUTCe = (337 - 337); duH0cfUb2S8 > f0wOl9sUTCe; f0wOl9sUTCe = f0wOl9sUTCe + (161 - 160)) {
        scanf ("%s", sulQZyX7Wi[f0wOl9sUTCe]);
        Nb5HPya[f0wOl9sUTCe] = strlen (sulQZyX7Wi[f0wOl9sUTCe]);
        scanf ("%s", LCDPex[f0wOl9sUTCe]);
        OpQmcXiV[f0wOl9sUTCe] = strlen (LCDPex[f0wOl9sUTCe]);
    }
    for (f0wOl9sUTCe = (991 - 991); f0wOl9sUTCe < duH0cfUb2S8; f0wOl9sUTCe = f0wOl9sUTCe + (958 - 957)) {
        sulQZyX7Wi[f0wOl9sUTCe][(620 - 520)] = '\0';
        CjuLDOpkJIV = (630 - 531) - Nb5HPya[f0wOl9sUTCe];
        for (GmzKJgA7E = Nb5HPya[f0wOl9sUTCe]; 0 < GmzKJgA7E; GmzKJgA7E = GmzKJgA7E -(459 - 458))
            sulQZyX7Wi[f0wOl9sUTCe][GmzKJgA7E +CjuLDOpkJIV] = sulQZyX7Wi[f0wOl9sUTCe][GmzKJgA7E -1];
        LCDPex[f0wOl9sUTCe][100] = '\0';
        CjuLDOpkJIV = (378 - 279) - OpQmcXiV[f0wOl9sUTCe];
        for (GmzKJgA7E = OpQmcXiV[f0wOl9sUTCe]; GmzKJgA7E > 0; GmzKJgA7E = GmzKJgA7E -1)
            LCDPex[f0wOl9sUTCe][GmzKJgA7E +CjuLDOpkJIV] = LCDPex[f0wOl9sUTCe][GmzKJgA7E -1];
        gD0iMxmAf = 0;
        for (GmzKJgA7E = (1063 - 964); GmzKJgA7E > (887 - 788) - OpQmcXiV[f0wOl9sUTCe]; GmzKJgA7E = GmzKJgA7E -1)
            if (sulQZyX7Wi[f0wOl9sUTCe][GmzKJgA7E] - gD0iMxmAf < LCDPex[f0wOl9sUTCe][GmzKJgA7E]) {
                aKXlPJNT[f0wOl9sUTCe][GmzKJgA7E] = sulQZyX7Wi[f0wOl9sUTCe][GmzKJgA7E] - LCDPex[f0wOl9sUTCe][GmzKJgA7E] + (433 - 423) - gD0iMxmAf + '0';
                gD0iMxmAf = 1;
            }
            else {
                aKXlPJNT[f0wOl9sUTCe][GmzKJgA7E] = sulQZyX7Wi[f0wOl9sUTCe][GmzKJgA7E] - LCDPex[f0wOl9sUTCe][GmzKJgA7E] - gD0iMxmAf + '0';
                gD0iMxmAf = 0;
            }
        aKXlPJNT[f0wOl9sUTCe][99 - OpQmcXiV[f0wOl9sUTCe]] = sulQZyX7Wi[f0wOl9sUTCe][99 - OpQmcXiV[f0wOl9sUTCe]] - gD0iMxmAf;
        for (GmzKJgA7E = (122 - 24) - OpQmcXiV[f0wOl9sUTCe]; GmzKJgA7E > 99 - Nb5HPya[f0wOl9sUTCe]; GmzKJgA7E--)
            aKXlPJNT[f0wOl9sUTCe][GmzKJgA7E] = sulQZyX7Wi[f0wOl9sUTCe][GmzKJgA7E];
        for (GmzKJgA7E = 99 - Nb5HPya[f0wOl9sUTCe] + 1; GmzKJgA7E < 100; GmzKJgA7E = GmzKJgA7E +1)
            printf ("%c", aKXlPJNT[f0wOl9sUTCe][GmzKJgA7E]);
    }
}

