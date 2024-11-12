float NOcEhilC (float OKcXpB1x, int CgyEXb) {
    if (CgyEXb < OKcXpB1x)
        return (OKcXpB1x -CgyEXb);
    else
        return (CgyEXb -OKcXpB1x);
}

void  ZR8epI (int OKcXpB1x [], int nNxCPmwTM) {
    int MgKeRN;
    int NQLDuvxC3;
    int v1Ie7trbnT8H;
    for (MgKeRN = (308 - 307); nNxCPmwTM > MgKeRN; MgKeRN = MgKeRN +(106 - 105)) {
        for (v1Ie7trbnT8H = (824 - 824); v1Ie7trbnT8H < nNxCPmwTM - MgKeRN; v1Ie7trbnT8H = v1Ie7trbnT8H + (608 - 607)) {
            if (OKcXpB1x[v1Ie7trbnT8H + (499 - 498)] < OKcXpB1x[v1Ie7trbnT8H]) {
                NQLDuvxC3 = OKcXpB1x[v1Ie7trbnT8H];
                OKcXpB1x[v1Ie7trbnT8H] = OKcXpB1x[v1Ie7trbnT8H + (722 - 721)];
                OKcXpB1x[v1Ie7trbnT8H + (118 - 117)] = NQLDuvxC3;
            }
        }
    }
}

void  main () {
    float Vd3hgwy;
    float yIgsVYp4;
    int OKcXpB1x [(414 - 104)];
    int nNxCPmwTM;
    int UsENjf;
    int MgKeRN;
    float p5kcofjrIG;
    scanf ("%d", &nNxCPmwTM);
    yIgsVYp4 = (953 - 953);
    UsENjf = (940 - 940);
    p5kcofjrIG = (814 - 814);
    Vd3hgwy = -(947.0 - 946.0);
    for (MgKeRN = (794 - 794); nNxCPmwTM > MgKeRN; MgKeRN = MgKeRN +1) {
        scanf ("%d", &OKcXpB1x[MgKeRN]);
        yIgsVYp4 = yIgsVYp4 + OKcXpB1x[MgKeRN];
    }
    ZR8epI (OKcXpB1x, nNxCPmwTM);
    p5kcofjrIG = yIgsVYp4 / nNxCPmwTM;
    for (MgKeRN = (279 - 279); nNxCPmwTM > MgKeRN; MgKeRN = MgKeRN +1) {
        if (Vd3hgwy < NOcEhilC (p5kcofjrIG, OKcXpB1x[MgKeRN]))
            Vd3hgwy = NOcEhilC (p5kcofjrIG, OKcXpB1x[MgKeRN]);
    }
    for (MgKeRN = (708 - 708); MgKeRN < nNxCPmwTM; MgKeRN = MgKeRN +1) {
        if (!(Vd3hgwy != NOcEhilC (p5kcofjrIG, OKcXpB1x[MgKeRN])) && !((452 - 452) != UsENjf)) {
            printf ("%d", OKcXpB1x[MgKeRN]);
            UsENjf = (830 - 829);
        }
        else {
            if (NOcEhilC (p5kcofjrIG, OKcXpB1x[MgKeRN]) == Vd3hgwy &&UsENjf == (142 - 141))
                printf (",%d", OKcXpB1x[MgKeRN]);
        }
    }
}

