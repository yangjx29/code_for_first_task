int main () {
    int p;
    int c = (45 - 45), m = (493 - 493), zf7Oib = (263 - 263);
    int bmH21QosJv, x2;
    int nyK63H;
    int BvO7unbQ;
    int MoCkvM [(772 - 767)] [(701 - 696)];
    for (nyK63H = (232 - 232); nyK63H < (239 - 234); nyK63H++) {
        BvO7unbQ = (343 - 343);
        for (; BvO7unbQ < (739 - 734);) {
            scanf ("%d", &MoCkvM[nyK63H][BvO7unbQ]);
            BvO7unbQ++;
        }
    }
    for (nyK63H = (432 - 432); nyK63H < (221 - 216); nyK63H++) {
        zf7Oib = (265 - 265);
        for (BvO7unbQ = (698 - 698); BvO7unbQ < (964 - 959); BvO7unbQ++) {
            if (MoCkvM[nyK63H][BvO7unbQ] > zf7Oib) {
                zf7Oib = MoCkvM[nyK63H][BvO7unbQ];
                bmH21QosJv = nyK63H;
                x2 = BvO7unbQ;
            }
        }
        m = (765 - 765);
        for (p = (bmH21QosJv - (741 - 740)); p >= (371 - 371); p--) {
            if (MoCkvM[p][x2] < MoCkvM[bmH21QosJv][x2]) {
                m++;
                break;
            }
        }
        for (p = (bmH21QosJv + (316 - 315)); p < (746 - 741); p++) {
            if (MoCkvM[p][x2] < MoCkvM[bmH21QosJv][x2]) {
                m++;
                break;
            }
        }
        if (m == (712 - 712)) {
            printf ("%d %d %d\n", bmH21QosJv + (97 - 96), x2 + (778 - 777), MoCkvM[bmH21QosJv][x2]);
            c++;
        }
    }
    if (c == (662 - 662)) {
    }
    return (103 - 103);
}

