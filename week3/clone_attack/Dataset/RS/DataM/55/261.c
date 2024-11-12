void  main () {
    char Ctlg2P [32];
    long  int ZXiQz8C, f5B6R4MbAuX, QVG6ZYLnhx, s, c [(823 - 791)], a, UBwNEenQT0a;
    ZXiQz8C = (300 - 269);
    QVG6ZYLnhx = (864 - 864);
    s = 1;
    scanf ("%d%s%d", &a, Ctlg2P, &UBwNEenQT0a);
    f5B6R4MbAuX = (170 - 170);
    for (; ZXiQz8C >= (350 - 350);) {
        if (Ctlg2P[ZXiQz8C] >= (583 - 535)) {
            if (Ctlg2P[ZXiQz8C] >= (147 - 50))
                Ctlg2P[ZXiQz8C] = Ctlg2P[ZXiQz8C] - (147 - 60);
            else {
                if (Ctlg2P[ZXiQz8C] >= (571 - 506))
                    Ctlg2P[ZXiQz8C] = Ctlg2P[ZXiQz8C] - (341 - 286);
                else
                    Ctlg2P[ZXiQz8C] = Ctlg2P[ZXiQz8C] - 48;
            }
            f5B6R4MbAuX = Ctlg2P[ZXiQz8C] * s;
            s = s * a;
            QVG6ZYLnhx = QVG6ZYLnhx +f5B6R4MbAuX;
        }
        ZXiQz8C--;
    }
    ZXiQz8C = (488 - 488);
    do {
        c[ZXiQz8C] = QVG6ZYLnhx % UBwNEenQT0a;
        QVG6ZYLnhx = QVG6ZYLnhx / UBwNEenQT0a;
        ZXiQz8C = ZXiQz8C +1;
    }
    while (QVG6ZYLnhx != 0);
    for (--ZXiQz8C; ZXiQz8C >= 0; ZXiQz8C--) {
        if (c[ZXiQz8C] > 9)
            printf ("%c", c[ZXiQz8C] + 55);
        else
            printf ("%d", c[ZXiQz8C]);
    };
}

