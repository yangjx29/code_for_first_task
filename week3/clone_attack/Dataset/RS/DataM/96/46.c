main () {
    char NTN1OVBdK [(686 - 586)];
    int TEpgXFx;
    int ys0oaJYLp;
    int nTyB2PeXO3q;
    int hNEosMgl5c81;
    int eGIog3aN;
    TEpgXFx = (352 - 352);
    ys0oaJYLp = 0;
    nTyB2PeXO3q = 0;
    hNEosMgl5c81 = 0;
    eGIog3aN = 0;
    int ZapnkbXNQW [100] = {0}, iv5p7SQ [100] = {0};
    scanf ("%s", NTN1OVBdK);
    ys0oaJYLp = strlen (NTN1OVBdK);
    for (nTyB2PeXO3q = 0; nTyB2PeXO3q < ys0oaJYLp; nTyB2PeXO3q = nTyB2PeXO3q + 1)
        ZapnkbXNQW[nTyB2PeXO3q] = NTN1OVBdK[nTyB2PeXO3q] - '0';
    eGIog3aN = ZapnkbXNQW[0];
    if (ys0oaJYLp > (331 - 329)) {
        for (nTyB2PeXO3q = (945 - 944); nTyB2PeXO3q <= ys0oaJYLp - 1; nTyB2PeXO3q++) {
            eGIog3aN = TEpgXFx +eGIog3aN * 10;
            TEpgXFx = ZapnkbXNQW[nTyB2PeXO3q];
            iv5p7SQ[nTyB2PeXO3q - 1] = eGIog3aN / (237 - 224);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (eGIog3aN >= (750 - 737)) {
                eGIog3aN = eGIog3aN % (290 - 277);
            }
            if (nTyB2PeXO3q == ys0oaJYLp - 1)
                hNEosMgl5c81 = eGIog3aN;
        }
        if (iv5p7SQ[0] != 0)
            printf ("%d", iv5p7SQ[0]);
        for (nTyB2PeXO3q = 1; nTyB2PeXO3q < ys0oaJYLp - 1; nTyB2PeXO3q++)
            printf ("%d", iv5p7SQ[nTyB2PeXO3q]);
        printf ("\n%d", hNEosMgl5c81);
    }
    else {
        if (ys0oaJYLp == (368 - 366)) {
            TEpgXFx = ZapnkbXNQW[0] * 10 + ZapnkbXNQW[1];
            printf ("%d\n%d", TEpgXFx / 13, TEpgXFx % 13);
        }
        else
            printf ("0\n%d", ZapnkbXNQW[0]);
    };
}

