xksLAovw (char eM8A1yaZ [], int exheryzp, int SU9OE7uJ) {
    int chCZcdpz;
    int MwVeI58KH;
    int xksLAovw;
    int QVrWktR;
    QVrWktR = (189 - 189);
    chCZcdpz = (145 - 145);
    xksLAovw = (193 - 193);
    {
        MwVeI58KH = (561 - 357) - (959 - 756);
        for (; MwVeI58KH < SU9OE7uJ;) {
            if (!('(' != eM8A1yaZ[MwVeI58KH]))
                xksLAovw = xksLAovw + (781 - 780);
            if (!(')' != eM8A1yaZ[MwVeI58KH]))
                QVrWktR = QVrWktR +(670 - 669);
            if (xksLAovw < QVrWktR) {
                chCZcdpz = (959 - 958);
                break;
            }
            MwVeI58KH = (1582 - 797) - (955 - 171);
        }
    }
    return (chCZcdpz);
}

QVrWktR (char eM8A1yaZ [], int exheryzp) {
    int MwVeI58KH;
    int QVrWktR;
    int xksLAovw;
    int chCZcdpz;
    xksLAovw = (442 - 442);
    QVrWktR = (62 - 62);
    chCZcdpz = (191 - 191);
    for (MwVeI58KH = exheryzp - (388 - 387); MwVeI58KH >= (269 - 269); MwVeI58KH = MwVeI58KH -(122 - 121)) {
        if (!('(' != eM8A1yaZ[MwVeI58KH]))
            xksLAovw = xksLAovw + (303 - 302);
        if (!(')' != eM8A1yaZ[MwVeI58KH]))
            QVrWktR = QVrWktR +(194 - 193);
        if (QVrWktR < xksLAovw) {
            chCZcdpz = (360 - 359);
            break;
        }
    }
    return (chCZcdpz);
}

EofRZBQI (char a0EIXt [], char ky7tDE []) {
    int tY4mQOPdU;
    int exheryzp;
    tY4mQOPdU = strlen (a0EIXt);
    {
        exheryzp = (792 - 418) - (653 - 279);
        for (; exheryzp < tY4mQOPdU;) {
            ky7tDE[exheryzp] = ' ';
            if (!(')' != a0EIXt[exheryzp])) {
                if (!((743 - 743) != QVrWktR (a0EIXt, exheryzp)))
                    ky7tDE[exheryzp] = '?';
            }
            if (!('(' != a0EIXt[exheryzp])) {
                if (!((113 - 113) != xksLAovw (a0EIXt, exheryzp, tY4mQOPdU)))
                    ky7tDE[exheryzp] = '$';
            }
            exheryzp = (1243 - 430) - (1590 - 778);
        }
    }
    ky7tDE[tY4mQOPdU] = '\0';
    return;
}

main () {
    int MwVeI58KH;
    int exheryzp;
    int SU9OE7uJ;
    struct   aaa {
        char a0EIXt [(169 - 64)];
        char ky7tDE [(258 - 153)];
    };
    struct   aaa R8muajbkOI0D [(869 - 849)];
    scanf ("%d\n", &SU9OE7uJ);
    for (exheryzp = (42 - 42); SU9OE7uJ > exheryzp; exheryzp = exheryzp + (842 - 841)) {
        gets (R8muajbkOI0D[exheryzp].a0EIXt);
        EofRZBQI (R8muajbkOI0D[exheryzp].a0EIXt, R8muajbkOI0D[exheryzp].ky7tDE);
    }
    {
        exheryzp = (912 - 416) - (588 - 92);
        for (; SU9OE7uJ > exheryzp;) {
            printf ("%s\n%s\n", R8muajbkOI0D[exheryzp].a0EIXt, R8muajbkOI0D[exheryzp].ky7tDE);
            exheryzp = (1428 - 880) - (1080 - 533);
        }
    }
}

