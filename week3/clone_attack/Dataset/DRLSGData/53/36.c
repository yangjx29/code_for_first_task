int main () {
    int wHdzmnjaGXU [300], lfz1wAQ [300], c1VGt2EHOc, ogwBtPY, lsdEGoibODL = 0, xSFYpbe, NTybWwz4E3AM = 0;
    scanf ("%d", &c1VGt2EHOc);
    for (ogwBtPY = 0; ogwBtPY < c1VGt2EHOc; ogwBtPY++) {
        scanf ("%d", &wHdzmnjaGXU[ogwBtPY]);
        NTybWwz4E3AM = 0;
        for (xSFYpbe = 0; xSFYpbe < ogwBtPY; xSFYpbe = xSFYpbe + 1) {
            if (wHdzmnjaGXU[ogwBtPY] == lfz1wAQ[xSFYpbe]) {
                NTybWwz4E3AM = 1;
                break;
            }
        }
        if (NTybWwz4E3AM == 0) {
            lfz1wAQ[lsdEGoibODL] = wHdzmnjaGXU[ogwBtPY];
            lsdEGoibODL = lsdEGoibODL + 1;
        }
    }
    {
        xSFYpbe = 0;
        while (xSFYpbe < lsdEGoibODL) {
            printf ("%d", lfz1wAQ[xSFYpbe]);
            if (xSFYpbe < lsdEGoibODL - 1)
                ;
            xSFYpbe = xSFYpbe + 1;
        }
    }
    return 0;
}

