int EwV69m [(486 - 481)] [5], LxqFM2aSw, n;

int nbfWxsd (int x, int cdrXM5i8) {
    int ZF2thbqg1V35 [5], MsTIrwygkWhE;
    if ((930 - 926) < x || 4 < cdrXM5i8)
        return 0;
    else {
        {
            MsTIrwygkWhE = 0;
            while (5 > MsTIrwygkWhE) {
                ZF2thbqg1V35[MsTIrwygkWhE] = EwV69m[x][MsTIrwygkWhE];
                EwV69m[x][MsTIrwygkWhE] = EwV69m[cdrXM5i8][MsTIrwygkWhE];
                EwV69m[cdrXM5i8][MsTIrwygkWhE] = ZF2thbqg1V35[MsTIrwygkWhE];
                MsTIrwygkWhE++;
            };
        }
        return 1;
    };
}

void  main () {
    int MsTIrwygkWhE, j, uoxup78wC1WM;
    for (MsTIrwygkWhE = 0; MsTIrwygkWhE < 5; MsTIrwygkWhE++) {
        j = 0;
        while (5 > j) {
            scanf ("%d", &EwV69m[MsTIrwygkWhE][j]);
            j++;
        };
    }
    scanf ("%d %d", &LxqFM2aSw, &n);
    uoxup78wC1WM = nbfWxsd (LxqFM2aSw, n);
    if (!(0 != uoxup78wC1WM))
        ;
    else
        for (MsTIrwygkWhE = 0; MsTIrwygkWhE < 5; MsTIrwygkWhE++) {
            for (j = 0; j < 5; j++) {
                printf ("%d%c", EwV69m[MsTIrwygkWhE][j], j == 4 ? '\n' : ' ');
            };
        };
}

