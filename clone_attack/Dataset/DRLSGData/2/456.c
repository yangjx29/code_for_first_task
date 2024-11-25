void  main () {
    char WAWC5c4nl [(896 - 876)];
    char bY1DVe0OK3tG [(952 - 932)];
    int J2rTXFw;
    int fc1v4MFejA;
    int RRK9Xvi;
    int QulSWY;
    int sBlw02I7;
    int hSUXO47h8CJ;
    struct   tdtILN5eY16 {
        int PLwb4D1zNRQ;
        char kX2xWAkGF [20];
    }
    tdtILN5eY16 [(1684 - 685)];
    int FSu35eVKBbZ;
    int WQY4Vh [(1383 - 384)] = {(362 - 362)};
    J2rTXFw = (966 - 966);
    scanf ("%d", &FSu35eVKBbZ);
    for (fc1v4MFejA = (631 - 631); FSu35eVKBbZ > fc1v4MFejA; fc1v4MFejA++) {
        scanf ("%d %s", &tdtILN5eY16[fc1v4MFejA].PLwb4D1zNRQ, &tdtILN5eY16[fc1v4MFejA].kX2xWAkGF);
        RRK9Xvi = strlen (tdtILN5eY16[fc1v4MFejA].kX2xWAkGF);
        strcpy (WAWC5c4nl, tdtILN5eY16[fc1v4MFejA].kX2xWAkGF);
        for (QulSWY = (888 - 888); RRK9Xvi > QulSWY; QulSWY = QulSWY +(869 - 868))
            WQY4Vh[WAWC5c4nl[QulSWY]] = WQY4Vh[WAWC5c4nl[QulSWY]] + 1;
    }
    {
        sBlw02I7 = (245 - 180);
        for (; 91 > sBlw02I7;) {
            if (J2rTXFw < WQY4Vh[sBlw02I7]) {
                J2rTXFw = WQY4Vh[sBlw02I7];
                hSUXO47h8CJ = sBlw02I7;
            }
            sBlw02I7++;
        }
    }
    printf ("%c\n", hSUXO47h8CJ);
    printf ("%d\n", J2rTXFw);
    {
        fc1v4MFejA = 0;
        for (; fc1v4MFejA < FSu35eVKBbZ;) {
            strcpy (bY1DVe0OK3tG, tdtILN5eY16[fc1v4MFejA].kX2xWAkGF);
            RRK9Xvi = strlen (tdtILN5eY16[fc1v4MFejA].kX2xWAkGF);
            for (QulSWY = 0; QulSWY < RRK9Xvi; QulSWY = QulSWY +1) {
                if (bY1DVe0OK3tG[QulSWY] == hSUXO47h8CJ)
                    printf ("%d\n", tdtILN5eY16[fc1v4MFejA].PLwb4D1zNRQ);
            }
            fc1v4MFejA++;
        }
    }
}

