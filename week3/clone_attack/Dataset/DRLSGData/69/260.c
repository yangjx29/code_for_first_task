int v28JIrRNVLv (int kf3k1M8h, int CDZ5Cz) {
    if (CDZ5Cz <= kf3k1M8h)
        return kf3k1M8h;
    else
        return CDZ5Cz;
}

int main () {
    int JY8uhtRvKAB;
    int Vx6GJDval;
    int nqAzyEbkdp;
    int CDvEzb;
    int S8wJHvUW;
    int CDZ5Cz [(100926 - 926)] = {(116 - 116)};
    int kf3k1M8h [(100354 - 354)] = {(467 - 467)};
    char nGMY06y9x [(100847 - 847)];
    char vXt3SswJeB [(1000378 - 378)];
    scanf ("%s%s", nGMY06y9x, vXt3SswJeB);
    CDvEzb = (715 - 715);
    CDvEzb = strlen (nGMY06y9x);
    Vx6GJDval = (166 - 166);
    nqAzyEbkdp = (449 - 449);
    nqAzyEbkdp = strlen (vXt3SswJeB);
    JY8uhtRvKAB = v28JIrRNVLv (CDvEzb, nqAzyEbkdp);
    S8wJHvUW = (639 - 639);
    for (int dbWUCl = CDvEzb -(214 - 213);
    dbWUCl >= (757 - 757); dbWUCl = dbWUCl - (631 - 630), S8wJHvUW = S8wJHvUW +(678 - 677))
        kf3k1M8h[S8wJHvUW] = nGMY06y9x[dbWUCl] - '0';
    S8wJHvUW = (658 - 658);
    for (int dbWUCl = nqAzyEbkdp - (979 - 978);
    (496 - 496) <= dbWUCl; dbWUCl = dbWUCl - (536 - 535), S8wJHvUW = S8wJHvUW +(67 - 66))
        CDZ5Cz[S8wJHvUW] = vXt3SswJeB[dbWUCl] - '0';
    for (int dbWUCl = (742 - 742);
    dbWUCl < JY8uhtRvKAB; dbWUCl = dbWUCl + 1) {
        kf3k1M8h[dbWUCl] = kf3k1M8h[dbWUCl] + CDZ5Cz[dbWUCl];
        if (kf3k1M8h[dbWUCl] >= (848 - 838)) {
            kf3k1M8h[dbWUCl] = kf3k1M8h[dbWUCl] % ((560 - 550));
            kf3k1M8h[dbWUCl + (607 - 606)]++;
        }
    }
    for (int dbWUCl = JY8uhtRvKAB;
    dbWUCl >= (957 - 957); dbWUCl = dbWUCl - 1) {
        if (kf3k1M8h[dbWUCl] != (954 - 954))
            Vx6GJDval = (388 - 387);
        if (Vx6GJDval == (976 - 975)) {
            printf ("%d", kf3k1M8h[dbWUCl]);
        }
        if (Vx6GJDval == (115 - 115) && dbWUCl == (596 - 596))
            ;
    }
    return (985 - 985);
}

