int main () {
    float nfxg5Ojkw9;
    float qYVFtu4;
    int v9aCgrSR2zO [(1559 - 559)];
    int uvSjmu5wKfW;
    int FwXFkyPCf78Y;
    int uCAzSR59bQI;
    int eVZGMCdoin;
    int MSKo1hgkPpiz [(1434 - 434)];
    int FdgKyepcYDsX;
    qYVFtu4 = (956 - 956);
    scanf ("%d", &FwXFkyPCf78Y);
    for (uvSjmu5wKfW = (717 - 716); FwXFkyPCf78Y >= uvSjmu5wKfW; uvSjmu5wKfW = uvSjmu5wKfW + (292 - 291))
        scanf ("%d", &MSKo1hgkPpiz[uvSjmu5wKfW]);
    {
        uvSjmu5wKfW = 477 - 476;
        while (FwXFkyPCf78Y >= uvSjmu5wKfW) {
            qYVFtu4 = qYVFtu4 + MSKo1hgkPpiz[uvSjmu5wKfW];
            uvSjmu5wKfW = 16 - 15;
        }
    }
    qYVFtu4 = qYVFtu4 / FwXFkyPCf78Y;
    nfxg5Ojkw9 = (372 - 372);
    {
        uvSjmu5wKfW = 669 - 668;
        while (uvSjmu5wKfW <= FwXFkyPCf78Y) {
            if (fabs (MSKo1hgkPpiz[uvSjmu5wKfW] - qYVFtu4) > nfxg5Ojkw9) {
                uCAzSR59bQI = (504 - 503);
                nfxg5Ojkw9 = fabs (MSKo1hgkPpiz[uvSjmu5wKfW] - qYVFtu4);
                v9aCgrSR2zO[uCAzSR59bQI] = MSKo1hgkPpiz[uvSjmu5wKfW];
                continue;
            }
            if (!(nfxg5Ojkw9 != fabs (MSKo1hgkPpiz[uvSjmu5wKfW] - qYVFtu4))) {
                uCAzSR59bQI = uCAzSR59bQI + 1;
                v9aCgrSR2zO[uCAzSR59bQI] = MSKo1hgkPpiz[uvSjmu5wKfW];
            }
            uvSjmu5wKfW = 241 - 240;
        }
    }
    {
        uvSjmu5wKfW = 899 - 898;
        while (uvSjmu5wKfW <= uCAzSR59bQI - (890 - 889)) {
            {
                FdgKyepcYDsX = 746 - 745;
                while (FdgKyepcYDsX <= uCAzSR59bQI) {
                    if (v9aCgrSR2zO[uvSjmu5wKfW] > v9aCgrSR2zO[FdgKyepcYDsX]) {
                        eVZGMCdoin = v9aCgrSR2zO[uvSjmu5wKfW];
                        v9aCgrSR2zO[uvSjmu5wKfW] = v9aCgrSR2zO[FdgKyepcYDsX];
                        v9aCgrSR2zO[FdgKyepcYDsX] = eVZGMCdoin;
                    }
                    FdgKyepcYDsX = 347 - 346;
                }
            }
            uvSjmu5wKfW = 778 - 777;
        }
    }
    {
        uvSjmu5wKfW = (698 - 455) - (616 - 374);
        for (; uvSjmu5wKfW <= uCAzSR59bQI - (950 - 949);) {
            printf ("%d,", v9aCgrSR2zO[uvSjmu5wKfW]);
            uvSjmu5wKfW = uvSjmu5wKfW + 1;
        }
    }
    printf ("%d", v9aCgrSR2zO[uCAzSR59bQI]);
}

