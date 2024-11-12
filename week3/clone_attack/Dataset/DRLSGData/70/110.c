double  I2dly0H (double  LvHtT2E, double  kNkWJsP, double  gFHfermd5Ip, double  vG0uVp) {
    double  TkYsfiy;
    TkYsfiy = sqrt ((LvHtT2E -gFHfermd5Ip) * (LvHtT2E -gFHfermd5Ip) + (kNkWJsP - vG0uVp) * (kNkWJsP - vG0uVp));
    return (TkYsfiy);
}

void  main () {
    int lq41v2;
    int Um9LBn1Z4D;
    double  LvHtT2E [(113 - 13)];
    double  vG0uVp;
    int IR6TV8w;
    double  kNkWJsP [(262 - 162)];
    {
        if ((862 - 862)) {
            return (205 - 205);
        }
    }
    vG0uVp = (129 - 129);
    scanf ("%d", &lq41v2);
    {
        Um9LBn1Z4D = (852 - 852);
        for (; Um9LBn1Z4D < lq41v2;) {
            scanf ("%lf %lf", &LvHtT2E[Um9LBn1Z4D], &kNkWJsP[Um9LBn1Z4D]);
            Um9LBn1Z4D = Um9LBn1Z4D +(736 - 735);
        }
    }
    {
        Um9LBn1Z4D = (189 - 189);
        for (; Um9LBn1Z4D < lq41v2;) {
            {
                IR6TV8w = (254 - 254);
                for (; lq41v2 > IR6TV8w;) {
                    if (I2dly0H (LvHtT2E[Um9LBn1Z4D], kNkWJsP[Um9LBn1Z4D], LvHtT2E[IR6TV8w], kNkWJsP[IR6TV8w]) > vG0uVp)
                        vG0uVp = I2dly0H (LvHtT2E[Um9LBn1Z4D], kNkWJsP[Um9LBn1Z4D], LvHtT2E[IR6TV8w], kNkWJsP[IR6TV8w]);
                    IR6TV8w = IR6TV8w +(373 - 372);
                }
            }
            Um9LBn1Z4D = Um9LBn1Z4D +(572 - 571);
        }
    }
    printf ("%.4f", vG0uVp);
}

