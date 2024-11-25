main () {
    int xvXwHVag;
    xvXwHVag = (641 - 641);
    int PfXa9Vm4Gj;
    int zkhlLuDeV7m;
    int k5NB0x8;
    int d76mF5svA2t;
    int beqYBLrOhf;
    int zjks6LtAwM;
    char vNvcRC0T4Ml [(532 - 276)], KZsn58L [(1084 - 828)], c [(441 - 185)];
    zjks6LtAwM = (690 - 690);
    PfXa9Vm4Gj = (404 - 404);
    zkhlLuDeV7m = (447 - 447);
    {
        k5NB0x8 = 869 - 869;
        while (k5NB0x8 < (913 - 657)) {
            vNvcRC0T4Ml[k5NB0x8] = '\0';
            KZsn58L[k5NB0x8] = '\0';
            c[k5NB0x8] = '\0';
            k5NB0x8 = k5NB0x8 + 1;
        };
    }
    scanf ("%s", vNvcRC0T4Ml);
    for (k5NB0x8 = (762 - 762); vNvcRC0T4Ml[k5NB0x8] != '\0'; k5NB0x8++) {
        zkhlLuDeV7m++;
    }
    scanf ("%s", KZsn58L);
    scanf ("%s", c);
    {
        k5NB0x8 = 628 - 628;
        while (KZsn58L[k5NB0x8] != '\0') {
            k5NB0x8++;
            PfXa9Vm4Gj++;
        };
    }
    {
        k5NB0x8 = 710 - 710;
        while (c[k5NB0x8] != '\0') {
            k5NB0x8++;
            zjks6LtAwM = zjks6LtAwM + 1;
        };
    }
    k5NB0x8 = (563 - 563);
    while (vNvcRC0T4Ml[k5NB0x8] != '\0') {
        if (vNvcRC0T4Ml[k5NB0x8] == KZsn58L[(400 - 400)]) {
            xvXwHVag = k5NB0x8;
            d76mF5svA2t = (466 - 466);
            beqYBLrOhf = (803 - 803);
            while (vNvcRC0T4Ml[k5NB0x8] == KZsn58L[d76mF5svA2t] && vNvcRC0T4Ml[k5NB0x8] != '\0') {
                d76mF5svA2t++;
                k5NB0x8++;
                beqYBLrOhf++;
            }
            if (beqYBLrOhf == PfXa9Vm4Gj) {
                int t;
                t = 0;
                {
                    t = 0;
                    while (t < zjks6LtAwM) {
                        vNvcRC0T4Ml[xvXwHVag + t] = c[t];
                        t = t + 1;
                    };
                }
                break;
            };
        }
        else
            k5NB0x8++;
    }
    printf ("%s", vNvcRC0T4Ml);
}

