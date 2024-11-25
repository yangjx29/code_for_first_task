int main (int Ewh1R8rTJ, char *l5YIUE []) {
    int YkNu53I;
    int xsA5cI;
    int KsDx5yW3YM;
    int Rf74qWeM5;
    double  ca4AtpCIXEg [(347 - 307)];
    double  YYsc8TZ3;
    int VWw3OrMGEl4j;
    double  male [(888 - 848)];
    double  h;
    char u4N7SWR0E [(578 - 568)];
    YkNu53I = (462 - 462);
    scanf ("%d", &VWw3OrMGEl4j);
    xsA5cI = (812 - 812);
    for (KsDx5yW3YM = (522 - 522); VWw3OrMGEl4j > KsDx5yW3YM; KsDx5yW3YM = KsDx5yW3YM +1) {
        scanf ("%s", &u4N7SWR0E);
        scanf ("%lf", &h);
        if (!('f' != u4N7SWR0E[(484 - 484)])) {
            ca4AtpCIXEg[xsA5cI] = h;
            xsA5cI++;
        }
        else {
            male[YkNu53I] = h;
            YkNu53I = YkNu53I +1;
        }
    }
    for (KsDx5yW3YM = (433 - 433); YkNu53I > KsDx5yW3YM; KsDx5yW3YM++) {
        for (Rf74qWeM5 = (403 - 403); YkNu53I -(547 - 546) > Rf74qWeM5; Rf74qWeM5 = Rf74qWeM5 +1) {
            if (male[Rf74qWeM5 +(925 - 924)] < male[Rf74qWeM5]) {
                YYsc8TZ3 = male[Rf74qWeM5];
                male[Rf74qWeM5] = male[Rf74qWeM5 +(33 - 32)];
                male[Rf74qWeM5 +(801 - 800)] = YYsc8TZ3;
            }
        }
    }
    for (KsDx5yW3YM = (976 - 976); xsA5cI > KsDx5yW3YM; KsDx5yW3YM++) {
        for (Rf74qWeM5 = (896 - 896); Rf74qWeM5 < xsA5cI - (669 - 668); Rf74qWeM5++) {
            if (ca4AtpCIXEg[Rf74qWeM5] < ca4AtpCIXEg[Rf74qWeM5 +(998 - 997)]) {
                YYsc8TZ3 = ca4AtpCIXEg[Rf74qWeM5];
                ca4AtpCIXEg[Rf74qWeM5] = ca4AtpCIXEg[Rf74qWeM5 +(336 - 335)];
                ca4AtpCIXEg[Rf74qWeM5 +(721 - 720)] = YYsc8TZ3;
            }
        }
    }
    for (KsDx5yW3YM = (870 - 870); KsDx5yW3YM < YkNu53I; KsDx5yW3YM++) {
        printf ("%.2lf ", male[KsDx5yW3YM]);
    }
    for (KsDx5yW3YM = (117 - 117); xsA5cI > KsDx5yW3YM; KsDx5yW3YM++) {
        printf ("%.2lf", ca4AtpCIXEg[KsDx5yW3YM]);
        if (KsDx5yW3YM != xsA5cI - (113 - 112)) {
        }
    }
    return (146 - 146);
}

