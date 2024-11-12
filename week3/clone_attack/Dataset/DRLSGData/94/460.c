int main () {
    int gY0WJ1DZt;
    int nYW6NkxCJ [500];
    int n8MxR42J = 0, zrUfZnaI0 = 0;
    int XJmoOFE1;
    int qRpLNUvm, Li3WLrqboQE;
    int bTp6akh [gY0WJ1DZt];
    scanf ("%d", &gY0WJ1DZt);
    for (XJmoOFE1 = (318 - 318); gY0WJ1DZt > XJmoOFE1; XJmoOFE1 = XJmoOFE1 +1) {
        scanf ("%d ", &bTp6akh[XJmoOFE1]);
    }
    for (XJmoOFE1 = 0; gY0WJ1DZt > XJmoOFE1; XJmoOFE1++) {
        if (bTp6akh[XJmoOFE1] % 2 != 0) {
            nYW6NkxCJ[n8MxR42J] = bTp6akh[XJmoOFE1];
            n8MxR42J = n8MxR42J + 1;
            zrUfZnaI0 = zrUfZnaI0 + 1;
        }
    }
    for (qRpLNUvm = 1; qRpLNUvm < zrUfZnaI0; qRpLNUvm = qRpLNUvm + 1) {
        for (n8MxR42J = 0; n8MxR42J <= zrUfZnaI0 - qRpLNUvm; n8MxR42J = n8MxR42J + 1) {
            if (nYW6NkxCJ[n8MxR42J] > nYW6NkxCJ[n8MxR42J + 1]) {
                Li3WLrqboQE = nYW6NkxCJ[n8MxR42J];
                nYW6NkxCJ[n8MxR42J] = nYW6NkxCJ[n8MxR42J + 1];
                nYW6NkxCJ[n8MxR42J + 1] = Li3WLrqboQE;
            }
        }
    }
    for (n8MxR42J = 0; zrUfZnaI0 > n8MxR42J; n8MxR42J++) {
        if (n8MxR42J != zrUfZnaI0 - 1)
            printf ("%d,", nYW6NkxCJ[n8MxR42J]);
        else
            printf ("%d", nYW6NkxCJ[n8MxR42J]);
    }
    return 0;
}

