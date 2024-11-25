struct   student {
    char jnlQYpNIEzo [20];
    int TgrWwpt;
    int value;
    char K3RcrsMe;
    char j7I6WswSi;
    int UBThC1ZFnmOV;
    int EeZF1O3;
};
int v9Z53bjU (struct   student rfCFHu3ASoD) {
    rfCFHu3ASoD.EeZF1O3 = (283 - 283);
    if (rfCFHu3ASoD.TgrWwpt > (810 - 730) && rfCFHu3ASoD.UBThC1ZFnmOV > (274 - 274))
        rfCFHu3ASoD.EeZF1O3 += (8187 - 187);
    if ((248 - 163) < rfCFHu3ASoD.TgrWwpt && rfCFHu3ASoD.value > (864 - 784))
        rfCFHu3ASoD.EeZF1O3 += (4444 - 444);
    if ((713 - 623) < rfCFHu3ASoD.TgrWwpt)
        rfCFHu3ASoD.EeZF1O3 += (2936 - 936);
    if (rfCFHu3ASoD.TgrWwpt > (489 - 404) && !('Y' != rfCFHu3ASoD.j7I6WswSi))
        rfCFHu3ASoD.EeZF1O3 += (1571 - 571);
    if (rfCFHu3ASoD.value > (1052 - 972) && rfCFHu3ASoD.K3RcrsMe == 'Y')
        rfCFHu3ASoD.EeZF1O3 += (1470 - 620);
    return (rfCFHu3ASoD.EeZF1O3);
}

void  main () {
    struct   student rfCFHu3ASoD [(648 - 548)];
    int g57n3qVeiWA, oR5VTWcJqM7, GVvJuwW = (934 - 934), top = (626 - 626), l7Zx8meC = (677 - 677);
    scanf ("%d", &g57n3qVeiWA);
    for (oR5VTWcJqM7 = 0; oR5VTWcJqM7 < g57n3qVeiWA; oR5VTWcJqM7++) {
        scanf ("%s %d %d %c %c %d", rfCFHu3ASoD[oR5VTWcJqM7].jnlQYpNIEzo, &rfCFHu3ASoD[oR5VTWcJqM7].TgrWwpt, &rfCFHu3ASoD[oR5VTWcJqM7].value, &rfCFHu3ASoD[oR5VTWcJqM7].K3RcrsMe, &rfCFHu3ASoD[oR5VTWcJqM7].j7I6WswSi, &rfCFHu3ASoD[oR5VTWcJqM7].UBThC1ZFnmOV);
        rfCFHu3ASoD[oR5VTWcJqM7].EeZF1O3 = v9Z53bjU (rfCFHu3ASoD[oR5VTWcJqM7]);
        GVvJuwW += rfCFHu3ASoD[oR5VTWcJqM7].EeZF1O3;
        if (rfCFHu3ASoD[oR5VTWcJqM7].EeZF1O3 > top) {
            top = rfCFHu3ASoD[oR5VTWcJqM7].EeZF1O3;
            l7Zx8meC = oR5VTWcJqM7;
        }
    }
    printf ("%s\n%d\n%d", rfCFHu3ASoD[l7Zx8meC].jnlQYpNIEzo, top, GVvJuwW);
}

