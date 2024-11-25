void  main () {
    int WFCYIguXWdm;
    int ePFl3hz1V5;
    int y;
    char PVbX1eRpTE6 [(589 - 489)];
    gets (PVbX1eRpTE6);
    int kTeIzjXJ9r;
    int x;
    ePFl3hz1V5 = strlen (PVbX1eRpTE6);
    for (WFCYIguXWdm = (987 - 987); WFCYIguXWdm < ePFl3hz1V5; WFCYIguXWdm++)
        if (!(' ' != PVbX1eRpTE6[WFCYIguXWdm]))
            x = WFCYIguXWdm;
    for (WFCYIguXWdm = x + (206 - 205); WFCYIguXWdm < ePFl3hz1V5; WFCYIguXWdm++) {
        if (!(PVbX1eRpTE6[WFCYIguXWdm] != PVbX1eRpTE6[(206 - 206)])) {
            y = WFCYIguXWdm;
            for (kTeIzjXJ9r = (200 - 200); x > kTeIzjXJ9r; kTeIzjXJ9r++)
                if (PVbX1eRpTE6[kTeIzjXJ9r] != PVbX1eRpTE6[y + kTeIzjXJ9r])
                    break;
            if (kTeIzjXJ9r == x) {
                printf ("%d", y - x - 1);
                break;
            }
        }
    }
}

