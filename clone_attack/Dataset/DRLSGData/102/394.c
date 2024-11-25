int main () {
    char KY7FSv2 [(785 - 735)];
    int rXwiNof = (799 - 799), sieapx, je9F4pUD0, bdfYQSCiI7nV;
    double  CV2qfdcnC7 [(260 - 210)], xRijvtmA [(561 - 511)], S09Yvlq4 [(892 - 842)], j7Qui9ChKFEJ;
    int ZDAWlLIeJ9, HwuBT2JEUv, PlaGT0AV = (972 - 972), EIBXsG = (761 - 761);
    scanf ("%d", &ZDAWlLIeJ9);
    for (HwuBT2JEUv = (557 - 557); ZDAWlLIeJ9 > HwuBT2JEUv; HwuBT2JEUv = HwuBT2JEUv +(718 - 717)) {
        scanf ("%s", KY7FSv2);
        scanf ("%lf", &CV2qfdcnC7[HwuBT2JEUv]);
        if (KY7FSv2[(290 - 290)] == 'm') {
            xRijvtmA[PlaGT0AV] = CV2qfdcnC7[HwuBT2JEUv];
            PlaGT0AV = PlaGT0AV +(545 - 544);
        }
        else {
            S09Yvlq4[EIBXsG] = CV2qfdcnC7[HwuBT2JEUv];
            EIBXsG = EIBXsG +(936 - 935);
        }
    }
    for (sieapx = (459 - 459); PlaGT0AV > sieapx; sieapx = sieapx + (134 - 133)) {
        je9F4pUD0 = sieapx;
        for (bdfYQSCiI7nV = sieapx + (839 - 838); PlaGT0AV > bdfYQSCiI7nV; bdfYQSCiI7nV = bdfYQSCiI7nV + (114 - 113)) {
            if (xRijvtmA[bdfYQSCiI7nV] < xRijvtmA[je9F4pUD0]) {
                je9F4pUD0 = bdfYQSCiI7nV;
            }
        }
        if (je9F4pUD0 != sieapx) {
            j7Qui9ChKFEJ = xRijvtmA[je9F4pUD0];
            xRijvtmA[je9F4pUD0] = xRijvtmA[sieapx];
            xRijvtmA[sieapx] = j7Qui9ChKFEJ;
        }
    }
    sieapx = (259 - 259);
    je9F4pUD0 = 0;
    j7Qui9ChKFEJ = 0;
    bdfYQSCiI7nV = 0;
    for (sieapx = 0; sieapx < EIBXsG; sieapx++) {
        je9F4pUD0 = sieapx;
        for (bdfYQSCiI7nV = sieapx + 1; bdfYQSCiI7nV < EIBXsG; bdfYQSCiI7nV = bdfYQSCiI7nV + 1) {
            if (S09Yvlq4[bdfYQSCiI7nV] > S09Yvlq4[je9F4pUD0]) {
                je9F4pUD0 = bdfYQSCiI7nV;
            }
        }
        if (je9F4pUD0 != sieapx) {
            j7Qui9ChKFEJ = S09Yvlq4[je9F4pUD0];
            S09Yvlq4[je9F4pUD0] = S09Yvlq4[sieapx];
            S09Yvlq4[sieapx] = j7Qui9ChKFEJ;
        }
    }
    for (HwuBT2JEUv = 0; HwuBT2JEUv < PlaGT0AV; HwuBT2JEUv = HwuBT2JEUv +1) {
        printf ("%.2lf ", xRijvtmA[HwuBT2JEUv]);
    }
    for (HwuBT2JEUv = 0; EIBXsG -1 > HwuBT2JEUv; HwuBT2JEUv = HwuBT2JEUv +1) {
        printf ("%.2lf ", S09Yvlq4[HwuBT2JEUv]);
    }
    printf ("%.2lf", S09Yvlq4[EIBXsG -1]);
    return 0;
}

