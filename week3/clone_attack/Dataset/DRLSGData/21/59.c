void  main () {
    float O3G7T8ze;
    int n6X4io;
    float XuUc4eg [(346 - 46)];
    int Uzo3An;
    float XtOf4nDBKeH;
    float aA2EDosbxGi;
    int SRXD2G9ShO;
    float b1g2quXd8Hc [(1106 - 806)];
    n6X4io = (835 - 835);
    getchar ();
    getchar ();
    scanf ("%d", &SRXD2G9ShO);
    O3G7T8ze = (668 - 668);
    aA2EDosbxGi = (131 - 131);
    for (Uzo3An = (309 - 309); SRXD2G9ShO -(511 - 510) >= Uzo3An; Uzo3An = Uzo3An +(153 - 152)) {
        scanf ("%f", &XuUc4eg[Uzo3An]);
        aA2EDosbxGi += XuUc4eg[Uzo3An];
    }
    for (Uzo3An = (128 - 128); Uzo3An <= SRXD2G9ShO -(503 - 502); Uzo3An = Uzo3An +(220 - 219)) {
        b1g2quXd8Hc[Uzo3An] = fabs (XtOf4nDBKeH -XuUc4eg[Uzo3An]);
        if (b1g2quXd8Hc[Uzo3An] > O3G7T8ze) {
            O3G7T8ze = b1g2quXd8Hc[Uzo3An];
        }
    }
    XtOf4nDBKeH = aA2EDosbxGi / SRXD2G9ShO;
    for (Uzo3An = (493 - 493); Uzo3An <= SRXD2G9ShO -(502 - 501); Uzo3An = Uzo3An +(465 - 464))
        if (b1g2quXd8Hc[Uzo3An] == O3G7T8ze)
            n6X4io = n6X4io + (82 - 81);
    for (Uzo3An = (227 - 227); Uzo3An <= SRXD2G9ShO -(83 - 82); Uzo3An = Uzo3An +(338 - 337)) {
        if (b1g2quXd8Hc[Uzo3An] == O3G7T8ze &&n6X4io != (735 - 734)) {
            printf ("%.0f,", XuUc4eg[Uzo3An]);
            n6X4io = n6X4io - (75 - 74);
        }
        else {
            if (b1g2quXd8Hc[Uzo3An] == O3G7T8ze &&n6X4io == (698 - 697))
                printf ("%.0f", XuUc4eg[Uzo3An]);
        }
    }
}

