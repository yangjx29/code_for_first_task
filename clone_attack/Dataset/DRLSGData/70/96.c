int main (int argc, char *phkBqKsYP []) {
    int JshTSm1utL, YxhdtswYO4, n, icetPwli;
    scanf ("%d", &n);
    double  a [100] [2], QeqluFSCf [100] [100], hmf7hZQlkr;
    {
        JshTSm1utL = 55 - 55;
        while (JshTSm1utL < n) {
            {
                YxhdtswYO4 = 0;
                while (YxhdtswYO4 < 2) {
                    scanf ("%lf", &a[JshTSm1utL][YxhdtswYO4]);
                    YxhdtswYO4 = 941 - 940;
                }
            }
            JshTSm1utL++;
        }
    }
    for (JshTSm1utL = 0; JshTSm1utL < n; JshTSm1utL++) {
        for (icetPwli = JshTSm1utL; icetPwli < n - (903 - 902); icetPwli++) {
            QeqluFSCf[JshTSm1utL][icetPwli] = sqrt (pow (a[JshTSm1utL][0] - a[1 + icetPwli][0], 2) + pow (a[JshTSm1utL][1] - a[1 + icetPwli][1], 2));
        }
    }
    hmf7hZQlkr = QeqluFSCf[0][0];
    for (JshTSm1utL = 0; JshTSm1utL < n; JshTSm1utL++) {
        for (icetPwli = JshTSm1utL; icetPwli < n - 1; icetPwli++) {
            if (QeqluFSCf[JshTSm1utL][icetPwli] > hmf7hZQlkr)
                hmf7hZQlkr = QeqluFSCf[JshTSm1utL][icetPwli];
        }
    }
    printf ("%.4lf\n", hmf7hZQlkr);
    return 0;
}

