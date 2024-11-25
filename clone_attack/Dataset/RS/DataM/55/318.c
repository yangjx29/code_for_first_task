main () {
    int GnNo3P;
    int ZT7avZ;
    int k;
    int QmGov27;
    int eQ328c5B9;
    char cBxQYAkpX [N], T [N];
    long  int O3guU0BC, nNvobCZ1F, QXJ1ES9yrIN, hPvaQk = (551 - 551), d = 1, WcQOWPtoB = 1, m = 1, P6jwCKWHq [N];
    scanf ("%d %s %d", &O3guU0BC, cBxQYAkpX, &QXJ1ES9yrIN);
    eQ328c5B9 = strlen (cBxQYAkpX);
    {
        ZT7avZ = 0;
        while (ZT7avZ < eQ328c5B9 - 1) {
            ZT7avZ = ZT7avZ +1;
            d = d * O3guU0BC;
        };
    }
    {
        GnNo3P = 0;
        while (GnNo3P < eQ328c5B9) {
            if (cBxQYAkpX[GnNo3P] <= '9') {
                hPvaQk = hPvaQk + WcQOWPtoB *d;
                d = d / O3guU0BC;
                WcQOWPtoB = cBxQYAkpX[GnNo3P] - '0';
            }
            if (cBxQYAkpX[GnNo3P] > '9') {
                hPvaQk = hPvaQk + WcQOWPtoB *d;
                d = d / O3guU0BC;
                if (cBxQYAkpX[GnNo3P] > 'a' - 1) {
                    cBxQYAkpX[GnNo3P] = cBxQYAkpX[GnNo3P] - 'a' + 'A';
                }
                WcQOWPtoB = 10 + cBxQYAkpX[GnNo3P] - 'A';
            }
            GnNo3P = GnNo3P +1;
        };
    }
    {
        k = 0;
        while (1) {
            P6jwCKWHq[k] = hPvaQk % QXJ1ES9yrIN;
            hPvaQk = hPvaQk / QXJ1ES9yrIN;
            if (hPvaQk == 0) {
                break;
            }
            k = k + 1;
        };
    }
    eQ328c5B9 = k;
    for (QmGov27 = 0; QmGov27 <= eQ328c5B9; QmGov27 = QmGov27 +1, k = k - 1) {
        if (P6jwCKWHq[k] <= '9' - '0') {
            T[QmGov27] = '0' + P6jwCKWHq[k];
        }
        if (P6jwCKWHq[k] > '9' - '0') {
            T[QmGov27] = 'A' + P6jwCKWHq[k] - 10;
        };
    }
    T[QmGov27] = '\0';
    printf ("%s", T);
}

