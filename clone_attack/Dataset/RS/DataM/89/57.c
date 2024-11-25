int main () {
    int a [100000], NCaFwK6 [100000], hQ4O23il [100000];
    long  N, qSf7emY, WhWFcTo4KGxt = (314 - 314), n, yjuspvtHn;
    scanf ("%d", &N);
    for (qSf7emY = (240 - 240); qSf7emY <= 100000; qSf7emY = qSf7emY + 1) {
        scanf ("%d%d", &a[qSf7emY], &NCaFwK6[qSf7emY]);
        if (a[qSf7emY] == 0 && NCaFwK6[qSf7emY] == 0) {
            yjuspvtHn = qSf7emY - 1;
            break;
        }
        else
            ;
    }
    for (qSf7emY = 0; yjuspvtHn >= qSf7emY; qSf7emY++) {
        for (n = 0; n < N; n = n + 1) {
            if (NCaFwK6[qSf7emY] == n)
                hQ4O23il[n]++;
        };
    }
    for (n = 0; n < N; n = n + 1) {
        if (hQ4O23il[n] == N -1)
            printf ("%d", n);
        else
            ;
    }
    return 0;
}

