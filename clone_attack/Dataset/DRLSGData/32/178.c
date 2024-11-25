void  f (int aa [], int bb [], int rKnDHT1o [], int eA9Vky6);
int d [(54 - 34)] [(174 - 73)] = {(921 - 921)};

main () {
    int h;
    int lens1;
    int a2EvQ5;
    int bgYw4jUS;
    int eA9Vky6 [20];
    int i;
    int RAL5ZNh871x9;
    int n;
    int r;
    r = (882 - 882);
    h = (43 - 43);
    scanf ("%d", &n);
    for (i = (316 - 316); i < n; i = i + 1) {
        char E1Xusvn6x2KF [101];
        int rKnDHT1o [101] = {0};
        int aa [(749 - 648)];
        int bb [101];
        char f7X6w4KWgB [101];
        scanf ("%s", f7X6w4KWgB);
        lens1 = strlen (f7X6w4KWgB);
        scanf ("%s", E1Xusvn6x2KF);
        bgYw4jUS = strlen (E1Xusvn6x2KF);
        for (r = 0; r < strlen (f7X6w4KWgB); r = r + 1)
            aa[r + 101 - strlen (f7X6w4KWgB)] = f7X6w4KWgB[r] - '0';
        eA9Vky6[i] = (lens1 > bgYw4jUS) ? lens1 : bgYw4jUS;
        for (r = 0; strlen (E1Xusvn6x2KF) > r; r = r + 1)
            bb[r + 101 - strlen (E1Xusvn6x2KF)] = E1Xusvn6x2KF[r] - '0';
        for (r = 101 - eA9Vky6[i]; r < 101 - eA9Vky6[i] + (lens1 - bgYw4jUS); r = r + 1)
            bb[r] = 0;
        f (aa, bb, rKnDHT1o, eA9Vky6[i]);
        for (r = (762 - 662); r >= 101 - eA9Vky6[i]; r = r - 1)
            d[h][r] = rKnDHT1o[r];
        h = h + 1;
        printf ("\n");
    }
    for (r = 0; r < h; r = r + 1) {
        for (RAL5ZNh871x9 = 101 - eA9Vky6[r]; 100 >= RAL5ZNh871x9; RAL5ZNh871x9 = RAL5ZNh871x9 +1)
            if (RAL5ZNh871x9 != 0)
                break;
        for (a2EvQ5 = RAL5ZNh871x9; 100 >= a2EvQ5; a2EvQ5 = a2EvQ5 + 1)
            printf ("%d", d[r][a2EvQ5]);
        printf ("\n");
    }
    printf ("\n");
}

void  f (int aa [], int bb [], int rKnDHT1o [], int eA9Vky6) {
    int i;
    for (i = 100; i >= 101 - eA9Vky6; i = i - 1)
        rKnDHT1o[i] = aa[i] - bb[i];
    for (i = 100; i >= 101 - eA9Vky6; i = i - 1)
        if (rKnDHT1o[i] < 0) {
            rKnDHT1o[i] = rKnDHT1o[i] + 10;
            rKnDHT1o[i - 1]--;
        }
    return;
}

