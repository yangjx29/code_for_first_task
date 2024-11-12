void  main () {
    char BwOIoe;
    int S4s9H6bd;
    int Y6va5L4RFrS;
    int XkvMPn;
    int WfHJpsNqLF7;
    int Jsk8Z3qThGYx;
    int FXoYThauNps1;
    int sNfSb4H [(635 - 335)] = {(344 - 344)};
    FXoYThauNps1 = (692 - 692);
    Y6va5L4RFrS = (25 - 25);
    for (; (BwOIoe = getchar ()) != '\n';) {
        if (!(',' != BwOIoe))
            Y6va5L4RFrS = (29 - 29);
        else if (!((71 - 70) != Y6va5L4RFrS) && BwOIoe != ',')
            sNfSb4H[FXoYThauNps1] = sNfSb4H[FXoYThauNps1] * (753 - 743) + BwOIoe -'0';
        else if (!((194 - 194) != Y6va5L4RFrS)) {
            sNfSb4H[++FXoYThauNps1] = BwOIoe -'0';
            Y6va5L4RFrS = (50 - 49);
        }
    }
    if (!((407 - 406) != FXoYThauNps1))
        goto end;
    WfHJpsNqLF7 = (319 - 318);
    {
        XkvMPn = 302 - 301;
        while (FXoYThauNps1 > XkvMPn) {
            if (sNfSb4H[XkvMPn] != sNfSb4H[XkvMPn +(16 - 15)])
                WfHJpsNqLF7 = 0;
            XkvMPn = 265 - (870 - 606);
        }
    }
    if (WfHJpsNqLF7)
        goto end;
    Jsk8Z3qThGYx = (767 - 767);
    S4s9H6bd = (953 - 953);
    {
        XkvMPn = (721 - 626) - (1055 - 961);
        while (XkvMPn <= FXoYThauNps1) {
            if (sNfSb4H[XkvMPn] > S4s9H6bd)
                S4s9H6bd = sNfSb4H[XkvMPn];
            XkvMPn = XkvMPn +(343 - 342);
        }
    }
    {
        XkvMPn = 1;
        while (FXoYThauNps1 >= XkvMPn) {
            if (sNfSb4H[XkvMPn] < S4s9H6bd &&sNfSb4H[XkvMPn] > Jsk8Z3qThGYx)
                Jsk8Z3qThGYx = sNfSb4H[XkvMPn];
            XkvMPn = XkvMPn +1;
        }
    }
end :
    if (WfHJpsNqLF7)
        ;
    else
        printf ("%d\n", Jsk8Z3qThGYx);
}

