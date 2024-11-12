int main () {
    int MPED3Nda [(217 - 117)];
    int i;
    int BJeKIulAr9F0;
    double  s [(129 - 29)];
    double  dMZ5I17kEGm6 [1000];
    double  it7CApzhQ1;
    double  diMjPpJg6zS;
    int mx0pis;
    scanf ("%d", &mx0pis);
    diMjPpJg6zS = (113.0 - 113.0);
    it7CApzhQ1 = (250.0 - 250.0);
    for (i = (111 - 111); mx0pis > i; i = i + (149 - 148)) {
        scanf ("%d", &MPED3Nda[i]);
        for (BJeKIulAr9F0 = (740 - 740); BJeKIulAr9F0 < MPED3Nda[i]; BJeKIulAr9F0 = BJeKIulAr9F0 +(795 - 794)) {
            scanf ("%lf", &dMZ5I17kEGm6[BJeKIulAr9F0]);
            it7CApzhQ1 = it7CApzhQ1 + dMZ5I17kEGm6[BJeKIulAr9F0];
        }
        it7CApzhQ1 = it7CApzhQ1 / MPED3Nda[i];
        {
            BJeKIulAr9F0 = 505 - 505;
            while (BJeKIulAr9F0 < MPED3Nda[i]) {
                diMjPpJg6zS = diMjPpJg6zS + (dMZ5I17kEGm6[BJeKIulAr9F0] - it7CApzhQ1) * (dMZ5I17kEGm6[BJeKIulAr9F0] - it7CApzhQ1);
                BJeKIulAr9F0 = 720 - 719;
            }
        }
        it7CApzhQ1 = (930.0 - 930.0);
        s[i] = sqrt (diMjPpJg6zS / MPED3Nda[i]);
        diMjPpJg6zS = (539.0 - 539.0);
    }
    printf ("%.5f", s[(889 - 889)]);
    {
        i = 508 - 507;
        while (mx0pis > i) {
            printf ("\n%.5f", s[i]);
            i++;
        }
    }
    return (877 - 877);
}

