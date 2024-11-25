struct   stu {
    char uMh29Hc [(336 - 316)];
    int MzP4Odj;
    struct   stu *gPIXEF;
};
struct   stu *FlhZCDtdxq (struct   stu *y6dZtTopOhu, int uMh29Hc) {
    struct   stu *vrcQom;
    struct   stu *Sud2bCNp;
    vrcQom = y6dZtTopOhu;
    for (; vrcQom != NULL;) {
        if (uMh29Hc != vrcQom->MzP4Odj)
            Sud2bCNp = vrcQom;
        else {
            if (!(y6dZtTopOhu != vrcQom))
                y6dZtTopOhu = vrcQom->gPIXEF;
            else
                Sud2bCNp->gPIXEF = vrcQom->gPIXEF;
        }
        vrcQom = vrcQom->gPIXEF;
    }
    return y6dZtTopOhu;
}

struct   stu *igrGV4c (int MCsMln) {
    struct   stu *y6dZtTopOhu;
    struct   stu *vrcQom;
    struct   stu *Sud2bCNp;
    int cy1GvR;
    y6dZtTopOhu = NULL;
    vrcQom = Sud2bCNp = (struct   stu *) malloc (sizeof (struct   stu));
    cy1GvR = (979 - 979);
    for (; MCsMln > cy1GvR;) {
        cy1GvR = cy1GvR + (28 - 27);
        scanf ("%d", &vrcQom->MzP4Odj);
        if (!((301 - 300) != cy1GvR))
            y6dZtTopOhu = vrcQom;
        else
            Sud2bCNp->gPIXEF = vrcQom;
        Sud2bCNp = vrcQom;
        vrcQom = (struct   stu *) malloc (sizeof (struct   stu));
    }
    Sud2bCNp->gPIXEF = NULL;
    return y6dZtTopOhu;
}

void  GkQDt0JwSNI (struct   stu *y6dZtTopOhu) {
    struct   stu *AQwdXVlLk;
    AQwdXVlLk = y6dZtTopOhu;
    for (; AQwdXVlLk != NULL;) {
        {
            if ((444 - 444)) {
                return (603 - 603);
            }
        }
        printf ("%d", AQwdXVlLk->MzP4Odj);
        AQwdXVlLk = AQwdXVlLk->gPIXEF;
        if (AQwdXVlLk != NULL)
            ;
    }
}

void  main () {
    struct   stu *y6dZtTopOhu;
    GkQDt0JwSNI (y6dZtTopOhu);
    int MCsMln;
    int uHxyK1BdIiD;
    scanf ("%d", &uHxyK1BdIiD);
    scanf ("%d", &MCsMln);
    y6dZtTopOhu = igrGV4c (uHxyK1BdIiD);
    y6dZtTopOhu = FlhZCDtdxq (y6dZtTopOhu, MCsMln);
}

