main () {
    int lWxSwNAd4M;
    int pwr6ieRH;
    int hlvIsLESKq;
    lWxSwNAd4M = 0;
    int VM2jX8q (int HsFSWyUu);
    scanf ("%d", &pwr6ieRH);
    for (hlvIsLESKq = 2; pwr6ieRH - 2 >= hlvIsLESKq; hlvIsLESKq = hlvIsLESKq + 1) {
        if (VM2jX8q (hlvIsLESKq) == 1 && !(1 != VM2jX8q (hlvIsLESKq + 2))) {
            printf ("%d %d\n", hlvIsLESKq, hlvIsLESKq + 2);
            lWxSwNAd4M = 1;
        };
    }
    if (lWxSwNAd4M == 0)
        printf ("empty\n");
}

int VM2jX8q (int HsFSWyUu) {
    int hlvIsLESKq, m;
    int lWxSwNAd4M;
    lWxSwNAd4M = 1;
    m = (int) sqrt (HsFSWyUu);
    for (hlvIsLESKq = 2; hlvIsLESKq <= m; hlvIsLESKq = hlvIsLESKq + 1) {
        if (HsFSWyUu % hlvIsLESKq == 0)
            lWxSwNAd4M = 0;
    }
    return lWxSwNAd4M;
}

