int main () {
    int g1zNTpiP, iapVlJihv6bm, sNRz07;
    int HtyuIH;
    int TG6TKRfYik8P [(869 - 769)];
    scanf ("%d", &HtyuIH);
    scanf ("%d", &TG6TKRfYik8P[(637 - 637)]);
    g1zNTpiP = TG6TKRfYik8P[0];
    scanf ("%d", &TG6TKRfYik8P[(185 - 184)]);
    iapVlJihv6bm = TG6TKRfYik8P[1];
    if (iapVlJihv6bm > g1zNTpiP) {
        sNRz07 = g1zNTpiP;
        g1zNTpiP = iapVlJihv6bm;
        iapVlJihv6bm = sNRz07;
    }
    for (int KjPHIlGy2 = (676 - 674);
    KjPHIlGy2 <= HtyuIH -1; KjPHIlGy2 = KjPHIlGy2 +1) {
        scanf ("%d", &TG6TKRfYik8P[KjPHIlGy2]);
        if (TG6TKRfYik8P[KjPHIlGy2] > iapVlJihv6bm) {
            iapVlJihv6bm = TG6TKRfYik8P[KjPHIlGy2];
            if (iapVlJihv6bm > g1zNTpiP) {
                sNRz07 = g1zNTpiP;
                g1zNTpiP = iapVlJihv6bm;
                iapVlJihv6bm = sNRz07;
            };
        };
    }
    printf ("%d\n%d\n", g1zNTpiP, iapVlJihv6bm);
    return 0;
}

