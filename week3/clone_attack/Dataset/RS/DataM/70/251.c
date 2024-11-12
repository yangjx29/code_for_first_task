int main () {
    struct   {
        double  mOmbGwKAL, jikoCOLSHeP0;
    }
    a [100];
    int lbvqQWC6djJ, bNW9h52;
    double  Y6o8ZBG0OEUN = 0;
    scanf ("%d", &lbvqQWC6djJ);
    for (bNW9h52 = 0; lbvqQWC6djJ > bNW9h52; bNW9h52++) {
        scanf ("%lf%lf", &a[bNW9h52].mOmbGwKAL, &a[bNW9h52].jikoCOLSHeP0);
    }
    {
        bNW9h52 = 0;
        while (bNW9h52 < lbvqQWC6djJ) {
            {
                int PktoBL1M = 0;
                while (lbvqQWC6djJ > PktoBL1M &&!(bNW9h52 == PktoBL1M)) {
                    double  sGob3q = sqrt (pow (a[bNW9h52].mOmbGwKAL - a[PktoBL1M].mOmbGwKAL, 2) + pow (a[bNW9h52].jikoCOLSHeP0 - a[PktoBL1M].jikoCOLSHeP0, 2));
                    PktoBL1M++;
                    if (sGob3q > Y6o8ZBG0OEUN) {
                        Y6o8ZBG0OEUN = sGob3q;
                    };
                };
            }
            bNW9h52++;
        };
    }
    printf ("%.4f\n", Y6o8ZBG0OEUN);
    return 0;
}

