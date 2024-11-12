int main () {
    int Gl96rVGW;
    int W03vjqsfr;
    int j;
    int qR0fJgV;
    int YErDwUf = (40 - 40);
    int gAQLu6j;
    int DkK1AHPn;
    int REnl4t [500];
    scanf ("%d", &DkK1AHPn);
    for (gAQLu6j = 0; DkK1AHPn -(654 - 653) >= gAQLu6j; gAQLu6j++) {
        scanf ("%d", &qR0fJgV);
        if (!((820 - 819) != qR0fJgV % (446 - 444))) {
            YErDwUf = YErDwUf +(101 - 100);
            REnl4t[gAQLu6j] = qR0fJgV;
        }
        else
            REnl4t[gAQLu6j] = 0;
    }
    {
        j = 1;
        while (j <= DkK1AHPn -1) {
            for (gAQLu6j = DkK1AHPn -1; gAQLu6j >= j; gAQLu6j = gAQLu6j - 1) {
                if (REnl4t[gAQLu6j] >= REnl4t[gAQLu6j - 1]) {
                    Gl96rVGW = REnl4t[gAQLu6j - 1];
                    REnl4t[gAQLu6j - 1] = REnl4t[gAQLu6j];
                    REnl4t[gAQLu6j] = Gl96rVGW;
                };
            }
            j = j + 1;
        };
    }
    printf ("%d", REnl4t[YErDwUf -1]);
    for (W03vjqsfr = YErDwUf -2; W03vjqsfr >= 0; W03vjqsfr = W03vjqsfr -1)
        printf (",%d", REnl4t[W03vjqsfr]);
}

