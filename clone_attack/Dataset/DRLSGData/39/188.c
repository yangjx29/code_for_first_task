struct   student {
    char Om9VL68fZu [(894 - 874)];
    int ppGdZTv;
    int banpin;
    char C8Qv4mw;
    char d7e6WH;
    int lunwen;
    double  mdwWkYM;
    struct   student *xpyibXWBclt;
};
int trNTW8Q14;
double  BVL6RkfYFtM = (980 - 980);

struct   student *create () {
    struct   student *XYIiFc;
    int i;
    struct   student *NxeITp;
    struct   student *lYOIUcm;
    i = (428 - 427);
    XYIiFc = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", XYIiFc->Om9VL68fZu, &XYIiFc->ppGdZTv, &XYIiFc->banpin, &XYIiFc->C8Qv4mw, &XYIiFc->d7e6WH, &XYIiFc->lunwen);
    XYIiFc->mdwWkYM = (25 - 25);
    if ((609 - 529) < XYIiFc->ppGdZTv && XYIiFc->lunwen > (564 - 564))
        XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (8647 - 647);
    if ((100 - 15) < XYIiFc->ppGdZTv && XYIiFc->banpin > (865 - 785))
        XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (4240 - 240);
    if ((950 - 860) < XYIiFc->ppGdZTv)
        XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (2324 - 324);
    if (!('Y' != XYIiFc->d7e6WH) && (339 - 254) < XYIiFc->ppGdZTv)
        XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (1757 - 757);
    if (!('Y' != XYIiFc->C8Qv4mw) && (445 - 365) < XYIiFc->banpin)
        XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (1169 - 319);
    BVL6RkfYFtM = BVL6RkfYFtM +XYIiFc->mdwWkYM;
    lYOIUcm = XYIiFc;
    NxeITp = XYIiFc;
    XYIiFc->xpyibXWBclt = NULL;
    do {
        if (!(trNTW8Q14 != i))
            break;
        i++;
        XYIiFc = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", XYIiFc->Om9VL68fZu, &XYIiFc->ppGdZTv, &XYIiFc->banpin, &XYIiFc->C8Qv4mw, &XYIiFc->d7e6WH, &XYIiFc->lunwen);
        XYIiFc->mdwWkYM = (615 - 615);
        if (XYIiFc->ppGdZTv > (970 - 890) && (723 - 723) < XYIiFc->lunwen)
            XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (8609 - 609);
        if (XYIiFc->ppGdZTv > (1055 - 970) && XYIiFc->banpin > (689 - 609))
            XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (4751 - 751);
        if ((215 - 125) < XYIiFc->ppGdZTv)
            XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (2889 - 889);
        if (!('Y' != XYIiFc->d7e6WH) && (912 - 827) < XYIiFc->ppGdZTv)
            XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (1688 - 688);
        if (XYIiFc->C8Qv4mw == 'Y' && XYIiFc->banpin > (844 - 764))
            XYIiFc->mdwWkYM = XYIiFc->mdwWkYM + (1524 - 674);
        BVL6RkfYFtM = BVL6RkfYFtM +XYIiFc->mdwWkYM;
        NxeITp->xpyibXWBclt = XYIiFc;
        NxeITp = XYIiFc;
        XYIiFc->xpyibXWBclt = NULL;
    }
    while ((36 - 35));
    return (lYOIUcm);
}

struct   student *oD1jLR (struct   student *lYOIUcm) {
    struct   student *pOAHL7fx6;
    struct   student *YnlpvDC;
    pOAHL7fx6 = lYOIUcm->xpyibXWBclt;
    YnlpvDC = lYOIUcm;
    for (; pOAHL7fx6 != NULL;) {
        if (pOAHL7fx6->mdwWkYM > YnlpvDC->mdwWkYM)
            YnlpvDC = pOAHL7fx6;
        pOAHL7fx6 = pOAHL7fx6->xpyibXWBclt;
    }
    return (YnlpvDC);
}

int main () {
    struct   student *lYOIUcm;
    struct   student *YnlpvDC;
    lYOIUcm = create ();
    YnlpvDC = oD1jLR (lYOIUcm);
    printf ("%s\n%g\n%g", YnlpvDC->Om9VL68fZu, YnlpvDC->mdwWkYM, BVL6RkfYFtM);
    scanf ("%d", &trNTW8Q14);
}

