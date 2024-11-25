int main () {
    double  bfn1u4C5JXDd;
    int bfuNqBzF1;
    double  fECivae [(673 - 633)];
    int xTQCSB;
    char NNKqAJ [(246 - 206)] [(206 - 196)];
    int ld3cCRVg;
    int cuTBqfK;
    double  B3LTm7z [40];
    int bTxHe8fkuN0L;
    double  L70Zxm2gbYl [(513 - 473)];
    cuTBqfK = (227 - 227);
    scanf ("%d", &ld3cCRVg);
    bTxHe8fkuN0L = (155 - 155);
    {
        bfuNqBzF1 = (489 - 489);
        for (; bfuNqBzF1 < ld3cCRVg;) {
            scanf ("%s%lf", NNKqAJ[bfuNqBzF1], &fECivae[bfuNqBzF1]);
            if (!((965 - 965) != strcmp (NNKqAJ[bfuNqBzF1], "male"))) {
                L70Zxm2gbYl[bTxHe8fkuN0L] = fECivae[bfuNqBzF1];
                bTxHe8fkuN0L++;
            }
            else {
                if (!((772 - 772) != strcmp (NNKqAJ[bfuNqBzF1], "female"))) {
                    B3LTm7z[cuTBqfK] = fECivae[bfuNqBzF1];
                    cuTBqfK++;
                }
            }
            bfuNqBzF1++;
        }
    }
    for (xTQCSB = (793 - 792); xTQCSB <= bTxHe8fkuN0L; xTQCSB++) {
        for (bfuNqBzF1 = (330 - 330); bTxHe8fkuN0L - xTQCSB > bfuNqBzF1; bfuNqBzF1++) {
            if (L70Zxm2gbYl[bfuNqBzF1 + (877 - 876)] < L70Zxm2gbYl[bfuNqBzF1]) {
                bfn1u4C5JXDd = L70Zxm2gbYl[bfuNqBzF1 + (729 - 728)];
                L70Zxm2gbYl[bfuNqBzF1 + (445 - 444)] = L70Zxm2gbYl[bfuNqBzF1];
                L70Zxm2gbYl[bfuNqBzF1] = bfn1u4C5JXDd;
            }
        }
    }
    printf ("%.2lf", L70Zxm2gbYl[0]);
    for (xTQCSB = (851 - 850); cuTBqfK >= xTQCSB; xTQCSB++) {
        for (bfuNqBzF1 = (529 - 529); bfuNqBzF1 < cuTBqfK - xTQCSB; bfuNqBzF1++) {
            if (B3LTm7z[bfuNqBzF1 + (779 - 778)] < B3LTm7z[bfuNqBzF1]) {
                bfn1u4C5JXDd = B3LTm7z[bfuNqBzF1 + (443 - 442)];
                B3LTm7z[bfuNqBzF1 + (924 - 923)] = B3LTm7z[bfuNqBzF1];
                B3LTm7z[bfuNqBzF1] = bfn1u4C5JXDd;
            }
        }
    }
    {
        bfuNqBzF1 = (818 - 817);
        for (; bTxHe8fkuN0L > bfuNqBzF1;) {
            printf (" %.2lf", L70Zxm2gbYl[bfuNqBzF1]);
            bfuNqBzF1++;
        }
    }
    for (bfuNqBzF1 = cuTBqfK - 1; bfuNqBzF1 >= 0; bfuNqBzF1--) {
        printf (" %.2lf", B3LTm7z[bfuNqBzF1]);
    }
    return 0;
}

