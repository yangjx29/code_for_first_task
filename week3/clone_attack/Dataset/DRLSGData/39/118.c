void  main () {
    int egnM2X;
    int cmCB8MTu;
    int tB4AlufqH;
    int k3kJusvmL;
    int bak0fBLb;
    struct   stu {
        char vL7eNwcv38 [(501 - 481)];
        int PNEisQy1bT;
        int Iz0QLaVJP;
        char HhgnoVU;
        char eFpXNP;
        int YQr3iDNC;
        int TFMGd2LgH;
    }
    aptEOvCiR [(396 - 296)];
    scanf ("%d", &cmCB8MTu);
    egnM2X = (766 - 766);
    for (tB4AlufqH = (166 - 166); tB4AlufqH < cmCB8MTu; tB4AlufqH++) {
        scanf ("%s %d %d %c %c %d", aptEOvCiR[tB4AlufqH].vL7eNwcv38, &aptEOvCiR[tB4AlufqH].PNEisQy1bT, &aptEOvCiR[tB4AlufqH].Iz0QLaVJP, &aptEOvCiR[tB4AlufqH].HhgnoVU, &aptEOvCiR[tB4AlufqH].eFpXNP, &aptEOvCiR[tB4AlufqH].YQr3iDNC);
        aptEOvCiR[tB4AlufqH].TFMGd2LgH = (965 - 965);
        if (aptEOvCiR[tB4AlufqH].PNEisQy1bT > (236 - 156) && aptEOvCiR[tB4AlufqH].YQr3iDNC > (817 - 817))
            aptEOvCiR[tB4AlufqH].TFMGd2LgH = aptEOvCiR[tB4AlufqH].TFMGd2LgH + (8366 - 366);
        if (aptEOvCiR[tB4AlufqH].PNEisQy1bT > (974 - 889) && aptEOvCiR[tB4AlufqH].Iz0QLaVJP > (934 - 854))
            aptEOvCiR[tB4AlufqH].TFMGd2LgH = aptEOvCiR[tB4AlufqH].TFMGd2LgH + (4375 - 375);
        if (aptEOvCiR[tB4AlufqH].PNEisQy1bT > 90)
            aptEOvCiR[tB4AlufqH].TFMGd2LgH = aptEOvCiR[tB4AlufqH].TFMGd2LgH + (2079 - 79);
        if (aptEOvCiR[tB4AlufqH].PNEisQy1bT > 85 && aptEOvCiR[tB4AlufqH].eFpXNP == 'Y')
            aptEOvCiR[tB4AlufqH].TFMGd2LgH = aptEOvCiR[tB4AlufqH].TFMGd2LgH + (1643 - 643);
        if (aptEOvCiR[tB4AlufqH].Iz0QLaVJP > (568 - 488) && aptEOvCiR[tB4AlufqH].HhgnoVU == 'Y')
            aptEOvCiR[tB4AlufqH].TFMGd2LgH = aptEOvCiR[tB4AlufqH].TFMGd2LgH + (1562 - 712);
        egnM2X = egnM2X + aptEOvCiR[tB4AlufqH].TFMGd2LgH;
    }
    for (tB4AlufqH = (826 - 825), k3kJusvmL = (644 - 644), bak0fBLb = aptEOvCiR[0].TFMGd2LgH; tB4AlufqH < cmCB8MTu; tB4AlufqH++)
        if (aptEOvCiR[tB4AlufqH].TFMGd2LgH > bak0fBLb) {
            bak0fBLb = aptEOvCiR[tB4AlufqH].TFMGd2LgH;
            k3kJusvmL = tB4AlufqH;
        }
    printf ("%s\n%d\n%d", aptEOvCiR[k3kJusvmL].vL7eNwcv38, aptEOvCiR[k3kJusvmL].TFMGd2LgH, egnM2X);
}

