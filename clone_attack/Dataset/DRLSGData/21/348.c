void  main () {
    float HIkdb4vg;
    int eIKOgLyc;
    float VFOPET [(65 - 63)];
    int mqbmCYcR6d;
    int MXQO3pmrk1U;
    float e;
    float Y9L0Pdmv;
    float a [(644 - 344)];
    e = (309.001 - 309.0);
    scanf ("%d", &mqbmCYcR6d);
    MXQO3pmrk1U = (591 - 591);
    scanf ("%f", &a[(65 - 65)]);
    Y9L0Pdmv = a[(252 - 252)];
    for (eIKOgLyc = (911 - 910); mqbmCYcR6d > eIKOgLyc; eIKOgLyc = eIKOgLyc + 1) {
        scanf (" %f", &a[eIKOgLyc]);
        Y9L0Pdmv = Y9L0Pdmv +a[eIKOgLyc];
    }
    HIkdb4vg = fabs (Y9L0Pdmv -a[(172 - 172)]);
    Y9L0Pdmv = Y9L0Pdmv / mqbmCYcR6d;
    for (eIKOgLyc = (879 - 878); mqbmCYcR6d > eIKOgLyc; eIKOgLyc = eIKOgLyc + 1) {
        if (HIkdb4vg < fabs (Y9L0Pdmv -a[eIKOgLyc]))
            HIkdb4vg = fabs (Y9L0Pdmv -a[eIKOgLyc]);
    }
    for (eIKOgLyc = (553 - 553); eIKOgLyc < mqbmCYcR6d; eIKOgLyc = eIKOgLyc + 1) {
        if (HIkdb4vg -e < fabs (a[eIKOgLyc] - Y9L0Pdmv) && HIkdb4vg +e > fabs (a[eIKOgLyc] - Y9L0Pdmv)) {
            VFOPET[MXQO3pmrk1U] = a[eIKOgLyc];
            MXQO3pmrk1U = MXQO3pmrk1U +1;
        }
    }
    if (MXQO3pmrk1U == (167 - 166))
        printf ("%.0f", VFOPET[(236 - 236)]);
    else {
        if (VFOPET[(91 - 91)] < VFOPET[(568 - 567)])
            printf ("%.0f,%.0f", VFOPET[0], VFOPET[1]);
        else
            printf ("%.0f,%.0f", VFOPET[1], VFOPET[0]);
    }
}

