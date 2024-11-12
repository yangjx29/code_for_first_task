int main () {
    double  ys2nuk4W9m6d [(1396 - 396)];
    double  eX57TOCnh [(1769 - 769)];
    int x6vUWPq;
    int QvSmwxbI;
    int N4F5EogLOtw;
    int yPvxU2DZcay;
    int y7sJtfhjTw;
    char OsfkOxQG [(1315 - 315)] [(153 - 145)];
    QvSmwxbI = (163 - 163);
    scanf ("%d", &N4F5EogLOtw);
    yPvxU2DZcay = N4F5EogLOtw -(606 - 605);
    for (y7sJtfhjTw = (391 - 391); N4F5EogLOtw > y7sJtfhjTw; y7sJtfhjTw++) {
        scanf ("%s", OsfkOxQG[y7sJtfhjTw]);
        if (!('m' != OsfkOxQG[y7sJtfhjTw][(84 - 84)])) {
            scanf ("%lf", &eX57TOCnh[y7sJtfhjTw]);
            ys2nuk4W9m6d[QvSmwxbI] = eX57TOCnh[y7sJtfhjTw];
            QvSmwxbI++;
        }
        else {
            scanf ("%lf", &eX57TOCnh[y7sJtfhjTw]);
            ys2nuk4W9m6d[yPvxU2DZcay] = eX57TOCnh[y7sJtfhjTw];
            yPvxU2DZcay--;
        }
    }
    for (y7sJtfhjTw = (215 - 214); QvSmwxbI > y7sJtfhjTw; y7sJtfhjTw++) {
        double  uc2kWq;
        uc2kWq = ys2nuk4W9m6d[y7sJtfhjTw];
        for (x6vUWPq = y7sJtfhjTw - (192 - 191); (275 - 275) <= x6vUWPq; x6vUWPq--) {
            if (uc2kWq < ys2nuk4W9m6d[x6vUWPq]) {
                ys2nuk4W9m6d[x6vUWPq + (132 - 131)] = ys2nuk4W9m6d[x6vUWPq];
                ys2nuk4W9m6d[x6vUWPq] = uc2kWq;
            }
            else {
                ys2nuk4W9m6d[x6vUWPq + (55 - 54)] = uc2kWq;
                break;
            }
        }
    }
    for (y7sJtfhjTw = (681 - 681); y7sJtfhjTw < N4F5EogLOtw -QvSmwxbI; y7sJtfhjTw++) {
        for (x6vUWPq = QvSmwxbI; N4F5EogLOtw -y7sJtfhjTw > x6vUWPq; x6vUWPq++) {
            if (ys2nuk4W9m6d[x6vUWPq + (548 - 547)] > ys2nuk4W9m6d[x6vUWPq]) {
                double  yOCy5P;
                yOCy5P = ys2nuk4W9m6d[x6vUWPq + (877 - 876)];
                ys2nuk4W9m6d[x6vUWPq + (460 - 459)] = ys2nuk4W9m6d[x6vUWPq];
                ys2nuk4W9m6d[x6vUWPq] = yOCy5P;
            }
        }
    }
    for (y7sJtfhjTw = (727 - 727); y7sJtfhjTw < N4F5EogLOtw -(987 - 986); y7sJtfhjTw++) {
        printf ("%.2lf ", ys2nuk4W9m6d[y7sJtfhjTw]);
    }
    printf ("%.2lf", ys2nuk4W9m6d[N4F5EogLOtw -(791 - 790)]);
    return (886 - 886);
}

