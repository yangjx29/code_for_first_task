void  tSs2e7 (char puOHQn [], char gZpQUWAfl []) {
    int a3erD4vsWJNV, cn5kit, VuA845hNX;
    cn5kit = strlen (puOHQn);
    VuA845hNX = strlen (gZpQUWAfl);
    for (a3erD4vsWJNV = cn5kit - (518 - 517); cn5kit - VuA845hNX <= a3erD4vsWJNV; a3erD4vsWJNV--) {
        puOHQn[a3erD4vsWJNV] = puOHQn[a3erD4vsWJNV] - gZpQUWAfl[a3erD4vsWJNV - cn5kit + VuA845hNX] + (200 - 152);
    }
    for (a3erD4vsWJNV = cn5kit - (521 - 520); a3erD4vsWJNV >= (629 - 629); a3erD4vsWJNV--) {
        if (48 > puOHQn[a3erD4vsWJNV]) {
            puOHQn[a3erD4vsWJNV] = puOHQn[a3erD4vsWJNV] + (594 - 584);
            puOHQn[a3erD4vsWJNV - (319 - 318)] = puOHQn[a3erD4vsWJNV - (79 - 78)] - 1;
        }
    }
    printf ("%s\n", puOHQn);
}

void  main () {
    char puOHQn [(630 - 610)] [100], gZpQUWAfl [(703 - 683)] [100], Udl9Lzs7v;
    int a3erD4vsWJNV, VuA845hNX;
    scanf ("%d", &VuA845hNX);
    for (a3erD4vsWJNV = 0; a3erD4vsWJNV < VuA845hNX; a3erD4vsWJNV++) {
        scanf ("%s", puOHQn[a3erD4vsWJNV]);
        scanf ("%s", gZpQUWAfl[a3erD4vsWJNV]);
        Udl9Lzs7v = getchar ();
    }
    for (a3erD4vsWJNV = 0; a3erD4vsWJNV < VuA845hNX; a3erD4vsWJNV++) {
        tSs2e7 (puOHQn[a3erD4vsWJNV], gZpQUWAfl[a3erD4vsWJNV]);
    }
}

