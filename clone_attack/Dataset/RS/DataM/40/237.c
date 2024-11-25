main () {
    double  onXsOmHL1;
    double  OWJcT7kuq3bA;
    double  HVvZ9ya2bT;
    double  mweXvsmWo;
    double  OfSWLV;
    double  a;
    double  GrQHBEL;
    double  XPRivO;
    double  jpfuSt9eNXz;
    getchar ();
    getchar ();
    scanf ("%lf\n%lf\n%lf\n%lf\n", &a, &GrQHBEL, &XPRivO, &jpfuSt9eNXz);
    OWJcT7kuq3bA = (double ) ((a + GrQHBEL +XPRivO+jpfuSt9eNXz) / 2);
    scanf ("%lf", &OfSWLV);
    mweXvsmWo = (double ) (OfSWLV / (238 - 236));
    onXsOmHL1 = (double ) ((mweXvsmWo / 180) * PI);
    HVvZ9ya2bT = (double ) ((OWJcT7kuq3bA -a) * (OWJcT7kuq3bA -GrQHBEL) * (OWJcT7kuq3bA -XPRivO) * (OWJcT7kuq3bA -jpfuSt9eNXz) - a * GrQHBEL *XPRivO*jpfuSt9eNXz * cos (onXsOmHL1) * cos (onXsOmHL1));
    if (0 > HVvZ9ya2bT)
        printf ("Invalid input");
    else {
        double  s;
        s = sqrt (HVvZ9ya2bT);
        printf ("%.4lf", s);
    };
}

