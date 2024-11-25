main () {
    int temp, mCtsGiPb, min, a [100] = {0}, n, tJLB4T7F, PNtG2UHQao;
    scanf ("%d", &n);
    {
        tJLB4T7F = 1;
        while (n >= tJLB4T7F) {
            scanf ("%d", &a[tJLB4T7F]);
            tJLB4T7F = tJLB4T7F + 1;
        };
    }
    for (tJLB4T7F = 1; tJLB4T7F <= n; tJLB4T7F = tJLB4T7F + 1) {
        PNtG2UHQao = 1;
        while (PNtG2UHQao <= tJLB4T7F) {
            if (a[tJLB4T7F] >= a[PNtG2UHQao]) {
                temp = a[tJLB4T7F];
                a[tJLB4T7F] = a[PNtG2UHQao];
                a[PNtG2UHQao] = temp;
            }
            PNtG2UHQao++;
        };
    }
    printf ("%d\n%d", a[1], a[(792 - 790)]);
}

