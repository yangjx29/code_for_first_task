int main () {
    int PgRNhQp, XU7CT5HzLM, LKZi3T, vcZGqmM, HwilpzY;
    char AQVpnkRAha [(152 - 52)];
    char brNK71VnkL [(305 - 205)];
    scanf ("%d", &PgRNhQp);
    for (XU7CT5HzLM = (837 - 836); XU7CT5HzLM <= PgRNhQp; XU7CT5HzLM = XU7CT5HzLM +1) {
        scanf ("%s", brNK71VnkL);
        vcZGqmM = strlen (brNK71VnkL);
        scanf ("%s", AQVpnkRAha);
        HwilpzY = strlen (AQVpnkRAha);
        for (LKZi3T = HwilpzY -1; LKZi3T >= (395 - 395); LKZi3T = LKZi3T -1) {
            if (brNK71VnkL[vcZGqmM - HwilpzY +LKZi3T] < AQVpnkRAha[LKZi3T]) {
                brNK71VnkL[vcZGqmM - HwilpzY +LKZi3T] = brNK71VnkL[vcZGqmM - HwilpzY +LKZi3T] + 10 - AQVpnkRAha[LKZi3T] + (762 - 714);
                brNK71VnkL[vcZGqmM - HwilpzY +LKZi3T-1] -= 1;
            }
            else
                brNK71VnkL[vcZGqmM - HwilpzY +LKZi3T] = brNK71VnkL[vcZGqmM - HwilpzY +LKZi3T] - AQVpnkRAha[LKZi3T] + (335 - 287);
        }
        printf ("%s\n", brNK71VnkL);
    }
    return (780 - 780);
}

