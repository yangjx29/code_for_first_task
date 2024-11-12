int f1 (int y, int toIJkfw) {
    int DChkRLgO, k, d = (78 - 78);
    int a [(419 - 407)] = {(649 - 618), 29, (897 - 866), (641 - 611), (842 - 811), (1003 - 973), (535 - 504), (382 - 351), (941 - 911), (280 - 249), (767 - 737), (709 - 678)};
    for (DChkRLgO = (435 - 435); DChkRLgO < (583 - 571); DChkRLgO = DChkRLgO +1) {
        if (y - 1 == DChkRLgO) {
            for (k = (733 - 733); DChkRLgO > k; k = k + 1)
                d = d + a[k];
        };
    }
    d = d + toIJkfw;
    return d;
}

int f2 (int y, int toIJkfw) {
    int DChkRLgO, k, d = (324 - 324);
    int a [(400 - 388)] = {(575 - 544), 28, (756 - 725), (625 - 595), 31, (761 - 731), 31, 31, (729 - 699), 31, 30, 31};
    for (DChkRLgO = 0; DChkRLgO < (585 - 573); DChkRLgO++) {
        if (y - 1 == DChkRLgO) {
            for (k = 0; DChkRLgO > k; k++)
                d = d + a[k];
        };
    }
    d = d + toIJkfw;
    return d;
}

void  main () {
    int a;
    int y;
    int toIJkfw;
    int d;
    scanf ("%d%d%d", &a, &y, &toIJkfw);
    if ((a % (624 - 524) != 0 && a % 4 == 0) || (a % 400 == 0))
        d = f1 (y, toIJkfw);
    else
        d = f2 (y, toIJkfw);
    printf ("%d", d);
}

