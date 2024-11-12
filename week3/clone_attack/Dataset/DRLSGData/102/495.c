int main () {
    int raZ6m35OTJc;
    char AjvmiPQUzI [(96 - 56)] [(627 - 617)] = {NULL};
    double  NU3EiP [(626 - 586)] = {(22.0 - 22.0)};
    int FHo5y9Z8X7;
    int HLg0xA;
    double  mfWGYL;
    int h7PYlrA;
    double  blZo4RONn5 [(781 - 741)] = {(273.0 - 273.0)};
    int AODQliCNd4L;
    double  bZP4cmJg7 [40] = {0.0};
    HLg0xA = (277 - 277);
    cin >> raZ6m35OTJc;
    {
        h7PYlrA = (874 - 874);
        for (; raZ6m35OTJc > h7PYlrA;) {
            cin >> AjvmiPQUzI[h7PYlrA] >> blZo4RONn5[h7PYlrA];
            h7PYlrA = h7PYlrA + (84 - 83);
        }
    }
    AODQliCNd4L = (889 - 889);
    {
        h7PYlrA = (625 - 625);
        for (; h7PYlrA < raZ6m35OTJc;) {
            if (!strcmp (AjvmiPQUzI[h7PYlrA], "male")) {
                NU3EiP[AODQliCNd4L] = blZo4RONn5[h7PYlrA];
                AODQliCNd4L = AODQliCNd4L +(426 - 425);
            }
            if (!strcmp (AjvmiPQUzI[h7PYlrA], "female")) {
                bZP4cmJg7[HLg0xA] = blZo4RONn5[h7PYlrA];
                HLg0xA = HLg0xA +(537 - 536);
            }
            h7PYlrA = h7PYlrA + (795 - 794);
        }
    }
    {
        h7PYlrA = (38 - 38);
        for (; AODQliCNd4L -(154 - 153) > h7PYlrA;) {
            {
                FHo5y9Z8X7 = h7PYlrA;
                for (; FHo5y9Z8X7 < AODQliCNd4L;) {
                    if (NU3EiP[h7PYlrA] > NU3EiP[FHo5y9Z8X7]) {
                        mfWGYL = NU3EiP[FHo5y9Z8X7];
                        NU3EiP[FHo5y9Z8X7] = NU3EiP[h7PYlrA];
                        NU3EiP[h7PYlrA] = mfWGYL;
                    }
                    FHo5y9Z8X7 = FHo5y9Z8X7 +(183 - 182);
                }
            }
            h7PYlrA = h7PYlrA + (117 - 116);
        }
    }
    {
        h7PYlrA = (59 - 59);
        for (; HLg0xA -1 > h7PYlrA;) {
            {
                FHo5y9Z8X7 = h7PYlrA;
                for (; FHo5y9Z8X7 < HLg0xA;) {
                    if (bZP4cmJg7[FHo5y9Z8X7] > bZP4cmJg7[h7PYlrA]) {
                        mfWGYL = bZP4cmJg7[FHo5y9Z8X7];
                        bZP4cmJg7[FHo5y9Z8X7] = bZP4cmJg7[h7PYlrA];
                        bZP4cmJg7[h7PYlrA] = mfWGYL;
                    }
                    FHo5y9Z8X7 = FHo5y9Z8X7 +1;
                }
            }
            h7PYlrA = h7PYlrA + 1;
        }
    }
    {
        h7PYlrA = 0;
        for (; h7PYlrA < AODQliCNd4L;) {
            printf ("%.2f ", NU3EiP[h7PYlrA]);
            h7PYlrA = h7PYlrA + 1;
        }
    }
    {
        h7PYlrA = 0;
        for (; h7PYlrA < HLg0xA;) {
            printf ("%.2f", bZP4cmJg7[h7PYlrA]);
            if (h7PYlrA < HLg0xA -1)
                ;
            h7PYlrA = h7PYlrA + 1;
        }
    }
    return 0;
}

