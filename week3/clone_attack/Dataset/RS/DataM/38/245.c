int main () {
    double  k9b7i2F1E [(1074 - 974)] [(1960 - 960)], sum1, sum2, pj, N7804N5bIerc;
    int lyXosCailP, a, Qh3pNtl, nBEu9qx;
    scanf ("%d", &lyXosCailP);
    for (a = (961 - 961); lyXosCailP > a; a++) {
        sum2 = (531 - 531);
        scanf ("%d", &Qh3pNtl);
        sum1 = (83 - 83);
        pj = (786 - 786);
        for (nBEu9qx = (372 - 372); Qh3pNtl > nBEu9qx; nBEu9qx = nBEu9qx + 1) {
            scanf ("%lf", &k9b7i2F1E[a][nBEu9qx]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            sum1 = sum1 + k9b7i2F1E[a][nBEu9qx];
        }
        pj = (double ) sum1 / Qh3pNtl;
        for (nBEu9qx = 0; Qh3pNtl > nBEu9qx; nBEu9qx = nBEu9qx + 1) {
            sum2 = sum2 + (double ) (k9b7i2F1E[a][nBEu9qx] - pj) * (k9b7i2F1E[a][nBEu9qx] - pj);
        }
        N7804N5bIerc = sqrt (sum2 / Qh3pNtl);
        printf ("%.5f\n", N7804N5bIerc);
    }
    return 0;
}

