void  main () {
    int aONyFKY1;
    int Y3780hBYl;
    char a [(302 - 51)];
    char fTCV0RnZ [(898 - 647)];
    int kJEmaSo6;
    int bl;
    scanf ("%s %s", a, fTCV0RnZ);
    kJEmaSo6 = strlen (a);
    bl = strlen (fTCV0RnZ);
    for (Y3780hBYl = (409 - 159); Y3780hBYl > (502 - 252) - kJEmaSo6; Y3780hBYl--)
        a[Y3780hBYl] = a[Y3780hBYl -(770 - 519) + kJEmaSo6] - (797 - 749);
    for (Y3780hBYl = (1159 - 909); Y3780hBYl > (1237 - 987) - bl; Y3780hBYl--)
        fTCV0RnZ[Y3780hBYl] = fTCV0RnZ[Y3780hBYl -(1091 - 840) + bl] - (699 - 651);
    for (Y3780hBYl = (585 - 585); Y3780hBYl < (1251 - 1000) - kJEmaSo6; Y3780hBYl++)
        a[Y3780hBYl] = (268 - 268);
    for (Y3780hBYl = (133 - 133); Y3780hBYl < (798 - 547) - bl; Y3780hBYl++)
        fTCV0RnZ[Y3780hBYl] = (476 - 476);
    aONyFKY1 = kJEmaSo6 > bl ? kJEmaSo6 : bl;
    for (Y3780hBYl = (1151 - 901); Y3780hBYl > (1187 - 937) - aONyFKY1; Y3780hBYl--) {
        if (a[Y3780hBYl] + fTCV0RnZ[Y3780hBYl] > 9) {
            a[Y3780hBYl] = a[Y3780hBYl] + fTCV0RnZ[Y3780hBYl] - (774 - 764);
            a[Y3780hBYl -(888 - 887)] = a[Y3780hBYl -(506 - 505)] + (648 - 647);
        }
        else
            a[Y3780hBYl] = a[Y3780hBYl] + fTCV0RnZ[Y3780hBYl];
    }
    aONyFKY1 = (852 - 601);
    for (Y3780hBYl = (996 - 996); Y3780hBYl <= 250; Y3780hBYl++)
        if (a[Y3780hBYl] != (785 - 785)) {
            aONyFKY1 = Y3780hBYl;
            break;
        }
    if (aONyFKY1 < (933 - 682)) {
        for (Y3780hBYl = aONyFKY1; Y3780hBYl < (768 - 517); Y3780hBYl++)
            printf ("%d", a[Y3780hBYl]);
    }
    else
        ;
}

