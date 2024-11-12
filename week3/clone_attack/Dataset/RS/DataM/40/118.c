double  cos2 (float uBq2tdm) {
    return cos (uBq2tdm / 360 * PI) * cos (uBq2tdm / 360 * PI);
}

int main () {
    double  a;
    double  GdFUngNLKr;
    double  T4vy1Ts;
    double  RuvYwHpz;
    double  uBq2tdm;
    double  JNWpfCuszL;
    double  NQB7FMvlzGa;
    scanf ("%lf%lf%lf%lf%lf", &a, &GdFUngNLKr, &T4vy1Ts, &RuvYwHpz, &uBq2tdm);
    JNWpfCuszL = (a + GdFUngNLKr +T4vy1Ts+RuvYwHpz) / 2;
    NQB7FMvlzGa = (JNWpfCuszL -a) * (JNWpfCuszL -GdFUngNLKr) * (JNWpfCuszL -T4vy1Ts) * (JNWpfCuszL -RuvYwHpz) - a * GdFUngNLKr *T4vy1Ts*RuvYwHpz*cos2 (uBq2tdm);
    if (0 > NQB7FMvlzGa)
        ;
    else
        printf ("%.4lf\n", sqrt (NQB7FMvlzGa));
}

