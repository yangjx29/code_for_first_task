void  main () {
    int zJLyaXTjp;
    int PKn9chC;
    int KQgYUd;
    int yS3A8ZRUM;
    int Pke5S4sNO0zr;
    double  *cCVmNEhObd [(313 - 213)];
    double  IrCELA10vwm7;
    double  mT1niXYh;
    double  sLCwV1t5c;
    double  HzTfrgKhH;
    double  HPJmuyzbe6D;
    double  RmNlfLZjTPO1;
    double  jHjVWosy;
    IrCELA10vwm7 = (934 - 934);
    mT1niXYh = (380 - 380);
    sLCwV1t5c = (22 - 22);
    scanf ("%d", &zJLyaXTjp);
    {
        yS3A8ZRUM = 506 - 506;
        while (zJLyaXTjp > yS3A8ZRUM) {
            HzTfrgKhH = (734 - 734);
            IrCELA10vwm7 = (870 - 870);
            mT1niXYh = (569 - 569);
            HPJmuyzbe6D = (597 - 597);
            RmNlfLZjTPO1 = (250 - 250);
            sLCwV1t5c = 0;
            jHjVWosy = 0;
            scanf ("%d", &Pke5S4sNO0zr);
            for (KQgYUd = 0; Pke5S4sNO0zr > KQgYUd; KQgYUd = KQgYUd +1)
                *(cCVmNEhObd + KQgYUd) = (double  *) malloc (100 * sizeof (double ));
            {
                KQgYUd = 0;
                while (Pke5S4sNO0zr > KQgYUd) {
                    scanf ("%lf", *(cCVmNEhObd + KQgYUd));
                    IrCELA10vwm7 = IrCELA10vwm7 +**(cCVmNEhObd + KQgYUd);
                    KQgYUd = KQgYUd +1;
                };
            }
            HzTfrgKhH = IrCELA10vwm7 / Pke5S4sNO0zr;
            for (KQgYUd = 0; Pke5S4sNO0zr > KQgYUd; KQgYUd = KQgYUd +1) {
                HPJmuyzbe6D = **(cCVmNEhObd + KQgYUd) - HzTfrgKhH;
                RmNlfLZjTPO1 = HPJmuyzbe6D *HPJmuyzbe6D;
                sLCwV1t5c = sLCwV1t5c + RmNlfLZjTPO1;
            }
            jHjVWosy = sLCwV1t5c / Pke5S4sNO0zr;
            mT1niXYh = sqrt (jHjVWosy);
            printf ("%.5f\n", mT1niXYh);
            yS3A8ZRUM = yS3A8ZRUM + 1;
        };
    };
}

