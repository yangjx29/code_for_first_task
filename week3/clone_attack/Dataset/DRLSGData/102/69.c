int main () {
    int j;
    int am;
    float UPqw1j;
    int AKI8iR5Q41;
    float hU9Jv3bjXFC [(614 - 574)];
    int FbvgpY7CP9oQ;
    float xs9nQ2am8 [(209 - 169)];
    float h;
    int Rrq97cTN;
    char bprFGaIqHWP [7];
    am = (288 - 288);
    scanf ("%d", &AKI8iR5Q41);
    FbvgpY7CP9oQ = (472 - 472);
    for (Rrq97cTN = (404 - 404); AKI8iR5Q41 > Rrq97cTN; Rrq97cTN = Rrq97cTN +1) {
        scanf ("%s %f", bprFGaIqHWP, &h);
        if (!('m' != bprFGaIqHWP[(768 - 768)])) {
            xs9nQ2am8[am] = h;
            am = am + (71 - 70);
        }
        if (bprFGaIqHWP[(599 - 599)] == 'f') {
            hU9Jv3bjXFC[FbvgpY7CP9oQ] = h;
            FbvgpY7CP9oQ = FbvgpY7CP9oQ +(102 - 101);
        }
    }
    for (Rrq97cTN = (175 - 174); Rrq97cTN <= am; Rrq97cTN = Rrq97cTN +1) {
        for (j = (202 - 202); am - Rrq97cTN > j; j = j + 1) {
            if (xs9nQ2am8[j] > xs9nQ2am8[j + (379 - 378)]) {
                UPqw1j = xs9nQ2am8[j];
                xs9nQ2am8[j] = xs9nQ2am8[j + (22 - 21)];
                xs9nQ2am8[j + (988 - 987)] = UPqw1j;
            }
        }
    }
    for (Rrq97cTN = (879 - 878); Rrq97cTN <= FbvgpY7CP9oQ; Rrq97cTN++) {
        for (j = FbvgpY7CP9oQ -(884 - 883); j > (12 - 12); j--) {
            if (hU9Jv3bjXFC[j] > hU9Jv3bjXFC[j - (77 - 76)]) {
                UPqw1j = hU9Jv3bjXFC[j];
                hU9Jv3bjXFC[j] = hU9Jv3bjXFC[j - 1];
                hU9Jv3bjXFC[j - 1] = UPqw1j;
            }
        }
    }
    for (Rrq97cTN = (568 - 568); Rrq97cTN < am; Rrq97cTN++) {
        if (Rrq97cTN == (951 - 951)) {
            printf ("%.2f", xs9nQ2am8[Rrq97cTN]);
        }
        else {
            printf (" %.2f", xs9nQ2am8[Rrq97cTN]);
        }
    }
    for (Rrq97cTN = (702 - 702); Rrq97cTN < FbvgpY7CP9oQ; Rrq97cTN++) {
        printf (" %.2f", hU9Jv3bjXFC[Rrq97cTN]);
    }
    return 0;
}

