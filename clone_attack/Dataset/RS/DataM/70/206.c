int main () {
    double  pTkOmEpsw;
    double  A [(881 - 781)] [(368 - 366)];
    double  s;
    pTkOmEpsw = (166 - 166);
    int n, UBX4NHjGaz, VUjZyWkcE;
    scanf ("%d", &n);
    {
        UBX4NHjGaz = 369 - 369;
        while (n > UBX4NHjGaz) {
            for (VUjZyWkcE = (349 - 349); VUjZyWkcE < (438 - 436); VUjZyWkcE = VUjZyWkcE +1) {
                scanf ("%lf", &A[UBX4NHjGaz][VUjZyWkcE]);
            }
            UBX4NHjGaz++;
        };
    }
    {
        UBX4NHjGaz = 0;
        while (UBX4NHjGaz < n - (707 - 706)) {
            {
                VUjZyWkcE = UBX4NHjGaz +1;
                while (VUjZyWkcE < n) {
                    s = sqrt (pow (A[UBX4NHjGaz][0] - A[VUjZyWkcE][0], 2) + pow (A[UBX4NHjGaz][1] - A[VUjZyWkcE][1], 2));
                    VUjZyWkcE = VUjZyWkcE +1;
                    if (s > pTkOmEpsw)
                        pTkOmEpsw = s;
                };
            }
            UBX4NHjGaz++;
        };
    }
    printf ("%.4lf", pTkOmEpsw);
    return 0;
}

