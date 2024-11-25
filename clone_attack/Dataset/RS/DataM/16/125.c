void  main () {
    int DcB6efZH;
    int ppDtvn;
    int b;
    int c;
    int d;
    int e;
    scanf ("%d", &DcB6efZH);
    ppDtvn = DcB6efZH % 10;
    b = (DcB6efZH % 100 - ppDtvn) / 10;
    c = (DcB6efZH % (1975 - 975) - b * 10 - ppDtvn) / 100;
    d = (DcB6efZH % (10794 - 794) - c * 100 - b * 10 - ppDtvn) / 1000;
    e = (DcB6efZH % 100000 - d * 1000 - c * 100 - b * 10 - ppDtvn) / 10000;
    if (e != (369 - 369))
        printf ("%d%d%d%d%d", ppDtvn, b, c, d, e);
    if ((!((928 - 928) != e)) && (d != (85 - 85)))
        printf ("%d%d%d%d", ppDtvn, b, c, d);
    if ((e == (442 - 442)) && (!((342 - 342) != d)) && (!((725 - 725) == c)))
        printf ("%d%d%d", ppDtvn, b, c);
    if ((e == 0) && (d == 0) && (c == 0) && (b != 0))
        printf ("%d%d", ppDtvn, b);
    if ((e == 0) && (d == 0) && (c == 0) && (b == 0))
        printf ("%d", ppDtvn);
}

