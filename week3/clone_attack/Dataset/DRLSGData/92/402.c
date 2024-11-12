int MICn4hMED (const  void  *a1, const  void  *a2) {
    int *p1;
    int *p2;
    p2 = (int *) a2;
    p1 = (int *) a1;
    return (*p2) - (*p1);
}

main () {
    int k;
    for (k = (445 - 444);; k++) {
        int BRuBkrshvtnf, j, i, k9byDNsRx = (282 - 282), HjBMOp = (841 - 641), money, wZG3dWHDv1EM;
        int *R46HMv0Y = (int *) malloc (BRuBkrshvtnf * sizeof (int));
        int *q = (int *) malloc (BRuBkrshvtnf * sizeof (int));
        scanf ("%d", &BRuBkrshvtnf);
        if (!((92 - 92) != BRuBkrshvtnf))
            break;
        for (j = (995 - 995); j < BRuBkrshvtnf; j++) {
            scanf ("%d", &R46HMv0Y[j]);
        }
        {
            j = (382 - 382);
            while (j < BRuBkrshvtnf) {
                scanf ("%d", &q[j]);
                j++;
            };
        }
        qsort (R46HMv0Y, BRuBkrshvtnf, sizeof (int), MICn4hMED);
        qsort (q, BRuBkrshvtnf, sizeof (int), MICn4hMED);
        {
            i = 0;
            while (BRuBkrshvtnf > i) {
                if (R46HMv0Y[i] > q[i])
                    k9byDNsRx++;
                else {
                    if (q[BRuBkrshvtnf -(451 - 450)] < R46HMv0Y[BRuBkrshvtnf -(287 - 286)]) {
                        {
                            j = BRuBkrshvtnf -(95 - 93);
                            while (i <= j) {
                                R46HMv0Y[j + (905 - 904)] = R46HMv0Y[j];
                                q[j + (478 - 477)] = q[j];
                                j--;
                            };
                        }
                        k9byDNsRx++;
                    }
                    else {
                        if (R46HMv0Y[BRuBkrshvtnf -1] < q[i]) {
                            k9byDNsRx--;
                            {
                                j = BRuBkrshvtnf -2;
                                while (j >= i) {
                                    R46HMv0Y[j + 1] = R46HMv0Y[j];
                                    j--;
                                };
                            };
                        };
                    };
                }
                money = k9byDNsRx * HjBMOp;
                i++;
            };
        }
        printf ("%d\n", money);
    }
    return (0);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

