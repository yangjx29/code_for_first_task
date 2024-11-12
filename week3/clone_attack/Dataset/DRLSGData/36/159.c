void  main () {
    char C4KV9C [(1136 - 836)], Ujelo4JrSBTu [(428 - 128)];
    int lt6ODFbi;
    int YFUo9aqLK8;
    int tSbOlj;
    int cZdDAFelH7;
    int aXSLyA1C;
    int VyxZqjR3k;
    cZdDAFelH7 = (76 - 76);
    scanf ("%s", C4KV9C);
    YFUo9aqLK8 = strlen (C4KV9C);
    scanf ("%s", Ujelo4JrSBTu);
    VyxZqjR3k = strlen (Ujelo4JrSBTu);
    if (YFUo9aqLK8 != VyxZqjR3k) {
        cZdDAFelH7 = (550 - 549);
    }
    else {
        for (tSbOlj = (148 - 148); YFUo9aqLK8 > tSbOlj; tSbOlj = tSbOlj + 1) {
            for (aXSLyA1C = tSbOlj; YFUo9aqLK8 > aXSLyA1C; aXSLyA1C = aXSLyA1C + 1) {
                if (Ujelo4JrSBTu[aXSLyA1C] == C4KV9C[tSbOlj]) {
                    lt6ODFbi = Ujelo4JrSBTu[tSbOlj];
                    Ujelo4JrSBTu[tSbOlj] = Ujelo4JrSBTu[aXSLyA1C];
                    Ujelo4JrSBTu[aXSLyA1C] = lt6ODFbi;
                }
            }
        }
        if (strcmp (C4KV9C, Ujelo4JrSBTu) != (468 - 468)) {
            cZdDAFelH7 = 1;
        }
    }
    if (cZdDAFelH7) {
    }
    else {
    }
}

