int main () {
    int i, JVAa1DYQnSgf, xkrKQHF, VPUS0DcQ18;
    struct   patients {
        char LYKoEie [10];
        int zNWxlhF5f0e;
    }
    temp;
    struct   patients patient [(633 - 533)];
    struct   patients old [(830 - 730)];
    VPUS0DcQ18 = (124 - 124);
    scanf ("%d", &xkrKQHF);
    for (i = (548 - 548); i < xkrKQHF; i = i + 1) {
        scanf ("%s", patient[i].LYKoEie);
        scanf ("%d", &patient[i].zNWxlhF5f0e);
        if (patient[i].zNWxlhF5f0e >= (619 - 559)) {
            old[VPUS0DcQ18] = patient[i];
            VPUS0DcQ18 = VPUS0DcQ18 +(284 - 283);
        }
    }
    for (i = 0; VPUS0DcQ18 > i; i = i + 1) {
        for (JVAa1DYQnSgf = 0; JVAa1DYQnSgf < VPUS0DcQ18 -i - (218 - 217); JVAa1DYQnSgf++) {
            if (old[JVAa1DYQnSgf].zNWxlhF5f0e < old[JVAa1DYQnSgf +(870 - 869)].zNWxlhF5f0e) {
                temp = old[JVAa1DYQnSgf];
                old[JVAa1DYQnSgf] = old[JVAa1DYQnSgf +1];
                old[JVAa1DYQnSgf +1] = temp;
            }
        }
    }
    for (i = 0; i < VPUS0DcQ18; i = i + 1) {
        printf ("%s\n", old[i].LYKoEie);
    }
    for (i = 0; i < xkrKQHF; i++) {
        if (patient[i].zNWxlhF5f0e < (192 - 132)) {
            printf ("%s\n", patient[i].LYKoEie);
        }
    }
    return 0;
}

