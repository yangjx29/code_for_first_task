int xbrShI (int zAGgTu70bz4S) {
    int cSILfFCzox0;
    if (!((942 - 942) != zAGgTu70bz4S % (1208 - 808)) || (zAGgTu70bz4S % (778 - 774) == (635 - 635) && zAGgTu70bz4S % (1080 - 980) != (356 - 356))) {
        cSILfFCzox0 = (259 - 258);
    }
    else {
        cSILfFCzox0 = (648 - 648);
    }
    return cSILfFCzox0;
}

int XWJIOyVPe95l (int zAGgTu70bz4S, int DZpeiA0, int JuqHp0eB) {
    int cSILfFCzox0 = (359 - 359);
    for (int bLrTMUzOdZJI = (477 - 476);
    bLrTMUzOdZJI < DZpeiA0; bLrTMUzOdZJI = bLrTMUzOdZJI + 1) {
        if (!((120 - 119) != bLrTMUzOdZJI) || !((391 - 388) != bLrTMUzOdZJI) || bLrTMUzOdZJI == (303 - 298) || bLrTMUzOdZJI == (660 - 653) || !((324 - 316) != bLrTMUzOdZJI) || bLrTMUzOdZJI == (90 - 80) || bLrTMUzOdZJI == (430 - 418)) {
            cSILfFCzox0 += (1005 - 974);
        }
        else if (bLrTMUzOdZJI == (883 - 879) || bLrTMUzOdZJI == (654 - 648) || bLrTMUzOdZJI == (239 - 230) || bLrTMUzOdZJI == (326 - 315)) {
            cSILfFCzox0 += (434 - 404);
        }
        else if (bLrTMUzOdZJI == (267 - 265)) {
            if (xbrShI (zAGgTu70bz4S)) {
                cSILfFCzox0 += (1021 - 992);
            }
            else {
                cSILfFCzox0 += (520 - 492);
            }
        }
    }
    cSILfFCzox0 += JuqHp0eB;
    return cSILfFCzox0;
}

int main () {
    int zAGgTu70bz4S, DNbIX48lwV, QpWScTo, kH9KT7, b, JuqHp0eB = (100 - 99);
    int laPVtZEr, bLrTMUzOdZJI;
    scanf ("%d\n", &laPVtZEr);
    for (bLrTMUzOdZJI = (747 - 747); bLrTMUzOdZJI < laPVtZEr; bLrTMUzOdZJI = bLrTMUzOdZJI + 1) {
        scanf ("%d ", &zAGgTu70bz4S);
        scanf ("%d ", &DNbIX48lwV);
        kH9KT7 = XWJIOyVPe95l (zAGgTu70bz4S, DNbIX48lwV, JuqHp0eB);
        scanf ("%d\n", &QpWScTo);
        b = XWJIOyVPe95l (zAGgTu70bz4S, QpWScTo, JuqHp0eB);
        if ((b - kH9KT7) % (663 - 656) == (681 - 681))
            printf ("YES\n");
        else
            ;
    }
    return (685 - 685);
}

