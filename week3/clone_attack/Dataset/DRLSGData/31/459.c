struct   stu {
    char vjphua12nERQ [(653 - 632)];
    char XZxn0ia1 [(1020 - 999)];
    char wQApoUaEs;
    int CiSsYX;
    char LXZ1gE0myLOn [(536 - 525)];
    char hGpf2DENtCn [(505 - 484)];
    struct   stu *lhRuCbYep5kt, *vsAIyt1zRkj9;
}
SHpi3ns7KRE, NTuFot3wkGD;

void  QwzlnkLHKW () {
    struct   stu *N9qO4WKpEb8H;
    struct   stu *kuQpsiRDem;
    kuQpsiRDem = &SHpi3ns7KRE;
    N9qO4WKpEb8H = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s", N9qO4WKpEb8H->vjphua12nERQ);
    for (; strcmp (N9qO4WKpEb8H->vjphua12nERQ, "end") != (425 - 425);) {
        kuQpsiRDem->vsAIyt1zRkj9 = N9qO4WKpEb8H;
        N9qO4WKpEb8H->lhRuCbYep5kt = kuQpsiRDem;
        scanf ("%s", N9qO4WKpEb8H->XZxn0ia1);
        scanf (" %c", &N9qO4WKpEb8H->wQApoUaEs);
        scanf ("%d", &N9qO4WKpEb8H->CiSsYX);
        scanf ("%s", N9qO4WKpEb8H->LXZ1gE0myLOn);
        scanf ("%s", N9qO4WKpEb8H->hGpf2DENtCn);
        kuQpsiRDem = N9qO4WKpEb8H;
        N9qO4WKpEb8H = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s", N9qO4WKpEb8H->vjphua12nERQ);
    }
    kuQpsiRDem->vsAIyt1zRkj9 = &NTuFot3wkGD;
    NTuFot3wkGD.lhRuCbYep5kt = kuQpsiRDem;
}

void  UXQfTRWwU () {
    int PfGdAQX;
    struct   stu *DwmCrUVdDt;
    DwmCrUVdDt = NTuFot3wkGD.lhRuCbYep5kt;
    PfGdAQX = (414 - 414);
    for (; DwmCrUVdDt != &SHpi3ns7KRE;) {
        printf ("%s", DwmCrUVdDt->vjphua12nERQ);
        if (PfGdAQX)
            ;
        PfGdAQX = (692 - 691);
        printf (" %s", DwmCrUVdDt->XZxn0ia1);
        printf (" %c", DwmCrUVdDt->wQApoUaEs);
        printf (" %d", DwmCrUVdDt->CiSsYX);
        printf (" %s", DwmCrUVdDt->LXZ1gE0myLOn);
        printf (" %s", DwmCrUVdDt->hGpf2DENtCn);
        DwmCrUVdDt = DwmCrUVdDt->lhRuCbYep5kt;
    }
}

void  main () {
    SHpi3ns7KRE.lhRuCbYep5kt = NULL;
    NTuFot3wkGD.vsAIyt1zRkj9 = NULL;
    QwzlnkLHKW ();
    UXQfTRWwU ();
}

