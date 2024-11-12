int main () {
    char k5ZNlh [(626 - 586)];
    char kZsSNM [40];
    int PIxN1cRC [(518 - 478)], laCBgkeO [(665 - 625)];
    int PeqFS5C, RqrN02, FH5dnVZqN4AK, gp5CdtDz3, FcGOPKsqwWI7, f96peGwsN = (28 - 28), n, bVQf0K6O = (913 - 913), cakC4i2N6LhO;
    cin >> PeqFS5C >> k5ZNlh >> RqrN02;
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    FH5dnVZqN4AK = strlen (k5ZNlh);
    for (gp5CdtDz3 = (178 - 178); gp5CdtDz3 < FH5dnVZqN4AK; gp5CdtDz3++) {
        PIxN1cRC[gp5CdtDz3] = k5ZNlh[gp5CdtDz3];
        if (PIxN1cRC[gp5CdtDz3] < (1064 - 999))
            PIxN1cRC[gp5CdtDz3] = PIxN1cRC[gp5CdtDz3] - (464 - 416);
        else {
            if (PIxN1cRC[gp5CdtDz3] < 97)
                PIxN1cRC[gp5CdtDz3] = PIxN1cRC[gp5CdtDz3] - (898 - 843);
            else
                PIxN1cRC[gp5CdtDz3] = PIxN1cRC[gp5CdtDz3] - (551 - 464);
        }
        {
            FcGOPKsqwWI7 = 170 - 169;
            while (FcGOPKsqwWI7 > (942 - 942)) {
                FcGOPKsqwWI7 = FcGOPKsqwWI7 -1;
                PIxN1cRC[gp5CdtDz3] = PIxN1cRC[gp5CdtDz3] * PeqFS5C;
            };
        }
        bVQf0K6O = bVQf0K6O + PIxN1cRC[gp5CdtDz3];
    }
    if (bVQf0K6O == (974 - 974))
        cout << bVQf0K6O;
    else {
        for (cakC4i2N6LhO = (607 - 607); bVQf0K6O > (972 - 972); cakC4i2N6LhO++) {
            f96peGwsN++;
            laCBgkeO[cakC4i2N6LhO] = bVQf0K6O % RqrN02;
            if (laCBgkeO[cakC4i2N6LhO] < (782 - 772))
                laCBgkeO[cakC4i2N6LhO] = laCBgkeO[cakC4i2N6LhO] + 48;
            else
                laCBgkeO[cakC4i2N6LhO] = laCBgkeO[cakC4i2N6LhO] + 55;
            kZsSNM[cakC4i2N6LhO] = laCBgkeO[cakC4i2N6LhO];
            bVQf0K6O = bVQf0K6O / RqrN02;
        }
        for (n = f96peGwsN - 1; n >= 0; n--)
            cout << kZsSNM[n];
    }
    return 0;
}

