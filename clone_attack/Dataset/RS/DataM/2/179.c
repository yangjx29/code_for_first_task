void  main () {
    struct   book {
        int num;
        char TlzPBNro [100];
    };
    struct   book b [1000];
    int kUoTCacdphMR;
    int uP6j5NIUr;
    int VzR7fgMOp;
    int j;
    int LU8iQ1;
    int m;
    int h;
    kUoTCacdphMR = (718 - 718);
    int SMAP4rfF [1000];
    char dTRGrykw [27];
    kUoTCacdphMR = 1;
    scanf ("%d", &uP6j5NIUr);
    for (VzR7fgMOp = 0; uP6j5NIUr > VzR7fgMOp; VzR7fgMOp++)
        scanf ("%d %s", &b[VzR7fgMOp].num, b[VzR7fgMOp].TlzPBNro);
    dTRGrykw[0] = b[0].TlzPBNro[0];
    SMAP4rfF[0] = 0;
    for (VzR7fgMOp = 0; VzR7fgMOp < uP6j5NIUr; VzR7fgMOp++) {
        for (j = 0; b[VzR7fgMOp].TlzPBNro[j] != 0; j++) {
            int x = 0;
            {
                LU8iQ1 = 0;
                while (LU8iQ1 < kUoTCacdphMR) {
                    if (b[VzR7fgMOp].TlzPBNro[j] == dTRGrykw[LU8iQ1]) {
                        SMAP4rfF[LU8iQ1] = SMAP4rfF[LU8iQ1] + 1;
                        x = 0;
                        break;
                    }
                    else
                        x = 1;
                    LU8iQ1++;
                };
            }
            if (!(1 != x)) {
                kUoTCacdphMR++;
                dTRGrykw[kUoTCacdphMR - 1] = b[VzR7fgMOp].TlzPBNro[j];
                SMAP4rfF[kUoTCacdphMR - 1] = 1;
            };
        };
    }
    m = SMAP4rfF[0];
    h = 0;
    {
        VzR7fgMOp = 0;
        while (kUoTCacdphMR > VzR7fgMOp) {
            if (SMAP4rfF[VzR7fgMOp] > m) {
                m = SMAP4rfF[VzR7fgMOp];
                h = VzR7fgMOp;
            }
            VzR7fgMOp++;
        };
    }
    printf ("%c\n%d\n", dTRGrykw[h], m);
    for (VzR7fgMOp = 0; VzR7fgMOp < uP6j5NIUr; VzR7fgMOp++) {
        for (j = 0; b[VzR7fgMOp].TlzPBNro[j] != 0; j++) {
            if (b[VzR7fgMOp].TlzPBNro[j] == dTRGrykw[h]) {
                printf ("%d\n", b[VzR7fgMOp].num);
                break;
            };
        };
    };
}

