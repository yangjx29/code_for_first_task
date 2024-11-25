int main () {
    int bf3ZWNRY1q [300];
    char KzP8pdhfW;
    int FgtZVDx, ubAkLFB = 0, zGIFDB, pVDrpc, PL4V32CFfuS;
    while (1) {
        scanf ("%d", &bf3ZWNRY1q[ubAkLFB++]);
        scanf ("%c", &KzP8pdhfW);
        if (!('\n' != KzP8pdhfW))
            break;
    }
    if (!(1 != ubAkLFB)) {
        return 0;
    }
    for (zGIFDB = 0; zGIFDB < ubAkLFB - 1; zGIFDB = zGIFDB + 1) {
        for (pVDrpc = 0; ubAkLFB - zGIFDB - 1 > pVDrpc; pVDrpc = pVDrpc + 1) {
            if (bf3ZWNRY1q[pVDrpc] < bf3ZWNRY1q[pVDrpc + 1]) {
                FgtZVDx = bf3ZWNRY1q[pVDrpc];
                bf3ZWNRY1q[pVDrpc] = bf3ZWNRY1q[pVDrpc + 1];
                bf3ZWNRY1q[pVDrpc + 1] = FgtZVDx;
            }
        }
    }
    for (zGIFDB = 0; zGIFDB < ubAkLFB - 1; zGIFDB = zGIFDB + 1) {
        PL4V32CFfuS = 0;
        if (bf3ZWNRY1q[zGIFDB] > bf3ZWNRY1q[zGIFDB + 1]) {
            PL4V32CFfuS = 1;
            printf ("%d", bf3ZWNRY1q[zGIFDB + 1]);
            break;
        }
    }
    if (PL4V32CFfuS == 0)
        ;
    return 0;
}

