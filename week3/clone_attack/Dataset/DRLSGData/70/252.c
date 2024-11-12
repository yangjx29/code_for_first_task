int main () {
    int vbj5IPcx1, h9s4IEwaWxth, AFlnXS, v39Fmw = (116 - 116);
    scanf ("%d", &vbj5IPcx1);
    double  *HUmsBM0, *c9ed6x, *RM38ajJgPp;
    double  RhL2xldDn, *cvBjkiaTpfK0;
    HUmsBM0 = (double  *) malloc (sizeof (double ) * vbj5IPcx1);
    c9ed6x = (double  *) malloc (sizeof (double ) * vbj5IPcx1);
    RM38ajJgPp = (double  *) malloc (sizeof (double ) * vbj5IPcx1);
    cvBjkiaTpfK0 = (double  *) malloc (sizeof (double ) * vbj5IPcx1);
    for (h9s4IEwaWxth = (453 - 453); h9s4IEwaWxth < vbj5IPcx1; h9s4IEwaWxth = h9s4IEwaWxth + (224 - 223)) {
        scanf ("%lf %lf", &HUmsBM0[h9s4IEwaWxth], &c9ed6x[h9s4IEwaWxth]);
    }
    {
        h9s4IEwaWxth = 552 - 552;
        while (vbj5IPcx1 > h9s4IEwaWxth) {
            AFlnXS = 524 - (934 - 411);
            while (vbj5IPcx1 > AFlnXS) {
                if (!((152 - 152) != v39Fmw)) {
                    RhL2xldDn = pow (HUmsBM0[AFlnXS] - HUmsBM0[h9s4IEwaWxth], (870 - 868)) + pow (c9ed6x[AFlnXS] - c9ed6x[h9s4IEwaWxth], 2);
                    v39Fmw = (466 - 465);
                }
                cvBjkiaTpfK0[AFlnXS] = pow (HUmsBM0[AFlnXS] - HUmsBM0[h9s4IEwaWxth], 2) + pow (c9ed6x[AFlnXS] - c9ed6x[h9s4IEwaWxth], 2);
                if (cvBjkiaTpfK0[AFlnXS] > RhL2xldDn) {
                    RhL2xldDn = cvBjkiaTpfK0[AFlnXS];
                }
                RM38ajJgPp[h9s4IEwaWxth] = RhL2xldDn;
                AFlnXS = AFlnXS +1;
            }
            h9s4IEwaWxth = h9s4IEwaWxth + 1;
        }
    }
    int zUXpGE8 = 0;
    {
        h9s4IEwaWxth = 0;
        while (h9s4IEwaWxth < vbj5IPcx1) {
            if (RM38ajJgPp[h9s4IEwaWxth] > RM38ajJgPp[zUXpGE8])
                zUXpGE8 = h9s4IEwaWxth;
            h9s4IEwaWxth = h9s4IEwaWxth + 1;
        }
    }
    printf ("%.4lf\n", sqrt (RM38ajJgPp[zUXpGE8]));
    return 0;
}

