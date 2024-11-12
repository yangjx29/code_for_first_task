int BhoYXz4n [1000], D [1000];

int main () {
    int i, vBTtO8NwRCq, k, n, temp;
    for (i = 0; 21 > i; i++)
        D[i] = 0;
    i = 0;
    for (; scanf ("%d", &BhoYXz4n[i]) != EOF;)
        i++;
    D[i - 1] = 1;
    for (vBTtO8NwRCq = i - 2; 0 <= vBTtO8NwRCq; vBTtO8NwRCq--) {
        k = vBTtO8NwRCq + 1;
        n = 0;
        for (; i > k;) {
            if (BhoYXz4n[vBTtO8NwRCq] >= BhoYXz4n[k] && n < D[k])
                n = D[k];
            k++;
        }
        D[vBTtO8NwRCq] = n + 1;
    }
    n = 0;
    for (vBTtO8NwRCq = 0; vBTtO8NwRCq < i; vBTtO8NwRCq++) {
        if (D[vBTtO8NwRCq] > n)
            n = D[vBTtO8NwRCq];
    }
    printf ("%d", n);
}

