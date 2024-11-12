int xUJfAp0NkCr (int OBbyMcm, int q) {
    int m80AmaIsOqvX;
    m80AmaIsOqvX = (789 - 789);
    if ((166 - 86) < OBbyMcm &&q >= (810 - 809))
        m80AmaIsOqvX = (519 - 518);
    return m80AmaIsOqvX;
}

int JmCdvt0e (int OBbyMcm, int q) {
    int m80AmaIsOqvX;
    m80AmaIsOqvX = (913 - 913);
    if ((715 - 630) < OBbyMcm &&(231 - 151) < q)
        m80AmaIsOqvX = (953 - 952);
    return m80AmaIsOqvX;
}

int sa5tGr (int OBbyMcm) {
    int m80AmaIsOqvX;
    m80AmaIsOqvX = 0;
    if (OBbyMcm > 90)
        m80AmaIsOqvX = 1;
    return m80AmaIsOqvX;
}

int q8L9Orm4l (int OBbyMcm, char BcnTEH) {
    int m80AmaIsOqvX = 0;
    if ((712 - 627) < OBbyMcm &&BcnTEH == 'Y')
        m80AmaIsOqvX = 1;
    return m80AmaIsOqvX;
}

int vE0raotROGC (int OBbyMcm, char BcnTEH) {
    int m80AmaIsOqvX;
    m80AmaIsOqvX = 0;
    if ((578 - 498) < OBbyMcm &&BcnTEH == 'Y')
        m80AmaIsOqvX = 1;
    return m80AmaIsOqvX;
}

void  main () {
    int S6JpefY1a;
    int wFae85xYgXEy;
    int TAGvpocVwh7;
    int YcanetZjD;
    int LalQxCU8kFc;
    struct   student {
        char azVnOGqCPoc8 [(87 - 67)];
        int pzOCLHQ;
        int cCyp5i7;
        char RezScEx;
        char q8L9Orm4l;
        int paper;
        int z9FGeHCsO;
    }
    *hoiP3Ft;
    int z9FGeHCsO;
    int HMgVBESyoO;
    int nospY3EHu;
    scanf ("%d", &YcanetZjD);
    hoiP3Ft = (struct   student *) malloc (YcanetZjD * sizeof (struct   student));
    z9FGeHCsO = 0;
    {
        LalQxCU8kFc = 0;
        while (YcanetZjD > LalQxCU8kFc) {
            scanf ("%s %d %d %c %c %d", &hoiP3Ft[LalQxCU8kFc].azVnOGqCPoc8, &(*(hoiP3Ft + LalQxCU8kFc)).pzOCLHQ, &(*(hoiP3Ft + LalQxCU8kFc)).cCyp5i7, &(*(hoiP3Ft + LalQxCU8kFc)).RezScEx, &(*(hoiP3Ft + LalQxCU8kFc)).q8L9Orm4l, &(*(hoiP3Ft + LalQxCU8kFc)).paper);
            (*(hoiP3Ft + LalQxCU8kFc)).z9FGeHCsO = 0;
            TAGvpocVwh7 = xUJfAp0NkCr ((*(hoiP3Ft + LalQxCU8kFc)).pzOCLHQ, (*(hoiP3Ft + LalQxCU8kFc)).paper);
            wFae85xYgXEy = JmCdvt0e ((*(hoiP3Ft + LalQxCU8kFc)).pzOCLHQ, (*(hoiP3Ft + LalQxCU8kFc)).cCyp5i7);
            S6JpefY1a = sa5tGr ((*(hoiP3Ft + LalQxCU8kFc)).pzOCLHQ);
            HMgVBESyoO = q8L9Orm4l ((*(hoiP3Ft + LalQxCU8kFc)).pzOCLHQ, (*(hoiP3Ft + LalQxCU8kFc)).q8L9Orm4l);
            nospY3EHu = vE0raotROGC ((*(hoiP3Ft + LalQxCU8kFc)).cCyp5i7, (*(hoiP3Ft + LalQxCU8kFc)).RezScEx);
            (*(hoiP3Ft + LalQxCU8kFc)).z9FGeHCsO = (8324 - 324) * TAGvpocVwh7 +4000 * wFae85xYgXEy + (2631 - 631) * S6JpefY1a +(1576 - 576) * HMgVBESyoO +(1039 - 189) * nospY3EHu;
            z9FGeHCsO = z9FGeHCsO + (*(hoiP3Ft + LalQxCU8kFc)).z9FGeHCsO;
            LalQxCU8kFc = LalQxCU8kFc +1;
        }
    }
    for (LalQxCU8kFc = 1; YcanetZjD > LalQxCU8kFc; LalQxCU8kFc = LalQxCU8kFc +1) {
        if ((*(hoiP3Ft + 0)).z9FGeHCsO < (*(hoiP3Ft + LalQxCU8kFc)).z9FGeHCsO)
            (*(hoiP3Ft + 0)) = (*(hoiP3Ft + LalQxCU8kFc));
    }
    printf ("%s\n%d\n%d", hoiP3Ft[0].azVnOGqCPoc8, (*(hoiP3Ft + 0)).z9FGeHCsO, z9FGeHCsO);
}

