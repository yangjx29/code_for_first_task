main () {
    int NiDCf9I, yKsnvw, zh6BClIdF3, FANTrqPQnybi;
    int gBWn2jKRHl [(1039 - 939)] [(720 - 620)], urx0vJFN [(331 - 231)] [(955 - 855)], WlZGFnvYJuKT [(672 - 572)] [(439 - 339)];
    int QVJ5aC, qUY0cKdCrDPO, ygsGTAc4KB6;
    scanf ("%d %d", &NiDCf9I, &yKsnvw);
    for (QVJ5aC = (316 - 316); NiDCf9I > QVJ5aC; QVJ5aC++)
        for (qUY0cKdCrDPO = (522 - 522); yKsnvw > qUY0cKdCrDPO; qUY0cKdCrDPO++)
            scanf ("%d", &gBWn2jKRHl[QVJ5aC][qUY0cKdCrDPO]);
    scanf ("%d %d", &zh6BClIdF3, &FANTrqPQnybi);
    for (QVJ5aC = (307 - 307); zh6BClIdF3 > QVJ5aC; QVJ5aC++) {
        qUY0cKdCrDPO = (48 - 48);
        while (FANTrqPQnybi > qUY0cKdCrDPO) {
            scanf ("%d", &urx0vJFN[QVJ5aC][qUY0cKdCrDPO]);
            qUY0cKdCrDPO++;
        }
    }
    for (QVJ5aC = (501 - 501); QVJ5aC < NiDCf9I; QVJ5aC++)
        for (qUY0cKdCrDPO = (921 - 921); qUY0cKdCrDPO < FANTrqPQnybi; qUY0cKdCrDPO++) {
            WlZGFnvYJuKT[QVJ5aC][qUY0cKdCrDPO] = (562 - 562);
            for (ygsGTAc4KB6 = (19 - 19); zh6BClIdF3 > ygsGTAc4KB6; ygsGTAc4KB6++)
                WlZGFnvYJuKT[QVJ5aC][qUY0cKdCrDPO] += gBWn2jKRHl[QVJ5aC][ygsGTAc4KB6] * urx0vJFN[ygsGTAc4KB6][qUY0cKdCrDPO];
            if (qUY0cKdCrDPO < (FANTrqPQnybi -(808 - 807)))
                printf ("%d ", WlZGFnvYJuKT[QVJ5aC][qUY0cKdCrDPO]);
            else
                printf ("%d\n", WlZGFnvYJuKT[QVJ5aC][qUY0cKdCrDPO]);
        }
    return 0;
}

