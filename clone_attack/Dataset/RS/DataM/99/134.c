void  main () {
    int xgky9X7QLhU;
    int kGQZSfoiqI [(1082 - 982)];
    int baU0TMP4qN;
    double  bZN5BOf = (823 - 823), YmCen3WY2 = 0, NFpAvzwEfq = 0, gZTsmw = 0;
    scanf ("%d", &xgky9X7QLhU);
    {
        baU0TMP4qN = 0;
        while (baU0TMP4qN < xgky9X7QLhU) {
            scanf ("%d", &kGQZSfoiqI[baU0TMP4qN]);
            baU0TMP4qN++;
        };
    }
    {
        baU0TMP4qN = 0;
        while (baU0TMP4qN < xgky9X7QLhU) {
            if ((91 - 72) > kGQZSfoiqI[baU0TMP4qN])
                bZN5BOf++;
            else if (36 > kGQZSfoiqI[baU0TMP4qN])
                YmCen3WY2++;
            else if (kGQZSfoiqI[baU0TMP4qN] < (1060 - 999))
                NFpAvzwEfq++;
            else
                gZTsmw = gZTsmw + 1;
            baU0TMP4qN++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    bZN5BOf = 100 * bZN5BOf / (double ) xgky9X7QLhU;
    YmCen3WY2 = 100 * YmCen3WY2 / (double ) xgky9X7QLhU;
    NFpAvzwEfq = 100 * NFpAvzwEfq / (double ) xgky9X7QLhU;
    gZTsmw = 100 * gZTsmw / (double ) xgky9X7QLhU;
    printf ("1-18: %.2f%%\n", bZN5BOf);
    printf ("19-35: %.2f%%\n", YmCen3WY2);
    printf ("36-60: %.2f%%\n", NFpAvzwEfq);
    printf ("60??: %.2f%%\n", gZTsmw);
}

