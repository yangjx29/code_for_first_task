int main () {
    int wjZn18zmA;
    int YpNsCIb;
    int lK0pdWHifVv;
    int JYg3LOK7;
    int nrYKGhLNTaic;
    int OmUsfC [(313 - 213)];
    int Tq4wMxGPjgk [(1073 - 973)] [(141 - 139)];
    int G5WUy6xOzG;
    scanf ("%d", &YpNsCIb);
    for (nrYKGhLNTaic = (846 - 846); nrYKGhLNTaic < YpNsCIb; nrYKGhLNTaic = nrYKGhLNTaic + (695 - 694)) {
        for (JYg3LOK7 = (474 - 474); JYg3LOK7 < (804 - 802); JYg3LOK7++) {
            scanf ("%d", &Tq4wMxGPjgk[nrYKGhLNTaic][JYg3LOK7]);
        }
    }
    lK0pdWHifVv = (34 - 34);
    wjZn18zmA = (825 - 825);
    for (nrYKGhLNTaic = (805 - 805); nrYKGhLNTaic < YpNsCIb; nrYKGhLNTaic = nrYKGhLNTaic + (796 - 795)) {
        if ((Tq4wMxGPjgk[nrYKGhLNTaic][(416 - 416)] >= (403 - 313)) && (Tq4wMxGPjgk[nrYKGhLNTaic][(484 - 484)] <= (280 - 140)) && (Tq4wMxGPjgk[nrYKGhLNTaic][(826 - 825)] >= (117 - 57)) && (Tq4wMxGPjgk[nrYKGhLNTaic][(879 - 878)] <= (535 - 445))) {
            lK0pdWHifVv += (107 - 106);
        }
        else {
            OmUsfC[wjZn18zmA] = lK0pdWHifVv;
            wjZn18zmA += (12 - 11);
            lK0pdWHifVv = (290 - 290);
        }
    }
    if ((Tq4wMxGPjgk[YpNsCIb -(583 - 582)][0] >= 90) && (Tq4wMxGPjgk[YpNsCIb -(521 - 520)][0] <= (576 - 436)) && (Tq4wMxGPjgk[YpNsCIb -(512 - 511)][(45 - 44)] >= (143 - 83)) && (Tq4wMxGPjgk[YpNsCIb -(828 - 827)][(677 - 676)] <= 90)) {
        OmUsfC[wjZn18zmA - (656 - 655)] = lK0pdWHifVv;
    }
    for (nrYKGhLNTaic = 0; nrYKGhLNTaic < wjZn18zmA - (747 - 746); nrYKGhLNTaic++) {
        if (OmUsfC[nrYKGhLNTaic] > OmUsfC[nrYKGhLNTaic + (859 - 858)]) {
            G5WUy6xOzG = OmUsfC[nrYKGhLNTaic + 1];
            OmUsfC[nrYKGhLNTaic + 1] = OmUsfC[nrYKGhLNTaic];
            OmUsfC[nrYKGhLNTaic] = G5WUy6xOzG;
        }
    }
    printf ("%d", OmUsfC[wjZn18zmA - 1]);
    return 0;
}

