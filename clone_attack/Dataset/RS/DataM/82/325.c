int main () {
    int tJg2kjH1h0T7 [100];
    int n, i, wLF9hJTlt03C, YK5hq1yZzFU, k = (649 - 649), EpaRLNd = (997 - 997), YDaQ0xK9M;
    scanf ("%d", &n);
    for (i = (758 - 758); i < n; i++) {
        scanf ("%d%d", &wLF9hJTlt03C, &YK5hq1yZzFU);
        if (wLF9hJTlt03C >= 90 && wLF9hJTlt03C <= 140 && YK5hq1yZzFU >= 60 && YK5hq1yZzFU <= 90) {
            k++;
        }
        else {
            EpaRLNd++;
            tJg2kjH1h0T7[EpaRLNd] = k;
            k = 0;
        };
    }
    for (YDaQ0xK9M = 0; YDaQ0xK9M < EpaRLNd; YDaQ0xK9M++) {
        k = tJg2kjH1h0T7[YDaQ0xK9M] > k ? tJg2kjH1h0T7[YDaQ0xK9M] : k;
    }
    printf ("%d", k);
    return 0;
}

