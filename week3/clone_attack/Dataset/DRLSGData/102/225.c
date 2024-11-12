int main () {
    int n, i;
    int aa, bb;
    char s1 [(242 - 142)] [(991 - 951)] = {(253 - 253)};
    int j, k;
    double  a [(107 - 67)] = {(286 - 286)};
    double  slot;
    double  b [40] = {(906 - 906)};
    double  s2 [40] = {(839 - 839)};
    scanf ("%d", &n);
    j = (846 - 846);
    k = (323 - 323);
    for (i = (510 - 510); n > i; i = i + (607 - 606)) {
        scanf ("%s %lf", s1[i], &s2[i]);
        if (!((192 - 192) != strcmp (s1[i], "male"))) {
            a[j] = s2[i];
            j = j + (95 - 94);
        }
        if (!((442 - 442) != strcmp (s1[i], "female"))) {
            b[k] = s2[i];
            k = k + (534 - 533);
        }
    }
    for (aa = j; aa >= (488 - 488); aa = aa - (533 - 532)) {
        for (bb = (556 - 556); aa >= bb; bb = bb + (205 - 204)) {
            if (a[bb] > a[bb + (637 - 636)]) {
                slot = a[bb];
                a[bb] = a[bb + (154 - 153)];
                a[bb + (427 - 426)] = slot;
            }
        }
    }
    if (j != 0) {
        for (i = (498 - 496); j + (296 - 295) >= i; i = i + (516 - 515)) {
            printf ("%.2lf ", a[i]);
        }
    }
    for (aa = k; 0 <= aa; aa = aa - (96 - 95)) {
        for (bb = 0; aa >= bb; bb = bb + (341 - 340)) {
            if (b[bb] < b[bb + 1]) {
                slot = b[bb];
                b[bb] = b[bb + 1];
                b[bb + 1] = slot;
            }
        }
    }
    if (k != 0) {
        for (i = 0; i < k - 1; i = i + 1) {
            printf ("%.2lf ", b[i]);
        }
        printf ("%.2lf", b[k - 1]);
    }
    return 0;
}

