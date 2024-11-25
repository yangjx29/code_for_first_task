struct   spot {
    double  hXHNAWE;
    double  uoerMOxw;
}
pts [100];

void  main () {
    int lS3lKHnc;
    int SNlsdIH;
    int GEVOFn0;
    double  Bq79CdRtnLWD;
    double  ONbJ734gOFp;
    double  TGxVahkEMP3;
    double  pnDqmpjSfx;
    Bq79CdRtnLWD = 0.0;
    scanf ("%d", &lS3lKHnc);
    for (SNlsdIH = (25 - 25); lS3lKHnc > SNlsdIH; SNlsdIH = SNlsdIH +1)
        scanf ("%lf%lf", &pts[SNlsdIH].hXHNAWE, &pts[SNlsdIH].uoerMOxw);
    for (SNlsdIH = 0; SNlsdIH < lS3lKHnc; SNlsdIH = SNlsdIH +1) {
        GEVOFn0 = SNlsdIH +1;
        while (lS3lKHnc > GEVOFn0) {
            ONbJ734gOFp = pts[GEVOFn0].hXHNAWE - pts[SNlsdIH].hXHNAWE;
            TGxVahkEMP3 = pts[GEVOFn0].uoerMOxw - pts[SNlsdIH].uoerMOxw;
            GEVOFn0 = GEVOFn0 +1;
            pnDqmpjSfx = sqrt (ONbJ734gOFp *ONbJ734gOFp+TGxVahkEMP3*TGxVahkEMP3);
            if (pnDqmpjSfx > Bq79CdRtnLWD)
                Bq79CdRtnLWD = pnDqmpjSfx;
        };
    }
    printf ("%.4lf\n", Bq79CdRtnLWD);
}

