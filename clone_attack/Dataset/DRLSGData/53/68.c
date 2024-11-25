main () {
    int u5qsUdVtYkM;
    int q89Zx2n;
    int MKEhWd;
    int z8I9kjefh [301];
    int pidhrl1qV [301];
    int NOsJBCr;
    int pHgkbeaDSiN;
    u5qsUdVtYkM = 1;
    q89Zx2n = 1;
    MKEhWd = 0;
    scanf ("%d", &NOsJBCr);
    for (; u5qsUdVtYkM <= NOsJBCr; u5qsUdVtYkM = u5qsUdVtYkM + 1) {
        scanf ("%d", &z8I9kjefh[u5qsUdVtYkM]);
        if (u5qsUdVtYkM != NOsJBCr)
            scanf (" ");
    }
    pidhrl1qV[1] = z8I9kjefh[1];
    for (u5qsUdVtYkM = 1; u5qsUdVtYkM <= NOsJBCr; u5qsUdVtYkM = u5qsUdVtYkM + 1) {
        for (pHgkbeaDSiN = 1; pHgkbeaDSiN <= q89Zx2n; pHgkbeaDSiN = pHgkbeaDSiN + 1) {
            if (z8I9kjefh[u5qsUdVtYkM] == pidhrl1qV[pHgkbeaDSiN]) {
                MKEhWd = 1;
            }
        }
        if (MKEhWd == 1)
            MKEhWd = 0;
        else {
            q89Zx2n = q89Zx2n + 1;
            pidhrl1qV[q89Zx2n] = z8I9kjefh[u5qsUdVtYkM];
        }
    }
    {
        u5qsUdVtYkM = 1;
        for (; u5qsUdVtYkM <= q89Zx2n;) {
            printf ("%d", pidhrl1qV[u5qsUdVtYkM]);
            if (u5qsUdVtYkM != q89Zx2n)
                ;
            u5qsUdVtYkM = u5qsUdVtYkM + 1;
        }
    }
    return 0;
}

