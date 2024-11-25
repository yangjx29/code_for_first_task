int main () {
    int dE7v0pgs, SXED64, iMQXqReJyds, pMB7It9O5m [(1056 - 856)], KerbGvg [(778 - 578)], ZwFCIm6 [(919 - 719)], LpN6xOVdGqz;
    int ZUX6qc0H [(991 - 978)] = {(349 - 349), (330 - 299), (737 - 708), (717 - 686), (948 - 918), (437 - 406), (261 - 231), (1016 - 985), (127 - 96), (653 - 623), (505 - 474), (955 - 925), (882 - 851)};
    int YUeRdkqc [(720 - 707)] = {(41 - 41), (691 - 660), (325 - 297), (717 - 686), (527 - 497), (211 - 180), (259 - 229), (137 - 106), (972 - 941), (851 - 821), 31, (551 - 521), 31};
    scanf ("%d", &dE7v0pgs);
    for (SXED64 = (286 - 286); SXED64 < dE7v0pgs; SXED64 = SXED64 +(532 - 531)) {
        scanf ("%d %d %d", &pMB7It9O5m[SXED64], &KerbGvg[SXED64], &ZwFCIm6[SXED64]);
    }
    {
        SXED64 = 519 - 519;
        while (SXED64 < dE7v0pgs) {
            LpN6xOVdGqz = (236 - 236);
            if ((pMB7It9O5m[SXED64] % (852 - 848) == (380 - 380) && pMB7It9O5m[SXED64] % (531 - 431) != (997 - 997)) || (pMB7It9O5m[SXED64] % (831 - 731) == (87 - 87) && pMB7It9O5m[SXED64] % (1183 - 783) == (322 - 322))) {
                if (KerbGvg[SXED64] < ZwFCIm6[SXED64]) {
                    for (iMQXqReJyds = KerbGvg[SXED64]; iMQXqReJyds < ZwFCIm6[SXED64]; iMQXqReJyds = iMQXqReJyds + (655 - 654)) {
                        LpN6xOVdGqz += ZUX6qc0H[iMQXqReJyds];
                    };
                }
                else {
                    for (iMQXqReJyds = ZwFCIm6[SXED64]; iMQXqReJyds < KerbGvg[SXED64]; iMQXqReJyds = iMQXqReJyds + (33 - 32)) {
                        LpN6xOVdGqz += ZUX6qc0H[iMQXqReJyds];
                    };
                };
            }
            else {
                if (KerbGvg[SXED64] < ZwFCIm6[SXED64]) {
                    for (iMQXqReJyds = KerbGvg[SXED64]; iMQXqReJyds < ZwFCIm6[SXED64]; iMQXqReJyds = iMQXqReJyds + 1) {
                        LpN6xOVdGqz += YUeRdkqc[iMQXqReJyds];
                    };
                }
                else {
                    iMQXqReJyds = SXED64;
                    while (iMQXqReJyds < KerbGvg[SXED64]) {
                        LpN6xOVdGqz += YUeRdkqc[iMQXqReJyds];
                        iMQXqReJyds = iMQXqReJyds + 1;
                    };
                };
            }
            if (LpN6xOVdGqz % (216 - 209) == (468 - 468))
                ;
            else
                printf ("NO\n");
            SXED64++;
        };
    }
    return (158 - 158);
}

