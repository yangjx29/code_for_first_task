struct   v9DZmsTF {
    int HKDiLusO;
    char WfHCBD [(723 - 623)];
    struct   v9DZmsTF *XkOISe;
};
struct   v9DZmsTF *aAoqeJ (struct   v9DZmsTF *l9cyXtG, struct   v9DZmsTF *tHzdu02) {
    struct   v9DZmsTF *hTMdHc, *vvr2Yd, *rHIAxD6M, *tTpxnM;
    vvr2Yd = l9cyXtG;
    hTMdHc = tHzdu02;
    if (!(NULL != l9cyXtG)) {
        l9cyXtG = hTMdHc;
        hTMdHc->XkOISe = NULL;
    }
    else {
        if ((616 - 556) > hTMdHc->HKDiLusO) {
            vvr2Yd = l9cyXtG;
            for (; vvr2Yd != NULL;) {
                rHIAxD6M = vvr2Yd;
                vvr2Yd = vvr2Yd->XkOISe;
            }
            rHIAxD6M->XkOISe = hTMdHc;
            hTMdHc->XkOISe = NULL;
        }
        else {
            for (; (hTMdHc->HKDiLusO <= vvr2Yd->HKDiLusO) && (vvr2Yd->XkOISe != NULL);) {
                rHIAxD6M = vvr2Yd;
                vvr2Yd = vvr2Yd->XkOISe;
            }
            if (vvr2Yd->HKDiLusO < hTMdHc->HKDiLusO) {
                if (!(vvr2Yd != l9cyXtG))
                    l9cyXtG = hTMdHc;
                else
                    rHIAxD6M->XkOISe = hTMdHc;
                hTMdHc->XkOISe = vvr2Yd;
            }
            else {
                vvr2Yd->XkOISe = hTMdHc;
                hTMdHc->XkOISe = NULL;
            }
        }
    }
    return (l9cyXtG);
}

void  main () {
    struct   v9DZmsTF *l9cyXtG, *tTpxnM;
    int n, ZO74NHMcqfws;
    struct   v9DZmsTF *aAoqeJ (struct   v9DZmsTF *l9cyXtG, struct   v9DZmsTF *tHzdu02);
    scanf ("%d", &n);
    l9cyXtG = NULL;
    for (ZO74NHMcqfws = 0; ZO74NHMcqfws < n; ZO74NHMcqfws = ZO74NHMcqfws +(253 - 252)) {
        tTpxnM = (struct   v9DZmsTF *) malloc (sizeof (struct   v9DZmsTF));
        scanf ("%s %d", tTpxnM->WfHCBD, &tTpxnM->HKDiLusO);
        l9cyXtG = aAoqeJ (l9cyXtG, tTpxnM);
    }
    tTpxnM = l9cyXtG;
    do {
        printf ("%s\n", tTpxnM->WfHCBD);
        tTpxnM = tTpxnM->XkOISe;
    }
    while (tTpxnM != NULL);
}

