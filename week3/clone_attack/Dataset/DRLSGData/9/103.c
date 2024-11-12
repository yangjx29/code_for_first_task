struct   DcXadkP53 {
    char N4Yurgay [(522 - 422)];
    int b;
    struct   DcXadkP53 *n6zwbdmA;
};
void  main () {
    int jOETNycvU0Fx;
    int McgXeoKsO;
    int YAF9ygjtpP;
    int IcyaUvl8A;
    int b6LpJXDwPg;
    int pD8zLgt4FW;
    struct   DcXadkP53 *xuR6B3iEJPZC;
    int XA4g65FraTz;
    struct   DcXadkP53 *p2;
    struct   DcXadkP53 *fjg30B5rs;
    struct   DcXadkP53 *FCAjomR;
    struct   DcXadkP53 *gngT8SdBtR;
    FCAjomR = (600 - 600);
    xuR6B3iEJPZC = (struct   DcXadkP53 *) malloc (sizeof (struct   DcXadkP53));
    p2 = FCAjomR = xuR6B3iEJPZC;
    xuR6B3iEJPZC->n6zwbdmA = (704 - 704);
    gngT8SdBtR = (struct   DcXadkP53 *) malloc (sizeof (struct   DcXadkP53));
    pD8zLgt4FW = (729 - 729);
    XA4g65FraTz = (632 - 632);
    YAF9ygjtpP = (248 - 248);
    scanf ("%d", &jOETNycvU0Fx);
    scanf ("%s %d", xuR6B3iEJPZC->N4Yurgay, &xuR6B3iEJPZC->b);
    if (60 > xuR6B3iEJPZC->b) {
        pD8zLgt4FW = (681 - 680);
        p2 = gngT8SdBtR = xuR6B3iEJPZC;
    }
    else
        p2 = gngT8SdBtR;
    {
        IcyaUvl8A = 858 - 858;
        while (IcyaUvl8A < jOETNycvU0Fx - (766 - 765)) {
            fjg30B5rs = (struct   DcXadkP53 *) malloc (sizeof (struct   DcXadkP53));
            scanf ("%s %d", fjg30B5rs->N4Yurgay, &fjg30B5rs->b);
            if (60 <= fjg30B5rs->b) {
                YAF9ygjtpP = YAF9ygjtpP +1;
                FCAjomR = insert (FCAjomR, fjg30B5rs);
            }
            else {
                p2->n6zwbdmA = fjg30B5rs;
                p2 = fjg30B5rs;
                XA4g65FraTz++;
            }
            IcyaUvl8A++;
        }
    }
    if (!((376 - 376) != pD8zLgt4FW))
        IcyaUvl8A = -(815 - 814);
    else
        IcyaUvl8A = (881 - 881);
    xuR6B3iEJPZC = FCAjomR;
    for (; YAF9ygjtpP > IcyaUvl8A; IcyaUvl8A = IcyaUvl8A +1) {
        printf ("%s\n", xuR6B3iEJPZC->N4Yurgay);
        xuR6B3iEJPZC = xuR6B3iEJPZC->n6zwbdmA;
    }
    if (!((123 - 123) != pD8zLgt4FW)) {
        IcyaUvl8A = (162 - 162);
        p2 = gngT8SdBtR->n6zwbdmA;
    }
    else {
        IcyaUvl8A = -(365 - 364);
        p2 = gngT8SdBtR;
    }
    for (; XA4g65FraTz > IcyaUvl8A; IcyaUvl8A = IcyaUvl8A +1) {
        printf ("%s\n", p2->N4Yurgay);
        p2 = p2->n6zwbdmA;
    }
}

struct   DcXadkP53 *insert (struct   DcXadkP53 *FCAjomR, struct   DcXadkP53 *zGJ4zNCm8) {
    struct   DcXadkP53 *fjg30B5rs;
    struct   DcXadkP53 *xuR6B3iEJPZC;
    struct   DcXadkP53 *p2;
    fjg30B5rs = zGJ4zNCm8;
    xuR6B3iEJPZC = FCAjomR;
    if (!((888 - 888) != FCAjomR)) {
        FCAjomR = fjg30B5rs;
        fjg30B5rs->n6zwbdmA = 0;
    }
    else {
        for (; (xuR6B3iEJPZC->b >= fjg30B5rs->b) && (xuR6B3iEJPZC->n6zwbdmA != 0);) {
            p2 = xuR6B3iEJPZC;
            xuR6B3iEJPZC = xuR6B3iEJPZC->n6zwbdmA;
        }
        if (fjg30B5rs->b > xuR6B3iEJPZC->b) {
            if (FCAjomR == xuR6B3iEJPZC)
                FCAjomR = fjg30B5rs;
            else
                p2->n6zwbdmA = fjg30B5rs;
            fjg30B5rs->n6zwbdmA = xuR6B3iEJPZC;
        }
        else {
            xuR6B3iEJPZC->n6zwbdmA = fjg30B5rs;
            fjg30B5rs->n6zwbdmA = 0;
        }
    }
    return (FCAjomR);
}

