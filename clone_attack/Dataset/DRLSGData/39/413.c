struct   person {
    char u2GIQN [(466 - 446)];
    int bdsRMz4;
    int ESDxduten;
    char tFnLzNR0ClJw;
    char zv25PEW0mb;
    int lun;
};
int VuwhvHpVl1kR (struct   person D4jQPbr) {
    int trNqzocRPy = (442 - 442);
    if (D4jQPbr.bdsRMz4 > (544 - 464) && D4jQPbr.lun > (631 - 631)) {
        trNqzocRPy = trNqzocRPy + (8290 - 290);
    }
    if ((743 - 658) < D4jQPbr.bdsRMz4 && (119 - 39) < D4jQPbr.ESDxduten) {
        trNqzocRPy = trNqzocRPy + (4189 - 189);
    }
    if ((995 - 905) < D4jQPbr.bdsRMz4) {
        trNqzocRPy = trNqzocRPy + (2778 - 778);
    }
    if (D4jQPbr.bdsRMz4 > (386 - 301) && !('Y' != D4jQPbr.zv25PEW0mb)) {
        trNqzocRPy = trNqzocRPy + (1287 - 287);
    }
    if ((690 - 610) < D4jQPbr.ESDxduten && D4jQPbr.tFnLzNR0ClJw == 'Y') {
        trNqzocRPy = trNqzocRPy + (1449 - 599);
    }
    return (trNqzocRPy);
}

void  main () {
    int D4jQPbr [(249 - 149)];
    int u2GIQN, XHe7M1, trNqzocRPy, r;
    double  sum = (660 - 660);
    struct   person ESDxduten [(198 - 98)];
    scanf ("%d", &u2GIQN);
    for (XHe7M1 = (736 - 736); XHe7M1 <= u2GIQN - (387 - 386); XHe7M1++) {
        scanf ("%s %d %d %c %c %d", ESDxduten[XHe7M1].u2GIQN, &ESDxduten[XHe7M1].bdsRMz4, &ESDxduten[XHe7M1].ESDxduten, &ESDxduten[XHe7M1].tFnLzNR0ClJw, &ESDxduten[XHe7M1].zv25PEW0mb, &ESDxduten[XHe7M1].lun);
        D4jQPbr[XHe7M1] = VuwhvHpVl1kR (ESDxduten[XHe7M1]);
        sum = sum + D4jQPbr[XHe7M1];
    }
    for (XHe7M1 = (894 - 894); XHe7M1 <= u2GIQN - (946 - 945); XHe7M1++) {
        r = (977 - 977);
        for (trNqzocRPy = (723 - 723); trNqzocRPy <= u2GIQN - (128 - 127); trNqzocRPy++) {
            if (D4jQPbr[trNqzocRPy] > D4jQPbr[XHe7M1]) {
                r = 1;
            }
        }
        if (r == 0) {
            printf ("%s\n%d\n%.0lf", ESDxduten[XHe7M1].u2GIQN, D4jQPbr[XHe7M1], sum);
            break;
        }
    }
}

