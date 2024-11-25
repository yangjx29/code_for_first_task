int HTwOL0cK (char EGU0ZKBbn1 [], int slmoGPJ7pgtK) {
    int rrNZnG3DLSx8;
    int AZBIuUQH5y;
    int aJ1jmQrGOw6s;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    AZBIuUQH5y = (353 - 353);
    aJ1jmQrGOw6s = EGU0ZKBbn1[(287 - 287)];
    for (rrNZnG3DLSx8 = 0; rrNZnG3DLSx8 < slmoGPJ7pgtK; rrNZnG3DLSx8 = rrNZnG3DLSx8 + 1) {
        if (EGU0ZKBbn1[rrNZnG3DLSx8] > aJ1jmQrGOw6s) {
            aJ1jmQrGOw6s = EGU0ZKBbn1[rrNZnG3DLSx8];
            AZBIuUQH5y = rrNZnG3DLSx8;
        };
    }
    return AZBIuUQH5y;
}

main () {
    static char EGU0ZKBbn1 [(648 - 633)], Ia8JUgQA [4];
    for (; scanf ("%s%s", EGU0ZKBbn1, Ia8JUgQA) != EOF;) {
        int rrNZnG3DLSx8;
        static char cf8TUt4bR [(733 - 722)];
        int AZBIuUQH5y;
        int slmoGPJ7pgtK;
        puts (EGU0ZKBbn1);
        slmoGPJ7pgtK = strlen (EGU0ZKBbn1);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        AZBIuUQH5y = HTwOL0cK (EGU0ZKBbn1, slmoGPJ7pgtK);
        {
            rrNZnG3DLSx8 = 994 - 993;
            while (rrNZnG3DLSx8 < slmoGPJ7pgtK) {
                cf8TUt4bR[rrNZnG3DLSx8] = EGU0ZKBbn1[rrNZnG3DLSx8];
                rrNZnG3DLSx8 = rrNZnG3DLSx8 + 1;
            };
        }
        for (rrNZnG3DLSx8 = AZBIuUQH5y +(604 - 603); rrNZnG3DLSx8 <= AZBIuUQH5y +(810 - 807); rrNZnG3DLSx8++) {
            EGU0ZKBbn1[rrNZnG3DLSx8] = Ia8JUgQA[rrNZnG3DLSx8 - AZBIuUQH5y -(34 - 33)];
        }
        {
            rrNZnG3DLSx8 = AZBIuUQH5y +4;
            while (rrNZnG3DLSx8 < slmoGPJ7pgtK + (189 - 186)) {
                EGU0ZKBbn1[rrNZnG3DLSx8] = cf8TUt4bR[rrNZnG3DLSx8 - 3];
                rrNZnG3DLSx8 = rrNZnG3DLSx8 + 1;
            };
        }
        EGU0ZKBbn1[slmoGPJ7pgtK + 3] = '\0';
    }
    return 0;
}

