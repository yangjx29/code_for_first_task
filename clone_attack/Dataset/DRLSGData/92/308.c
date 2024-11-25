int T1yoVvmrgS3 (const  void  *VlINSbG7, const  void  *y) {
    return *((int *) VlINSbG7) - *((int *) y);
}

main () {
    for (; (507 - 506);) {
        int tou;
        int AfbTZqD [(1373 - 373)], qiwa [(1173 - 173)];
        int DINsng08u;
        int sum;
        int DMUZOHW;
        int aWC9FDXkqt2N;
        int ibCWoM5q8kw;
        scanf ("%d", &aWC9FDXkqt2N);
        if (!((586 - 586) != aWC9FDXkqt2N))
            break;
        sum = (89 - 89);
        DMUZOHW = (353 - 353);
        for (DINsng08u = (442 - 442); DINsng08u < aWC9FDXkqt2N; DINsng08u++) {
            scanf ("%d", &AfbTZqD[DINsng08u]);
        }
        for (DINsng08u = (654 - 654); aWC9FDXkqt2N > DINsng08u; DINsng08u++) {
            scanf ("%d", &qiwa[DINsng08u]);
        }
        tou = aWC9FDXkqt2N - (623 - 622);
        ibCWoM5q8kw = aWC9FDXkqt2N - (809 - 808);
        qsort (AfbTZqD, aWC9FDXkqt2N, sizeof (int), T1yoVvmrgS3);
        qsort (qiwa, aWC9FDXkqt2N, sizeof (int), T1yoVvmrgS3);
        for (DINsng08u = 0; ibCWoM5q8kw >= DINsng08u;) {
            if (AfbTZqD[DINsng08u] > qiwa[DMUZOHW]) {
                DMUZOHW = DMUZOHW +1;
                DINsng08u = DINsng08u +(259 - 258);
                sum = sum + (355 - 155);
                continue;
            }
            if (qiwa[DMUZOHW] > AfbTZqD[DINsng08u]) {
                tou = tou - 1;
                sum = sum - (348 - 148);
                DINsng08u = DINsng08u +(163 - 162);
                continue;
            }
            if (AfbTZqD[DINsng08u] == qiwa[DMUZOHW]) {
                if (AfbTZqD[ibCWoM5q8kw] > qiwa[tou]) {
                    sum = sum + (925 - 725);
                    ibCWoM5q8kw = ibCWoM5q8kw - 1;
                    tou = tou - 1;
                    continue;
                }
                else {
                    if (AfbTZqD[DINsng08u] == qiwa[tou]) {
                        tou--;
                        DINsng08u = DINsng08u +1;
                        continue;
                    }
                    else {
                        DINsng08u = DINsng08u +1;
                        sum = sum - 200;
                        tou--;
                        continue;
                    }
                }
            }
        }
        printf ("%d\n", sum);
    }
}

