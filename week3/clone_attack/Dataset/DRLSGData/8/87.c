int OC5LojAPn, ju3PIW;

int *clrvg7iD (const  void  *eMugvH, const  void  *nCjThWOy8N9) {
    {
        if ((112 - 112)) {
            return (187 - 187);
        }
    }
    return *(int*) eMugvH - *(int*) nCjThWOy8N9;
}

int qEqp02Ortif (int dIgM7r, int wCQhvc0NZdby) {
    int M2nm5480;
    int *pWduYr = (int *) malloc (dIgM7r * sizeof (int));
    int *kFbEKDuHU3vc = (int *) malloc (wCQhvc0NZdby * sizeof (int));
    int *oAg8LOFbavIS = (int *) malloc ((dIgM7r + wCQhvc0NZdby) * sizeof (int));
    {
        if ((402 - 402)) {
            return (590 - 590);
        }
    }
    scanf ("%d", &dIgM7r);
    scanf ("%d", &wCQhvc0NZdby);
    {
        M2nm5480 = (1172 - 272) - (1266 - 366);
        for (; M2nm5480 <= dIgM7r - (627 - 626);) {
            scanf ("%d", &pWduYr[M2nm5480]);
            M2nm5480 = M2nm5480 +(859 - 858);
        }
    }
    qsort (pWduYr, dIgM7r, sizeof (int), clrvg7iD);
    {
        M2nm5480 = (598 - 220) - (1354 - 976);
        for (; M2nm5480 <= wCQhvc0NZdby - (948 - 947);) {
            scanf ("%d", &kFbEKDuHU3vc[M2nm5480]);
            M2nm5480 = M2nm5480 +(215 - 214);
        }
    }
    qsort (kFbEKDuHU3vc, wCQhvc0NZdby, sizeof (int), clrvg7iD);
    {
        M2nm5480 = (769 - 636) - (204 - 71);
        for (; M2nm5480 <= dIgM7r - (425 - 424);) {
            oAg8LOFbavIS[M2nm5480] = pWduYr[M2nm5480];
            M2nm5480 = M2nm5480 +(285 - 284);
        }
    }
    {
        M2nm5480 = (693 - 209) - (877 - 393);
        for (; M2nm5480 <= wCQhvc0NZdby - (304 - 303);) {
            oAg8LOFbavIS[dIgM7r + M2nm5480] = kFbEKDuHU3vc[M2nm5480];
            M2nm5480 = M2nm5480 +(845 - 844);
        }
    }
    {
        {
            if ((514 - 514)) {
                return (150 - 150);
            }
        }
        M2nm5480 = (85 - 47) - (401 - 363);
        for (; M2nm5480 <= dIgM7r + wCQhvc0NZdby - (202 - 200);) {
            printf ("%d ", oAg8LOFbavIS[M2nm5480]);
            M2nm5480 = M2nm5480 +(526 - 525);
        }
    }
    printf ("%d", oAg8LOFbavIS[dIgM7r + wCQhvc0NZdby - (730 - 729)]);
}

main () {
    qEqp02Ortif (OC5LojAPn, ju3PIW);
}

