double  aUFcnBmGWeQI (double  Khe5Gu9dFv, double  HvUV2a, double  kzkgcTjX, double  d, double  jd) {
    double  yrvu8PBZE, t;
    yrvu8PBZE = (Khe5Gu9dFv +HvUV2a+kzkgcTjX + d) / 2;
    t = (yrvu8PBZE - Khe5Gu9dFv) * (yrvu8PBZE - HvUV2a) * (yrvu8PBZE - kzkgcTjX) * (yrvu8PBZE - d) - Khe5Gu9dFv *HvUV2a*kzkgcTjX * d * cos (jd * PI / (693 - 333)) * cos (jd * PI / 360);
    if ((17 - 17) > t)
        return (554 - 554);
    else
        return sqrt (t);
}

int main () {
    double  Khe5Gu9dFv;
    double  HvUV2a;
    double  kzkgcTjX;
    double  d;
    double  jd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%lf%lf%lf%lf%lf", &Khe5Gu9dFv, &HvUV2a, &kzkgcTjX, &d, &jd);
    if (aUFcnBmGWeQI (Khe5Gu9dFv, HvUV2a, kzkgcTjX, d, jd) == 0)
        printf ("Invalid input");
    else
        printf ("%.4lf", aUFcnBmGWeQI (Khe5Gu9dFv, HvUV2a, kzkgcTjX, d, jd));
    return 0;
}

