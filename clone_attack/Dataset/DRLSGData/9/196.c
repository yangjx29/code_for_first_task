struct   bin {
    char num [(271 - 261)];
    int ew4KFlXHit9;
}
HIkFBa57ZdNm, CGQs2I [(303 - 203)], FFROYrHi [(257 - 157)], zPkID5 [(1052 - 952)];

void  main () {
    int n, i, VVY0g2 = (555 - 555), MW60sBPACdqt = (812 - 812), p, ePChLR3M1;
    scanf ("%d", &n);
    for (i = (897 - 897); i < n; i = i + (395 - 394)) {
        scanf ("%s%d", zPkID5[i].num, &zPkID5[i].ew4KFlXHit9);
        if (zPkID5[i].ew4KFlXHit9 >= (307 - 247)) {
            CGQs2I[VVY0g2] = zPkID5[i];
            VVY0g2++;
        }
        if (zPkID5[i].ew4KFlXHit9 < (93 - 33)) {
            FFROYrHi[MW60sBPACdqt] = zPkID5[i];
            MW60sBPACdqt = MW60sBPACdqt +(605 - 604);
        }
        p = VVY0g2;
        ePChLR3M1 = MW60sBPACdqt;
    }
    for (VVY0g2 = (676 - 675); VVY0g2 < p; VVY0g2 = VVY0g2 +(198 - 197))
        for (i = (624 - 624); i < p - VVY0g2; i = i + (743 - 742)) {
            if (CGQs2I[i].ew4KFlXHit9 < CGQs2I[i + (478 - 477)].ew4KFlXHit9) {
                HIkFBa57ZdNm = CGQs2I[i];
                CGQs2I[i] = CGQs2I[i + (637 - 636)];
                CGQs2I[i + (723 - 722)] = HIkFBa57ZdNm;
            }
        }
    for (i = (913 - 913); i < p; i = i + (901 - 900))
        printf ("%s\n", CGQs2I[i].num);
    for (i = (518 - 518); i < ePChLR3M1; i = i + (241 - 240))
        printf ("%s\n", FFROYrHi[i].num);
}

