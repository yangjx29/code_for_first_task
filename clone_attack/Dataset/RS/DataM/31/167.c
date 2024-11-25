struct   student {
    char F9foXI6 [(918 - 908)];
    char WWx4m8X1o [(318 - 298)];
    char VpNcG9gwjWzh [(511 - 506)];
    char SBvFMoWsS [5];
    char D2e64clwNMQ [(783 - 773)];
    char kul4AN [(956 - 936)];
    struct   student *JYa3UOthDg;
};
struct   student *XHMlcpGgdL5T (void ) {
    struct   student *dcJVPq4;
    struct   student *HdGWnTea0B;
    dcJVPq4 = HdGWnTea0B = (struct   student *) malloc (LEN);
    scanf ("%s%s%s%s%s%s", HdGWnTea0B->F9foXI6, HdGWnTea0B->WWx4m8X1o, HdGWnTea0B->VpNcG9gwjWzh, HdGWnTea0B->SBvFMoWsS, &HdGWnTea0B->D2e64clwNMQ, HdGWnTea0B->kul4AN);
    HdGWnTea0B->JYa3UOthDg = NULL;
    for (; HdGWnTea0B->F9foXI6[(651 - 651)] != 'e';) {
        HdGWnTea0B = (struct   student *) malloc (LEN);
        scanf ("%s", HdGWnTea0B->F9foXI6);
        if (HdGWnTea0B->F9foXI6[(229 - 229)] != 'e') {
            scanf ("%s%s%s%s%s", HdGWnTea0B->WWx4m8X1o, &HdGWnTea0B->VpNcG9gwjWzh, &HdGWnTea0B->SBvFMoWsS, &HdGWnTea0B->D2e64clwNMQ, HdGWnTea0B->kul4AN);
            HdGWnTea0B->JYa3UOthDg = dcJVPq4;
            dcJVPq4 = HdGWnTea0B;
        };
    }
    return (dcJVPq4);
}

void  JbzvCmJK (struct   student *dcJVPq4) {
    struct   student *eGiAH9VXWgkp;
    eGiAH9VXWgkp = dcJVPq4;
    while (eGiAH9VXWgkp != NULL) {
        printf ("%s %s %s %s %s %s\n", eGiAH9VXWgkp->F9foXI6, eGiAH9VXWgkp->WWx4m8X1o, eGiAH9VXWgkp->VpNcG9gwjWzh, eGiAH9VXWgkp->SBvFMoWsS, eGiAH9VXWgkp->D2e64clwNMQ, eGiAH9VXWgkp->kul4AN);
        eGiAH9VXWgkp = eGiAH9VXWgkp->JYa3UOthDg;
    };
}

void  main () {
    struct   student *CRrGqBmd;
    JbzvCmJK (CRrGqBmd);
    CRrGqBmd = XHMlcpGgdL5T ();
}

