char *hk5OHS (char *latFCGesxP) {
    char *jEx857ma9;
    for (jEx857ma9 = latFCGesxP; *latFCGesxP != '\0'; latFCGesxP = latFCGesxP + 1)
        if (*latFCGesxP > *jEx857ma9)
            jEx857ma9 = latFCGesxP;
    return jEx857ma9;
}

void  Hj7ncay9 (char *rP0BCMD, char *sp) {
    for (; *rP0BCMD != *hk5OHS (rP0BCMD); rP0BCMD++)
        printf ("%c", *rP0BCMD);
    printf ("%c", *rP0BCMD);
    for (; *sp != '\0'; sp++)
        printf ("%c", *sp);
    for (rP0BCMD++; *rP0BCMD != '\0'; rP0BCMD++)
        printf ("%c", *rP0BCMD);
}

void  main () {
    char If02BMZL [10];
    char qmxBTcfek [3];
    char RRiYCNh9Ig [13];
    char *xA81OB = If02BMZL;
    char *h5WpqTuRt = qmxBTcfek;
    char *newstrp = RRiYCNh9Ig;
    for (; scanf ("%s %s", If02BMZL, qmxBTcfek) != EOF;)
        Hj7ncay9 (xA81OB, h5WpqTuRt);
}

