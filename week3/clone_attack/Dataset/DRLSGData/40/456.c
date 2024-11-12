void  main () {
    double  hq21NK;
    double  kMXsuGTmaS;
    double  jmtJaO;
    double  V8mSFwj;
    double  DEd0Huz1Ab;
    double  WtrTl7q;
    double  lXsGrhutFLd;
    double  MUV2lMFYOz;
    double  CgitC3v;
    double  gdsh7SamzVlj;
    hq21NK = 3.1415926;
    scanf ("%lf%lf%lf%lf%lf", &kMXsuGTmaS, &jmtJaO, &V8mSFwj, &DEd0Huz1Ab, &WtrTl7q);
    CgitC3v = (kMXsuGTmaS + jmtJaO + V8mSFwj +DEd0Huz1Ab) / 2;
    lXsGrhutFLd = WtrTl7q / 360 * hq21NK;
    gdsh7SamzVlj = (CgitC3v -kMXsuGTmaS) * (CgitC3v -jmtJaO) * (CgitC3v -V8mSFwj) * (CgitC3v -DEd0Huz1Ab) - kMXsuGTmaS * jmtJaO * V8mSFwj *DEd0Huz1Ab*cos (lXsGrhutFLd) * cos (lXsGrhutFLd);
    if (gdsh7SamzVlj > 0)
        printf ("%.4lf", sqrt (gdsh7SamzVlj));
    else
        ;
}

