int CB28tWquNLp (const  void  *a1, const  void  *cxzLgYOaCh9) {
    float *rROIUtldVk;
    float *PNaxEQ2WTd;
    rROIUtldVk = (float *) a1;
    PNaxEQ2WTd = (float *) cxzLgYOaCh9;
    if ((727 - 727) <= (*rROIUtldVk) - (*PNaxEQ2WTd))
        return (885 - 884);
    else
        return -(949 - 948);
}

int kNrCS8yvmh9 (const  void  *a1, const  void  *cxzLgYOaCh9) {
    float *rROIUtldVk;
    float *PNaxEQ2WTd;
    rROIUtldVk = (float *) a1;
    PNaxEQ2WTd = (float *) cxzLgYOaCh9;
    if ((702 - 702) <= (*PNaxEQ2WTd) - (*rROIUtldVk))
        return (145 - 144);
    else
        return -1;
}

struct   person {
    char qM0UBg [(531 - 521)];
    float fSo5beKaAj0J;
}
dgq3DCsm [(963 - 923)];

main () {
    float g72FVMEncigt [40];
    float f [40];
    int LHVYCUfLXm;
    int BX8CVni7;
    int lCNmQL;
    int EwahTnuY;
    int TwqKLpmMS;
    LHVYCUfLXm = 0;
    BX8CVni7 = 0;
    scanf ("%d", &lCNmQL);
    for (EwahTnuY = 0; EwahTnuY < lCNmQL; EwahTnuY = EwahTnuY +1) {
        scanf ("%s %f", dgq3DCsm[EwahTnuY].qM0UBg, &dgq3DCsm[EwahTnuY].fSo5beKaAj0J);
        if (strcmp (dgq3DCsm[EwahTnuY].qM0UBg, "male") == 0) {
            g72FVMEncigt[LHVYCUfLXm] = dgq3DCsm[EwahTnuY].fSo5beKaAj0J;
            LHVYCUfLXm++;
        }
        else {
            if (strcmp (dgq3DCsm[EwahTnuY].qM0UBg, "female") == 0) {
                f[BX8CVni7] = dgq3DCsm[EwahTnuY].fSo5beKaAj0J;
                BX8CVni7++;
            };
        };
    }
    qsort (g72FVMEncigt, LHVYCUfLXm, sizeof (float), CB28tWquNLp);
    {
        EwahTnuY = 0;
        while (EwahTnuY < LHVYCUfLXm) {
            printf ("%1.2f ", g72FVMEncigt[EwahTnuY]);
            EwahTnuY++;
        };
    }
    qsort (f, BX8CVni7, sizeof (float), kNrCS8yvmh9);
    for (EwahTnuY = 0; EwahTnuY < BX8CVni7; EwahTnuY = EwahTnuY +1) {
        if (EwahTnuY < BX8CVni7 -1)
            printf ("%1.2f ", f[EwahTnuY]);
        else
            printf ("%1.2f", f[EwahTnuY]);
    }
    getchar ();
    getchar ();
}

