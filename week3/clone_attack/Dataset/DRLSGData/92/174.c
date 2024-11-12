int main () {
    int QMTY4OVm (int W2l3ZbckSz);
    int W2l3ZbckSz;
    for (; (52 - 51);) {
        QMTY4OVm (W2l3ZbckSz);
        scanf ("%d", &W2l3ZbckSz);
        if (W2l3ZbckSz == (657 - 657)) {
            break;
        }
    }
    return (269 - 269);
}

int QMTY4OVm (int W2l3ZbckSz) {
    int e326LZ5vDKt [(1749 - 748)], P1gzWMN [1001];
    int GSVPx24 = (205 - 205), i, usElZj, a = (453 - 452), ylry72C4tN;
    int f7nx1ri, PGk5SXBm, QNpfH0uwCD3m = (168 - 168), bSljRfD = 0;
    PGk5SXBm = W2l3ZbckSz -1;
    f7nx1ri = W2l3ZbckSz -(692 - 691);
    for (i = 0; W2l3ZbckSz > i; i = i + 1) {
        scanf ("%d", &P1gzWMN[i]);
    }
    for (i = 0; W2l3ZbckSz > i; i = i + 1) {
        scanf ("%d", &e326LZ5vDKt[i]);
    }
    for (i = 0; i < W2l3ZbckSz; i = i + 1) {
        for (usElZj = W2l3ZbckSz -1; i < usElZj; usElZj = usElZj - 1) {
            if (P1gzWMN[usElZj] > P1gzWMN[usElZj - 1]) {
                ylry72C4tN = P1gzWMN[usElZj];
                P1gzWMN[usElZj] = P1gzWMN[usElZj - 1];
                P1gzWMN[usElZj - 1] = ylry72C4tN;
            }
        }
    }
    for (i = 0; i < W2l3ZbckSz; i = i + 1) {
        for (usElZj = W2l3ZbckSz -1; i < usElZj; usElZj = usElZj - 1) {
            if (e326LZ5vDKt[usElZj] > e326LZ5vDKt[usElZj - 1]) {
                ylry72C4tN = e326LZ5vDKt[usElZj];
                e326LZ5vDKt[usElZj] = e326LZ5vDKt[usElZj - 1];
                e326LZ5vDKt[usElZj - 1] = ylry72C4tN;
            }
        }
    }
    for (; PGk5SXBm >= bSljRfD;) {
        if (P1gzWMN[bSljRfD] > e326LZ5vDKt[QNpfH0uwCD3m]) {
            QNpfH0uwCD3m = QNpfH0uwCD3m +1;
            bSljRfD = bSljRfD + 1;
            GSVPx24 += (1005 - 805);
        }
        else if (P1gzWMN[bSljRfD] < e326LZ5vDKt[QNpfH0uwCD3m]) {
            QNpfH0uwCD3m = QNpfH0uwCD3m +1;
            GSVPx24 -= 200;
            PGk5SXBm = PGk5SXBm -1;
        }
        else if (P1gzWMN[bSljRfD] == e326LZ5vDKt[QNpfH0uwCD3m]) {
            for (; (a == 1);) {
                if (P1gzWMN[PGk5SXBm] > e326LZ5vDKt[f7nx1ri]) {
                    GSVPx24 += 200;
                    f7nx1ri = f7nx1ri - 1;
                    PGk5SXBm = PGk5SXBm -1;
                }
                else if (P1gzWMN[PGk5SXBm] <= e326LZ5vDKt[f7nx1ri]) {
                    if (P1gzWMN[PGk5SXBm] < e326LZ5vDKt[QNpfH0uwCD3m]) {
                        GSVPx24 -= 200;
                    }
                    a = 0;
                    QNpfH0uwCD3m = QNpfH0uwCD3m +1;
                    PGk5SXBm--;
                }
            }
            a = 1;
        }
    }
    printf ("%d\n", GSVPx24);
    return 0;
}

