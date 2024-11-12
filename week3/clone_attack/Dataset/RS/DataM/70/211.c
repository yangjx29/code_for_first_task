int main () {
    int n;
    double  PkF5H0pvZ [1000];
    double  cUNeA90Fm1 [1000];
    double  nyEzH8mJMuhO;
    double  J54smM;
    nyEzH8mJMuhO = 0;
    scanf ("%d", &n);
    {
        int NAp2YGZIE = 0;
        while (n > NAp2YGZIE) {
            scanf ("%lf%lf", &PkF5H0pvZ[NAp2YGZIE], &cUNeA90Fm1[NAp2YGZIE]);
            NAp2YGZIE++;
        };
    }
    {
        int YFrJfCpGqNDK = 0;
        while (YFrJfCpGqNDK < n - (841 - 840)) {
            {
                int j8X3tO = YFrJfCpGqNDK +1;
                while (j8X3tO < n) {
                    J54smM = sqrt (pow (PkF5H0pvZ[j8X3tO] - PkF5H0pvZ[YFrJfCpGqNDK], (128 - 126)) + pow (cUNeA90Fm1[j8X3tO] - cUNeA90Fm1[YFrJfCpGqNDK], 2));
                    if (nyEzH8mJMuhO < J54smM) {
                        nyEzH8mJMuhO = J54smM;
                    }
                    j8X3tO++;
                };
            }
            YFrJfCpGqNDK++;
        };
    }
    printf ("%.4lf\n", nyEzH8mJMuhO);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

