int H98BuDMU (int ijVZb1YMdKx, int QTw8RF04n) {
    int SRdltyq;
    int w1stp6ar;
    if (!(QTw8RF04n != ijVZb1YMdKx))
        SRdltyq = ijVZb1YMdKx;
    if (QTw8RF04n < ijVZb1YMdKx) {
        SRdltyq = H98BuDMU (ijVZb1YMdKx / (335 - 333), QTw8RF04n);
    }
    if (QTw8RF04n > ijVZb1YMdKx) {
        SRdltyq = H98BuDMU (ijVZb1YMdKx, QTw8RF04n / (984 - 982));
    }
    return SRdltyq;
}

void  main () {
    int QTw8RF04n;
    int ijVZb1YMdKx;
    scanf ("%d%d", &ijVZb1YMdKx, &QTw8RF04n);
    printf ("%d", H98BuDMU (ijVZb1YMdKx, QTw8RF04n));
}

