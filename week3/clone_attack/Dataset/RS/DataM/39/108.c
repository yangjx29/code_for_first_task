struct   student {
    char lkylGKQ [21], ZIdHpW8, GPcCAsqV3;
    int nDf82iRt6dUG, GqsUogHV, if1snZeUia, X21n9ZjWo;
};
struct   student Rd8NtGVEj [100], bzqnNDSmX;

void  main () {
    int HOxoeTHw;
    int QWyawKnE;
    int Dk5sMCQf;
    int zWSxe1;
    HOxoeTHw = 0;
    scanf ("%d", &QWyawKnE);
    for (Dk5sMCQf = 0; QWyawKnE > Dk5sMCQf; Dk5sMCQf = Dk5sMCQf +1) {
        scanf ("%s %d %d %c %c %d", Rd8NtGVEj[Dk5sMCQf].lkylGKQ, &Rd8NtGVEj[Dk5sMCQf].nDf82iRt6dUG, &Rd8NtGVEj[Dk5sMCQf].GqsUogHV, &Rd8NtGVEj[Dk5sMCQf].ZIdHpW8, &Rd8NtGVEj[Dk5sMCQf].GPcCAsqV3, &Rd8NtGVEj[Dk5sMCQf].if1snZeUia);
    }
    {
        Dk5sMCQf = 0;
        while (QWyawKnE > Dk5sMCQf) {
            Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo = 0;
            if ((390 - 310) < Rd8NtGVEj[Dk5sMCQf].GqsUogHV && Rd8NtGVEj[Dk5sMCQf].ZIdHpW8 == 'Y') {
                Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo = Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo + 850;
            }
            if (Rd8NtGVEj[Dk5sMCQf].nDf82iRt6dUG > (725 - 640) && Rd8NtGVEj[Dk5sMCQf].GPcCAsqV3 == 'Y') {
                Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo = Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo + 1000;
            }
            if (Rd8NtGVEj[Dk5sMCQf].nDf82iRt6dUG > 90) {
                Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo = Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo + 2000;
            }
            if (Rd8NtGVEj[Dk5sMCQf].nDf82iRt6dUG > (211 - 126) && Rd8NtGVEj[Dk5sMCQf].GqsUogHV > 80) {
                Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo = Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo + 4000;
            }
            if (Rd8NtGVEj[Dk5sMCQf].nDf82iRt6dUG > 80 && Rd8NtGVEj[Dk5sMCQf].if1snZeUia >= (299 - 298)) {
                Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo = Rd8NtGVEj[Dk5sMCQf].X21n9ZjWo + (8721 - 721);
            }
            Dk5sMCQf = Dk5sMCQf +1;
        };
    }
    {
        zWSxe1 = 1;
        while (zWSxe1 < QWyawKnE) {
            if (Rd8NtGVEj[0].X21n9ZjWo < Rd8NtGVEj[zWSxe1].X21n9ZjWo) {
                bzqnNDSmX = Rd8NtGVEj[0];
                Rd8NtGVEj[0] = Rd8NtGVEj[zWSxe1];
                Rd8NtGVEj[zWSxe1] = bzqnNDSmX;
            }
            zWSxe1 = zWSxe1 + 1;
        };
    }
    for (zWSxe1 = 0; zWSxe1 < QWyawKnE; zWSxe1 = zWSxe1 + 1)
        HOxoeTHw = HOxoeTHw +Rd8NtGVEj[zWSxe1].X21n9ZjWo;
    printf ("\n%s\n%d\n%d", Rd8NtGVEj[0].lkylGKQ, Rd8NtGVEj[0].X21n9ZjWo, HOxoeTHw);
}

