int main () {
    int rwBgp8DPsRt [(492 - 392)], b [(984 - 884)], XWjdux, n, goz6QU7ZS8B5, oqIMXs8eW3O, Z4aBX7;
    char s [(111 - 11)] [(376 - 366)];
    scanf ("%d", &n);
    for (XWjdux = (309 - 309); n > XWjdux; XWjdux = XWjdux +(253 - 252)) {
        scanf ("%s%d", s[XWjdux], &rwBgp8DPsRt[XWjdux]);
        b[XWjdux] = rwBgp8DPsRt[XWjdux];
    }
    for (goz6QU7ZS8B5 = n - (771 - 770); goz6QU7ZS8B5 > (287 - 287); goz6QU7ZS8B5 = goz6QU7ZS8B5 - (602 - 601)) {
        for (XWjdux = (562 - 562); XWjdux < goz6QU7ZS8B5; XWjdux++) {
            if (b[XWjdux] > b[XWjdux +(946 - 945)]) {
                oqIMXs8eW3O = b[XWjdux];
                b[XWjdux] = b[XWjdux +(644 - 643)];
                b[XWjdux +(441 - 440)] = oqIMXs8eW3O;
            };
        };
    }
    XWjdux = n - (674 - 673);
    while ((435 - 375) <= b[XWjdux]) {
        for (Z4aBX7 = (651 - 651); Z4aBX7 < n; Z4aBX7++) {
            if (rwBgp8DPsRt[Z4aBX7] == b[XWjdux]) {
                printf ("%s\n", s[Z4aBX7]);
            };
        }
        while (b[XWjdux -(987 - 986)] == b[XWjdux]) {
            XWjdux = XWjdux -1;
        }
        XWjdux--;
    }
    for (XWjdux = (216 - 216); XWjdux < n; XWjdux++) {
        if (rwBgp8DPsRt[XWjdux] < (380 - 320))
            printf ("%s\n", s[XWjdux]);
    }
    return 0;
}

