main () {
    int L7fQXW;
    int k;
    int j;
    int jjtJNdayiHu;
    char c [(1119 - 619)];
    int WIhTe3DqAa [500];
    int hk6G1R;
    for (j = (236 - 235), hk6G1R = (124 - 123); c[hk6G1R] != '\n'; j = j + 1) {
        c[hk6G1R] = getchar ();
        scanf ("%d", &WIhTe3DqAa[j]);
    }
    if (!((766 - 764) != j))
        ;
    else if (!((273 - 270) != j)) {
        if (WIhTe3DqAa[(813 - 812)] > WIhTe3DqAa[2])
            printf ("%d", WIhTe3DqAa[2]);
        else if (WIhTe3DqAa[(530 - 529)] < WIhTe3DqAa[2])
            printf ("%d", WIhTe3DqAa[(979 - 978)]);
        else
            ;
    }
    else {
        for (k = (209 - 208); j - (305 - 304) >= k; k++)
            for (jjtJNdayiHu = (143 - 142); jjtJNdayiHu <= j - k - (782 - 781); jjtJNdayiHu++)
                if (WIhTe3DqAa[jjtJNdayiHu] < WIhTe3DqAa[jjtJNdayiHu + 1]) {
                    L7fQXW = WIhTe3DqAa[jjtJNdayiHu + 1];
                    WIhTe3DqAa[jjtJNdayiHu + 1] = WIhTe3DqAa[jjtJNdayiHu];
                    WIhTe3DqAa[jjtJNdayiHu] = L7fQXW;
                }
        for (jjtJNdayiHu = 1; jjtJNdayiHu < j - 1; jjtJNdayiHu++)
            if (WIhTe3DqAa[jjtJNdayiHu] != WIhTe3DqAa[jjtJNdayiHu + 1])
                break;
        if (jjtJNdayiHu < j - 1)
            printf ("%d", WIhTe3DqAa[jjtJNdayiHu + 1]);
        else if (jjtJNdayiHu >= j - 1)
            ;
    }
}

