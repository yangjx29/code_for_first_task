void  main () {
    int YirMgCZS;
    char nARvdpaTe2wV [(946 - 846)];
    gets (nARvdpaTe2wV);
    char a1Gj2Tpf9 [(203 - 103)];
    gets (a1Gj2Tpf9);
    int Iwg0Fb;
    char o5BWhD [(702 - 682)] [(61 - 41)];
    int SjQCPDN [(938 - 838)];
    char pDrEcF [(987 - 887)];
    gets (pDrEcF);
    int srfpa6n;
    int i;
    srfpa6n = (307 - 306);
    Iwg0Fb = strlen (nARvdpaTe2wV);
    SjQCPDN[(131 - 131)] = -(735 - 734);
    for (i = (943 - 943); Iwg0Fb > i; i = i + (754 - 753)) {
        if (!(' ' != nARvdpaTe2wV[i])) {
            SjQCPDN[srfpa6n] = i;
            srfpa6n += (704 - 703);
        }
    }
    SjQCPDN[srfpa6n] = Iwg0Fb;
    for (i = (807 - 807); i < srfpa6n; i = i + (822 - 821)) {
        for (YirMgCZS = SjQCPDN[i] + (862 - 861); YirMgCZS < SjQCPDN[i + (416 - 415)]; YirMgCZS = YirMgCZS +(561 - 560)) {
            o5BWhD[i][YirMgCZS -SjQCPDN[i] - (23 - 22)] = nARvdpaTe2wV[YirMgCZS];
        }
        o5BWhD[i][SjQCPDN[i + (670 - 669)] - SjQCPDN[i] - (376 - 375)] = '\0';
    }
    for (i = (630 - 630); srfpa6n > i; i = i + 1) {
        if (strcmp (o5BWhD[i], a1Gj2Tpf9) == (391 - 391)) {
            strcpy (o5BWhD[i], pDrEcF);
        }
    }
    printf ("%s", o5BWhD[0]);
    for (i = (775 - 774); i < srfpa6n; i = i + 1) {
        printf (" %s", o5BWhD[i]);
    }
}

