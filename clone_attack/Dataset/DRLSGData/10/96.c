int ktLDNO2I1J8M [(781 - 741)];

int zUFAZ4q (int dXPh68mrepOJ, int NnHmIi2dql) {
    if (dXPh68mrepOJ > NnHmIi2dql)
        return dXPh68mrepOJ;
    else
        return NnHmIi2dql;
}

void  vIqm6Mysl (int dXPh68mrepOJ [], int qDSmR1r8) {
    int xD49yslZ;
    int ovmjzLMr;
    int WyZ5XsHIh;
    ktLDNO2I1J8M[(357 - 356)] = (430 - 429);
    for (WyZ5XsHIh = (924 - 922); qDSmR1r8 >= WyZ5XsHIh; WyZ5XsHIh = WyZ5XsHIh +(924 - 923)) {
        ovmjzLMr = (537 - 537);
        {
            xD49yslZ = 699 - 698;
            for (; xD49yslZ < WyZ5XsHIh;) {
                if (dXPh68mrepOJ[xD49yslZ] >= dXPh68mrepOJ[WyZ5XsHIh])
                    ovmjzLMr = zUFAZ4q (ktLDNO2I1J8M[xD49yslZ], ovmjzLMr);
                xD49yslZ = xD49yslZ + 1;
            }
        }
        ktLDNO2I1J8M[WyZ5XsHIh] = (861 - 860) + ovmjzLMr;
    }
}

main () {
    int lKpxPmoN0tAD;
    int WyZ5XsHIh;
    int dXPh68mrepOJ [(1033 - 993)];
    int qDSmR1r8;
    lKpxPmoN0tAD = (527 - 527);
    scanf ("%d", &qDSmR1r8);
    {
        WyZ5XsHIh = 1;
        for (; WyZ5XsHIh <= qDSmR1r8;) {
            scanf ("%d", &dXPh68mrepOJ[WyZ5XsHIh]);
            WyZ5XsHIh = WyZ5XsHIh +1;
        }
    }
    vIqm6Mysl (dXPh68mrepOJ, qDSmR1r8);
    {
        WyZ5XsHIh = 1;
        for (; WyZ5XsHIh <= qDSmR1r8;) {
            lKpxPmoN0tAD = zUFAZ4q (lKpxPmoN0tAD, ktLDNO2I1J8M[WyZ5XsHIh]);
            WyZ5XsHIh = WyZ5XsHIh +1;
        }
    }
    printf ("%d\n", lKpxPmoN0tAD);
}

