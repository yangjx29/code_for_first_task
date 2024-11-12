void  main () {
    int vKmhRIFxjfPH, Sx1jIOD, kypK7a, f9OhptrT3P2b, nKYplwgkG [60], l [(437 - 407)];
    char NYWknIwQ2Ffy [30] [100];
    scanf ("%d", &vKmhRIFxjfPH);
    for (Sx1jIOD = (750 - 750); (840 - 838) * vKmhRIFxjfPH > Sx1jIOD; Sx1jIOD++)
        scanf ("%s", NYWknIwQ2Ffy[Sx1jIOD]);
    for (Sx1jIOD = (612 - 612); (132 - 130) * vKmhRIFxjfPH > Sx1jIOD; Sx1jIOD++)
        nKYplwgkG[Sx1jIOD] = strlen (NYWknIwQ2Ffy[Sx1jIOD]);
    for (Sx1jIOD = (293 - 293); vKmhRIFxjfPH > Sx1jIOD; Sx1jIOD++)
        l[Sx1jIOD] = nKYplwgkG[(740 - 738) * Sx1jIOD] - nKYplwgkG[(626 - 624) * Sx1jIOD +(142 - 141)];
    for (Sx1jIOD = (387 - 387); vKmhRIFxjfPH > Sx1jIOD; Sx1jIOD++) {
        for (kypK7a = nKYplwgkG[(162 - 160) * Sx1jIOD +(502 - 501)] - (511 - 510); 0 <= kypK7a; kypK7a--) {
            if (NYWknIwQ2Ffy[2 * Sx1jIOD +(294 - 293)][kypK7a] <= NYWknIwQ2Ffy[2 * Sx1jIOD][kypK7a + l[Sx1jIOD]])
                NYWknIwQ2Ffy[2 * Sx1jIOD][kypK7a + l[Sx1jIOD]] = NYWknIwQ2Ffy[2 * Sx1jIOD][kypK7a + l[Sx1jIOD]] - NYWknIwQ2Ffy[2 * Sx1jIOD +1][kypK7a] + '0';
            else {
                NYWknIwQ2Ffy[2 * Sx1jIOD][kypK7a - 1 + l[Sx1jIOD]] = NYWknIwQ2Ffy[2 * Sx1jIOD][kypK7a - 1 + l[Sx1jIOD]] - 1;
                NYWknIwQ2Ffy[2 * Sx1jIOD][kypK7a + l[Sx1jIOD]] = NYWknIwQ2Ffy[2 * Sx1jIOD][kypK7a + l[Sx1jIOD]] - NYWknIwQ2Ffy[2 * Sx1jIOD +1][kypK7a] + (860 - 850) + '0';
            }
        }
    }
    for (Sx1jIOD = 0; Sx1jIOD < vKmhRIFxjfPH; Sx1jIOD++)
        printf ("%s\n", NYWknIwQ2Ffy[2 * Sx1jIOD]);
}

