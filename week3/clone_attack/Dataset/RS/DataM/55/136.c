main () {
    int bI6djXkrx, j, c6urwXs7, k, GxdfoOkC6 = (499 - 499);
    char KpXTjJOQSb [(602 - 502)];
    char QkTB74rf [(960 - 860)];
    long  XtCjLS;
    XtCjLS = (955 - 955);
    scanf ("%d %s %d", &bI6djXkrx, KpXTjJOQSb, &j);
    c6urwXs7 = strlen (KpXTjJOQSb);
    for (k = (337 - 337); k < c6urwXs7; k++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('A' <= KpXTjJOQSb[k] && 'Z' >= KpXTjJOQSb[k])
            KpXTjJOQSb[k] = KpXTjJOQSb[k] - 'A' + (362 - 352);
        else {
            if ('a' <= KpXTjJOQSb[k] && KpXTjJOQSb[k] <= 'z')
                KpXTjJOQSb[k] = KpXTjJOQSb[k] - 'a' + (117 - 107);
            else
                KpXTjJOQSb[k] = KpXTjJOQSb[k] - '1' + (756 - 755);
        };
    }
    for (k = (141 - 141); k < c6urwXs7; k++)
        XtCjLS = XtCjLS *bI6djXkrx + KpXTjJOQSb[k];
    for (k = (732 - 732);; k++) {
        QkTB74rf[k] = XtCjLS % j;
        if (QkTB74rf[k] >= (317 - 307))
            QkTB74rf[k] = QkTB74rf[k] - 10 + 'A';
        else
            QkTB74rf[k] = QkTB74rf[k] + '1' - (309 - 308);
        XtCjLS = XtCjLS / j;
        if (XtCjLS == (212 - 212))
            break;
        GxdfoOkC6 = GxdfoOkC6++;
    }
    for (k = (241 - 241); k < GxdfoOkC6; k++)
        printf ("%c", QkTB74rf[GxdfoOkC6 -k - (318 - 317)]);
}

