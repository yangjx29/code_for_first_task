void  main () {
    char AUR6ZbvByxa [1000] [1000];
    char TpcnlA [1000] [1000];
    int n;
    int XXd2KIM7;
    int KyCUeY1l6pm;
    int Q1eM2Hm4;
    int bXnGpF9VcyiE;
    int zondlT;
    scanf ("%d", &n);
    {
        XXd2KIM7 = 0;
        while (n > XXd2KIM7) {
            scanf ("%s", AUR6ZbvByxa[XXd2KIM7]);
            scanf ("%s", TpcnlA[XXd2KIM7]);
            XXd2KIM7++;
        };
    }
    for (XXd2KIM7 = 0; n > XXd2KIM7; XXd2KIM7++) {
        KyCUeY1l6pm = strlen (AUR6ZbvByxa[XXd2KIM7]);
        Q1eM2Hm4 = strlen (TpcnlA[XXd2KIM7]);
        for (bXnGpF9VcyiE = KyCUeY1l6pm -1; bXnGpF9VcyiE >= KyCUeY1l6pm -Q1eM2Hm4; bXnGpF9VcyiE--) {
            if (AUR6ZbvByxa[XXd2KIM7][bXnGpF9VcyiE] >= TpcnlA[XXd2KIM7][bXnGpF9VcyiE + Q1eM2Hm4 -KyCUeY1l6pm])
                AUR6ZbvByxa[XXd2KIM7][bXnGpF9VcyiE] = AUR6ZbvByxa[XXd2KIM7][bXnGpF9VcyiE] - TpcnlA[XXd2KIM7][bXnGpF9VcyiE + Q1eM2Hm4 -KyCUeY1l6pm] + (796 - 748);
            else {
                AUR6ZbvByxa[XXd2KIM7][bXnGpF9VcyiE] = AUR6ZbvByxa[XXd2KIM7][bXnGpF9VcyiE] - TpcnlA[XXd2KIM7][bXnGpF9VcyiE + Q1eM2Hm4 -KyCUeY1l6pm] + 58;
                AUR6ZbvByxa[XXd2KIM7][bXnGpF9VcyiE - 1] = AUR6ZbvByxa[XXd2KIM7][bXnGpF9VcyiE - 1] - 1;
                zondlT = bXnGpF9VcyiE - 1;
                while (AUR6ZbvByxa[XXd2KIM7][zondlT] < 48) {
                    AUR6ZbvByxa[XXd2KIM7][zondlT] = AUR6ZbvByxa[XXd2KIM7][zondlT] + 10;
                    zondlT = zondlT - 1;
                    AUR6ZbvByxa[XXd2KIM7][zondlT] = AUR6ZbvByxa[XXd2KIM7][zondlT] - 1;
                };
            };
        }
        printf ("%s\n", AUR6ZbvByxa[XXd2KIM7]);
    };
}

