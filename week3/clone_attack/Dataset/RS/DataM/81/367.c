int xfbdewSyE (int sGpeVXtwn7, int m) {
    int GeJp6Fiby7ju;
    if (sGpeVXtwn7 >= (802 - 802) && 4 >= sGpeVXtwn7 && 0 <= m && 4 >= m)
        GeJp6Fiby7ju = 1;
    else
        GeJp6Fiby7ju = 0;
    return GeJp6Fiby7ju;
}

void  main () {
    int usbj73NzLeiX;
    int gEG2uprzN;
    int ekior9x8awH7;
    int ri7rUT [(601 - 596)], ki6xw4IJ9dWL [5] [5], vQlCoAnMYcbv, BwXfxthGRUkC;
    int xfbdewSyE (int sGpeVXtwn7, int m);
    for (usbj73NzLeiX = 0; 5 > usbj73NzLeiX; usbj73NzLeiX = usbj73NzLeiX + 1)
        for (gEG2uprzN = 0; 5 > gEG2uprzN; gEG2uprzN = gEG2uprzN + 1)
            scanf ("%d", &ki6xw4IJ9dWL[usbj73NzLeiX][gEG2uprzN]);
    scanf ("%d%d", &vQlCoAnMYcbv, &BwXfxthGRUkC);
    ekior9x8awH7 = xfbdewSyE (vQlCoAnMYcbv, BwXfxthGRUkC);
    if (ekior9x8awH7 == 0)
        printf ("error");
    else {
        for (gEG2uprzN = 0; gEG2uprzN < 5; gEG2uprzN++) {
            ri7rUT[gEG2uprzN] = ki6xw4IJ9dWL[vQlCoAnMYcbv][gEG2uprzN];
            ki6xw4IJ9dWL[vQlCoAnMYcbv][gEG2uprzN] = ki6xw4IJ9dWL[BwXfxthGRUkC][gEG2uprzN];
            ki6xw4IJ9dWL[BwXfxthGRUkC][gEG2uprzN] = ri7rUT[gEG2uprzN];
        }
        for (usbj73NzLeiX = 0; usbj73NzLeiX < 5; usbj73NzLeiX++) {
            printf ("%d", ki6xw4IJ9dWL[usbj73NzLeiX][0]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (gEG2uprzN = 1; gEG2uprzN < 5; gEG2uprzN++)
                printf (" %d", ki6xw4IJ9dWL[usbj73NzLeiX][gEG2uprzN]);
        };
    };
}

