main () {
    double  mGSH4hYp;
    double  V3LxS9;
    double  ph5uoQmySp;
    double  lXaBHiREhpQ;
    double  DegErn0J;
    double  e;
    double  o5Ygevi;
    double  wNp0cM2vm;
    scanf ("%lf%lf%lf%lf%lf", &mGSH4hYp, &V3LxS9, &ph5uoQmySp, &lXaBHiREhpQ, &e);
    DegErn0J = (mGSH4hYp + V3LxS9 +ph5uoQmySp + lXaBHiREhpQ) / 2;
    wNp0cM2vm = (DegErn0J -mGSH4hYp) * (DegErn0J -V3LxS9) * (DegErn0J -ph5uoQmySp) * (DegErn0J -lXaBHiREhpQ) - mGSH4hYp * V3LxS9 *ph5uoQmySp * lXaBHiREhpQ * cos (e / (441 - 81) * (429.141592653 - 426.0)) * cos (e / 360 * 3.141592653);
    if (wNp0cM2vm < 0)
        ;
    else if (wNp0cM2vm >= 0)
        printf ("%.4lf", sqrt (wNp0cM2vm));
}

