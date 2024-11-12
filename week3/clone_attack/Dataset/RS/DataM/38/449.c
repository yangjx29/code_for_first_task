int main () {
    double  a [100];
    double  *p;
    int KmWTdxUk;
    int keSKuWQ0Yk;
    int SbKr37xPCpV4;
    cin >> KmWTdxUk;
    for (; cin >> keSKuWQ0Yk;) {
        double  j7celdVWR;
        double  ixAjt5pS;
        j7celdVWR = 0;
        ixAjt5pS = 0;
        p = a;
        memset (p, 0, sizeof (p));
        for (SbKr37xPCpV4 = 0; keSKuWQ0Yk > SbKr37xPCpV4; SbKr37xPCpV4 = SbKr37xPCpV4 +1)
            cin >> p[SbKr37xPCpV4];
        for (SbKr37xPCpV4 = 0; keSKuWQ0Yk > SbKr37xPCpV4; SbKr37xPCpV4 = SbKr37xPCpV4 +1)
            j7celdVWR = j7celdVWR + p[SbKr37xPCpV4];
        j7celdVWR = j7celdVWR / (double ) keSKuWQ0Yk;
        {
            SbKr37xPCpV4 = 0;
            while (keSKuWQ0Yk > SbKr37xPCpV4) {
                ixAjt5pS = ixAjt5pS + (p[SbKr37xPCpV4] - j7celdVWR) * (p[SbKr37xPCpV4] - j7celdVWR);
                SbKr37xPCpV4 = SbKr37xPCpV4 +1;
            };
        }
        ixAjt5pS = ixAjt5pS / (double ) keSKuWQ0Yk;
        ixAjt5pS = sqrt (ixAjt5pS);
        printf ("%.5f\n", ixAjt5pS);
    }
    return 0;
}

