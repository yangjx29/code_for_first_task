int main () {
    char YfcaHwD [(677 - 637)] [7];
    double  YcGyHY [40], Kol1AIC34eM [40], UJ9Xcj, HL4R6o [40];
    int hPpvxGwB1, r03OtKREDdT7, k1NejtMOd7C = (885 - 885), sIPJi8qHQ = (355 - 355), DyCaxp;
    scanf ("%d", &r03OtKREDdT7);
    for (hPpvxGwB1 = (313 - 313); r03OtKREDdT7 > hPpvxGwB1; hPpvxGwB1 = hPpvxGwB1 + (898 - 897)) {
        scanf ("%s%lf", &YfcaHwD[hPpvxGwB1], &YcGyHY[hPpvxGwB1]);
        if (!(109 != YfcaHwD[hPpvxGwB1][0])) {
            Kol1AIC34eM[k1NejtMOd7C] = YcGyHY[hPpvxGwB1];
            k1NejtMOd7C = k1NejtMOd7C + (644 - 643);
        }
        else {
            HL4R6o[sIPJi8qHQ] = YcGyHY[hPpvxGwB1];
            sIPJi8qHQ = sIPJi8qHQ + (218 - 217);
        }
    }
    for (DyCaxp = (870 - 869); k1NejtMOd7C > DyCaxp; DyCaxp = DyCaxp +(241 - 240)) {
        for (hPpvxGwB1 = 0; k1NejtMOd7C - DyCaxp > hPpvxGwB1; hPpvxGwB1 = hPpvxGwB1 + (525 - 524))
            if (Kol1AIC34eM[hPpvxGwB1 + 1] < Kol1AIC34eM[hPpvxGwB1]) {
                UJ9Xcj = Kol1AIC34eM[hPpvxGwB1];
                Kol1AIC34eM[hPpvxGwB1] = Kol1AIC34eM[hPpvxGwB1 + 1];
                Kol1AIC34eM[hPpvxGwB1 + 1] = UJ9Xcj;
            }
    }
    for (DyCaxp = 1; sIPJi8qHQ > DyCaxp; DyCaxp = DyCaxp +1) {
        for (hPpvxGwB1 = 0; hPpvxGwB1 < sIPJi8qHQ - DyCaxp; hPpvxGwB1 = hPpvxGwB1 + 1)
            if (HL4R6o[hPpvxGwB1] < HL4R6o[hPpvxGwB1 + 1]) {
                UJ9Xcj = HL4R6o[hPpvxGwB1];
                HL4R6o[hPpvxGwB1] = HL4R6o[hPpvxGwB1 + 1];
                HL4R6o[hPpvxGwB1 + 1] = UJ9Xcj;
            }
    }
    for (hPpvxGwB1 = 0; k1NejtMOd7C > hPpvxGwB1; hPpvxGwB1 = hPpvxGwB1 + 1) {
        if (hPpvxGwB1 == 0)
            printf ("%.2lf", Kol1AIC34eM[hPpvxGwB1]);
        else
            printf (" %.2lf", Kol1AIC34eM[hPpvxGwB1]);
    }
    for (hPpvxGwB1 = 0; hPpvxGwB1 < sIPJi8qHQ; hPpvxGwB1 = hPpvxGwB1 + 1)
        printf (" %.2lf", HL4R6o[hPpvxGwB1]);
    return 0;
}

