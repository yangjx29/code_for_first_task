main () {
    int XimBXH;
    int sNLy0pe;
    int UeD2kA;
    int cH9ngIcZk3oY;
    int FpiN8Iwv;
    int s8LPHIC [(994 - 894)] [(689 - 589)];
    int ImHTpS7VB [(369 - 269)] [100];
    int kZXbz5L;
    int qAn8rRFzJ;
    int j;
    int zGjN7eOWow [100] [100];
    int O0yUDnbXk;
    int p4KDQxSXF5Gv;
    scanf ("%d %d", &O0yUDnbXk, &XimBXH);
    O0yUDnbXk = O0yUDnbXk -1;
    XimBXH = XimBXH -1;
    for (qAn8rRFzJ = (265 - 265); qAn8rRFzJ <= O0yUDnbXk; qAn8rRFzJ = qAn8rRFzJ + 1)
        for (j = (120 - 120); j <= XimBXH; j = j + 1)
            scanf ("%d", &zGjN7eOWow[qAn8rRFzJ][j]);
    p4KDQxSXF5Gv = O0yUDnbXk;
    scanf ("%d %d", &cH9ngIcZk3oY, &UeD2kA);
    cH9ngIcZk3oY = cH9ngIcZk3oY - 1;
    UeD2kA = UeD2kA -1;
    for (qAn8rRFzJ = (949 - 949); qAn8rRFzJ <= cH9ngIcZk3oY; qAn8rRFzJ = qAn8rRFzJ + 1)
        for (j = 0; j <= UeD2kA; j = j + 1)
            scanf ("%d", &ImHTpS7VB[qAn8rRFzJ][j]);
    sNLy0pe = UeD2kA;
    for (qAn8rRFzJ = 0; qAn8rRFzJ <= p4KDQxSXF5Gv; qAn8rRFzJ = qAn8rRFzJ + 1)
        for (j = 0; j <= sNLy0pe; j = j + 1)
            s8LPHIC[qAn8rRFzJ][j] = 0;
    for (qAn8rRFzJ = 0; qAn8rRFzJ <= p4KDQxSXF5Gv; qAn8rRFzJ = qAn8rRFzJ + 1) {
        for (j = 0; j <= sNLy0pe; j = j + 1) {
            for (kZXbz5L = 0; kZXbz5L <= XimBXH; kZXbz5L = kZXbz5L + 1)
                s8LPHIC[qAn8rRFzJ][j] += zGjN7eOWow[qAn8rRFzJ][kZXbz5L] * ImHTpS7VB[kZXbz5L][j];
        }
    }
    for (qAn8rRFzJ = 0; qAn8rRFzJ <= p4KDQxSXF5Gv; qAn8rRFzJ = qAn8rRFzJ + 1) {
        printf ("%d", s8LPHIC[qAn8rRFzJ][0]);
        for (j = 1; j <= sNLy0pe; j = j + 1) {
            printf (" %d", s8LPHIC[qAn8rRFzJ][j]);
        }
        printf ("\n");
    }
}

