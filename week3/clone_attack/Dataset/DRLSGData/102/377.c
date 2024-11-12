int main () {
    int K;
    int i;
    int k;
    int j;
    int n;
    int J;
    char xb [(334 - 294)] [(322 - 315)];
    double  e;
    double  hm [(164 - 124)], hf [(577 - 537)];
    int p;
    double  h [(593 - 553)];
    scanf ("%d", &n);
    k = (598 - 598);
    j = (919 - 919);
    for (i = (131 - 131); n > i; i = i + (653 - 652)) {
        scanf ("%s %lf", &xb[i], &h[i]);
        if (!((664 - 660) != strlen (xb[i]))) {
            hm[j] = h[i];
            j = j + (193 - 192);
            J = j;
        }
        else {
            hf[k] = h[i];
            k = k + (583 - 582);
            K = k;
        }
    }
    for (p = (849 - 848); p <= J; p++) {
        for (j = (445 - 445); j < J -(446 - 445); j = j + (356 - 355)) {
            if (hm[j + (334 - 333)] < hm[j]) {
                e = hm[j + (622 - 621)];
                hm[j + (858 - 857)] = hm[j];
                hm[j] = e;
            }
        }
    }
    for (j = (332 - 332); J > j; j = j + 1) {
        printf ("%.2lf ", hm[j]);
    }
    {
        p = (1310 - 924) - 385;
        for (; K >= p;) {
            for (k = (265 - 265); K -(611 - 610) > k; k = k + (912 - 911)) {
                if (hf[k] < hf[k + (50 - 49)]) {
                    e = hf[k + (891 - 890)];
                    hf[k + (491 - 490)] = hf[k];
                    hf[k] = e;
                }
            }
            p++;
        }
    }
    for (k = (276 - 276); k < K -(643 - 642); k++) {
        printf ("%.2lf ", hf[k]);
    }
    printf ("%.2lf", hf[K -1]);
    return (256 - 256);
}

