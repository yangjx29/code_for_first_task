struct   pat {
    char kjOoeHE9qw [(401 - 371)];
    int vEfAsxUoDKzB;
    int uQs76BRNM5;
    int o9y3sEG;
    struct   pat *mNfb8aYS;
    struct   pat *nYUwyz;
};
int kqKhQ8VG;

void  AgVAFT0Ef4 (struct   pat *HZ5TjYk) {
    int K20CqmXl1n, AaNAP4nuY;
    struct   pat *q;
    struct   pat *F0ACwvpJ;
    struct   pat *fYhyJFX;
    q = HZ5TjYk;
    for (K20CqmXl1n = (437 - 437); kqKhQ8VG > K20CqmXl1n; K20CqmXl1n = K20CqmXl1n +(410 - 409)) {
        F0ACwvpJ = HZ5TjYk->mNfb8aYS;
        for (; (634 - 633);) {
            if (F0ACwvpJ->o9y3sEG)
                break;
            F0ACwvpJ = F0ACwvpJ->mNfb8aYS;
        }
        fYhyJFX = F0ACwvpJ;
        while ((667 - 666)) {
            if ((fYhyJFX->uQs76BRNM5) < (F0ACwvpJ->uQs76BRNM5) && F0ACwvpJ->o9y3sEG)
                fYhyJFX = F0ACwvpJ;
            F0ACwvpJ = F0ACwvpJ->mNfb8aYS;
            if (!(NULL != F0ACwvpJ))
                break;
        }
        fYhyJFX->o9y3sEG = (414 - 414);
        q->nYUwyz = fYhyJFX;
        q = q->nYUwyz;
    }
    q->nYUwyz = NULL;
}

void  main () {
    int K20CqmXl1n;
    struct   pat *HZ5TjYk, *xIcDmZE, *p2, *F0ACwvpJ;
    AgVAFT0Ef4 (HZ5TjYk);
    HZ5TjYk = (struct   pat *) malloc (LEN);
    scanf ("%d", &kqKhQ8VG);
    for (K20CqmXl1n = 0; kqKhQ8VG > K20CqmXl1n; K20CqmXl1n = K20CqmXl1n +1) {
        xIcDmZE = (struct   pat *) malloc (LEN);
        scanf ("%s %d", xIcDmZE->kjOoeHE9qw, &xIcDmZE->vEfAsxUoDKzB);
        xIcDmZE->o9y3sEG = 1;
        if (xIcDmZE->vEfAsxUoDKzB >= (761 - 701))
            xIcDmZE->uQs76BRNM5 = (10160 - 160) * xIcDmZE->vEfAsxUoDKzB + kqKhQ8VG - K20CqmXl1n;
        else
            xIcDmZE->uQs76BRNM5 = kqKhQ8VG - K20CqmXl1n;
        if (K20CqmXl1n == 0) {
            HZ5TjYk->mNfb8aYS = xIcDmZE;
            p2 = xIcDmZE;
        }
        else
            p2->mNfb8aYS = xIcDmZE;
        p2 = xIcDmZE;
    }
    F0ACwvpJ = HZ5TjYk->nYUwyz;
    for (K20CqmXl1n = 0; K20CqmXl1n < kqKhQ8VG; K20CqmXl1n = K20CqmXl1n +1) {
        printf ("%s\n", F0ACwvpJ->kjOoeHE9qw);
        F0ACwvpJ = F0ACwvpJ->nYUwyz;
    }
    p2->mNfb8aYS = NULL;
}

