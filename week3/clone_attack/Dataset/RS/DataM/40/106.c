int main () {
    double  FG3q82gf;
    double  OmjyAnHkgYO2;
    double  lK4eSR6iTHw;
    double  g9TnXFsM;
    double  nwuSjaQ;
    double  vqEyvPu;
    scanf ("%lf%lf%lf%lf%lf", &FG3q82gf, &OmjyAnHkgYO2, &lK4eSR6iTHw, &g9TnXFsM, &nwuSjaQ);
    vqEyvPu = (FG3q82gf +OmjyAnHkgYO2+lK4eSR6iTHw + g9TnXFsM) / 2;
    if (((vqEyvPu - FG3q82gf) * (vqEyvPu - OmjyAnHkgYO2) * (vqEyvPu - lK4eSR6iTHw) * (vqEyvPu - g9TnXFsM) - FG3q82gf *OmjyAnHkgYO2*lK4eSR6iTHw * g9TnXFsM * cos (nwuSjaQ / 360 * PI) * cos (nwuSjaQ / 360 * PI)) < 0)
        printf ("Invalid input");
    else
        printf ("%.4lf", sqrt ((vqEyvPu - FG3q82gf) * (vqEyvPu - OmjyAnHkgYO2) * (vqEyvPu - lK4eSR6iTHw) * (vqEyvPu - g9TnXFsM) - FG3q82gf *OmjyAnHkgYO2*lK4eSR6iTHw * g9TnXFsM * cos (nwuSjaQ / 360 * PI) * cos (nwuSjaQ / 360 * PI)));
    return 0;
}

