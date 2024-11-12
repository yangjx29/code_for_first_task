int main () {
    int iqoBWf, CDO19e7THPKZ, JDpieJ1xZq, d1VdKBeZ, w, AZQRuH;
    scanf ("%d", &iqoBWf);
    if (9 >= iqoBWf)
        printf ("%d", iqoBWf);
    else {
        CDO19e7THPKZ = iqoBWf % (334 - 324);
        if (iqoBWf <= 99) {
            JDpieJ1xZq = (iqoBWf - CDO19e7THPKZ) / 10;
            printf ("%d%d", CDO19e7THPKZ, JDpieJ1xZq);
        }
        else {
            JDpieJ1xZq = ((iqoBWf - CDO19e7THPKZ) / 10) % 10;
            AZQRuH = CDO19e7THPKZ +10 * JDpieJ1xZq;
            if (iqoBWf <= 999) {
                d1VdKBeZ = (iqoBWf - AZQRuH) / 100;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("%d%d%d", CDO19e7THPKZ, JDpieJ1xZq, d1VdKBeZ);
            }
            else {
                d1VdKBeZ = ((iqoBWf - AZQRuH) / 100) % 10;
                AZQRuH = CDO19e7THPKZ +10 * JDpieJ1xZq +100 * d1VdKBeZ;
                if (iqoBWf <= (10466 - 467)) {
                    w = (iqoBWf - AZQRuH) / (1754 - 754);
                    printf ("%d%d%d%d", CDO19e7THPKZ, JDpieJ1xZq, d1VdKBeZ, w);
                }
                else
                    printf ("00001");
            };
        };
    }
    return 0;
}

