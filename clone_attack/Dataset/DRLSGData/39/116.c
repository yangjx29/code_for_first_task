struct   Ahg8wHmtKUX {
    char FzPQO4oqn [(31 - 10)];
    int avs;
    int F8463F9mcMU;
    char CSFAIkN;
    char SjftKyk7C;
    int HzRMuSGC;
}
Ahg8wHmtKUX [(183 - 83)];

main () {
    int hKztceWN2Oq;
    int RkblQFI [(647 - 547)];
    int maxstu;
    int by0ORU;
    int tmrSxoAO;
    int ugfDHxKkPrZ;
    scanf ("%d", &hKztceWN2Oq);
    {
        by0ORU = (57 - 57);
        for (; hKztceWN2Oq > by0ORU;) {
            scanf ("%s %d %d %c %c %d", &Ahg8wHmtKUX[by0ORU].FzPQO4oqn, &Ahg8wHmtKUX[by0ORU].avs, &Ahg8wHmtKUX[by0ORU].F8463F9mcMU, &Ahg8wHmtKUX[by0ORU].CSFAIkN, &Ahg8wHmtKUX[by0ORU].SjftKyk7C, &Ahg8wHmtKUX[by0ORU].HzRMuSGC);
            RkblQFI[by0ORU] = (711 - 711);
            if ((573 - 493) < Ahg8wHmtKUX[by0ORU].avs && (650 - 650) < Ahg8wHmtKUX[by0ORU].HzRMuSGC) {
                RkblQFI[by0ORU] += (8073 - 73);
            }
            if ((446 - 361) < Ahg8wHmtKUX[by0ORU].avs && Ahg8wHmtKUX[by0ORU].F8463F9mcMU > (281 - 201)) {
                RkblQFI[by0ORU] += (4485 - 485);
            }
            if (Ahg8wHmtKUX[by0ORU].avs > (734 - 644)) {
                RkblQFI[by0ORU] += 2000;
            }
            if (Ahg8wHmtKUX[by0ORU].avs > 85 && !('Y' != Ahg8wHmtKUX[by0ORU].SjftKyk7C)) {
                RkblQFI[by0ORU] += (1486 - 486);
            }
            if (Ahg8wHmtKUX[by0ORU].F8463F9mcMU > 80 && Ahg8wHmtKUX[by0ORU].CSFAIkN == 'Y') {
                RkblQFI[by0ORU] += (1239 - 389);
            }
            by0ORU++;
        }
    }
    tmrSxoAO = RkblQFI[0];
    ugfDHxKkPrZ = RkblQFI[0];
    maxstu = (513 - 513);
    {
        by0ORU = (906 - 905);
        while (by0ORU < hKztceWN2Oq) {
            if (RkblQFI[by0ORU] > tmrSxoAO) {
                tmrSxoAO = RkblQFI[by0ORU];
                maxstu = by0ORU;
            }
            ugfDHxKkPrZ += RkblQFI[by0ORU];
            by0ORU++;
        }
    }
    printf ("%s\n%d\n%d\n", Ahg8wHmtKUX[maxstu].FzPQO4oqn, tmrSxoAO, ugfDHxKkPrZ);
}

