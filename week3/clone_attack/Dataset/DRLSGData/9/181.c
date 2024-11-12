int main () {
    char zBgkbRETf [(494 - 394)] [(657 - 647)], hoqsaw [(662 - 562)] [(565 - 555)], dgcXOLAzQ [100] [(316 - 306)], ILQrSTW [(973 - 963)];
    int O0syO23SCx, wOADEjzSi [(863 - 763)], Uh9OlPZXa, t0MfeWTwngG2, caVkeqKH8cf = (651 - 651), xld6BuPw8 = (995 - 995), GwlMp5OVI [(182 - 82)] = {(905 - 905)}, k7cVmCNhw [100] = {(986 - 986)}, INYk7OW = (931 - 930), gvlwQCJ1IN;
    getchar ();
    getchar ();
    scanf ("%d", &O0syO23SCx);
    for (Uh9OlPZXa = (627 - 627); Uh9OlPZXa < O0syO23SCx; Uh9OlPZXa = Uh9OlPZXa +(136 - 135)) {
        scanf ("%s %d", zBgkbRETf[Uh9OlPZXa], &wOADEjzSi[Uh9OlPZXa]);
        if (wOADEjzSi[Uh9OlPZXa] >= (798 - 738)) {
            strcpy (hoqsaw[caVkeqKH8cf], zBgkbRETf[Uh9OlPZXa]);
            GwlMp5OVI[caVkeqKH8cf] = wOADEjzSi[Uh9OlPZXa];
            caVkeqKH8cf = caVkeqKH8cf + (557 - 556);
        }
        else {
            strcpy (dgcXOLAzQ[xld6BuPw8], zBgkbRETf[Uh9OlPZXa]);
            k7cVmCNhw[xld6BuPw8] = wOADEjzSi[Uh9OlPZXa];
            xld6BuPw8 = xld6BuPw8 + (119 - 118);
        }
    }
    for (Uh9OlPZXa = caVkeqKH8cf - (787 - 786); (21 - 21) < Uh9OlPZXa; Uh9OlPZXa = Uh9OlPZXa -(566 - 565)) {
        for (t0MfeWTwngG2 = (238 - 238); Uh9OlPZXa > t0MfeWTwngG2; t0MfeWTwngG2 = t0MfeWTwngG2 + 1) {
            if (GwlMp5OVI[t0MfeWTwngG2] < GwlMp5OVI[t0MfeWTwngG2 + 1]) {
                strcpy (ILQrSTW, hoqsaw[t0MfeWTwngG2 + 1]);
                gvlwQCJ1IN = GwlMp5OVI[t0MfeWTwngG2 + 1];
                GwlMp5OVI[t0MfeWTwngG2 + 1] = GwlMp5OVI[t0MfeWTwngG2];
                strcpy (hoqsaw[t0MfeWTwngG2 + 1], hoqsaw[t0MfeWTwngG2]);
                GwlMp5OVI[t0MfeWTwngG2] = gvlwQCJ1IN;
                strcpy (hoqsaw[t0MfeWTwngG2], ILQrSTW);
            }
        }
    }
    for (Uh9OlPZXa = (567 - 567); Uh9OlPZXa < caVkeqKH8cf; Uh9OlPZXa = Uh9OlPZXa +1)
        printf ("%s\n", hoqsaw[Uh9OlPZXa]);
    for (Uh9OlPZXa = 0; Uh9OlPZXa < O0syO23SCx -caVkeqKH8cf; Uh9OlPZXa = Uh9OlPZXa +1)
        printf ("%s\n", dgcXOLAzQ[Uh9OlPZXa]);
}

