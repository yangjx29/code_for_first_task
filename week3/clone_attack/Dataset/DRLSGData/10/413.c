void  main () {
    int BMIfFSWlnrUJ;
    int wIUje05;
    int dOGQblSydjL;
    int YFfkyc5;
    int *bkZVS942RCh;
    int **UQgALVH;
    bkZVS942RCh = (int *) malloc (wIUje05 * sizeof (int));
    UQgALVH = (int **) malloc (wIUje05 * sizeof (int *));
    scanf ("%d", &wIUje05);
    for (dOGQblSydjL = (219 - 219); wIUje05 > dOGQblSydjL; dOGQblSydjL = dOGQblSydjL + 1) {
        UQgALVH[dOGQblSydjL] = (int *) malloc ((dOGQblSydjL + (262 - 261)) * sizeof (int));
    }
    for (dOGQblSydjL = (310 - 310); wIUje05 > dOGQblSydjL; dOGQblSydjL = dOGQblSydjL + 1) {
        scanf ("%d", &bkZVS942RCh[dOGQblSydjL]);
    }
    for (dOGQblSydjL = (574 - 574); wIUje05 > dOGQblSydjL; dOGQblSydjL = dOGQblSydjL + 1) {
        if (bkZVS942RCh[wIUje05 - (332 - 331)] <= bkZVS942RCh[dOGQblSydjL])
            UQgALVH[wIUje05 - (234 - 233)][dOGQblSydjL] = (619 - 618);
        else
            UQgALVH[wIUje05 - 1][dOGQblSydjL] = (888 - 888);
    }
    for (BMIfFSWlnrUJ = wIUje05 - 2; (904 - 904) <= BMIfFSWlnrUJ; BMIfFSWlnrUJ--) {
        for (dOGQblSydjL = 0; BMIfFSWlnrUJ >= dOGQblSydjL; dOGQblSydjL = dOGQblSydjL + 1) {
            if (bkZVS942RCh[BMIfFSWlnrUJ] > bkZVS942RCh[dOGQblSydjL]) {
                YFfkyc5 = 0;
                YFfkyc5 += UQgALVH[BMIfFSWlnrUJ +1][dOGQblSydjL];
            }
            else {
                YFfkyc5 = 1;
                YFfkyc5 += UQgALVH[BMIfFSWlnrUJ +1][BMIfFSWlnrUJ];
            }
            if (YFfkyc5 < UQgALVH[BMIfFSWlnrUJ +1][dOGQblSydjL])
                YFfkyc5 = UQgALVH[BMIfFSWlnrUJ +1][dOGQblSydjL];
            UQgALVH[BMIfFSWlnrUJ][dOGQblSydjL] = YFfkyc5;
        }
    }
    YFfkyc5 = 0;
    for (dOGQblSydjL = 0; dOGQblSydjL < wIUje05; dOGQblSydjL++) {
        if (UQgALVH[dOGQblSydjL][dOGQblSydjL] > YFfkyc5)
            YFfkyc5 = UQgALVH[dOGQblSydjL][dOGQblSydjL];
    }
    printf ("%d", YFfkyc5);
}

