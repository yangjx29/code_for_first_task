int main () {
    int wH2sCFX, j, AuSw6KC, ww7UboF = (393 - 393);
    int pRc468l [50000] [2];
    int GT3C9z;
    int SM7ZHJb1dKTi [2];
    scanf ("%d", &GT3C9z);
    for (wH2sCFX = (978 - 978); wH2sCFX < GT3C9z; wH2sCFX++) {
        scanf ("%d%d", &pRc468l[wH2sCFX][(961 - 961)], &pRc468l[wH2sCFX][(496 - 495)]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (wH2sCFX = 0; GT3C9z -(323 - 322) > wH2sCFX; wH2sCFX++) {
        j = 0;
        while (GT3C9z -(808 - 807) - wH2sCFX > j) {
            if (pRc468l[j][0] > pRc468l[j + 1][0]) {
                AuSw6KC = pRc468l[j][0];
                pRc468l[j][0] = pRc468l[j + 1][0];
                pRc468l[j + 1][0] = AuSw6KC;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                AuSw6KC = pRc468l[j][1];
                pRc468l[j][1] = pRc468l[j + 1][1];
                pRc468l[j + 1][1] = AuSw6KC;
            }
            j++;
        };
    }
    SM7ZHJb1dKTi[0] = pRc468l[0][0];
    SM7ZHJb1dKTi[1] = pRc468l[0][1];
    {
        wH2sCFX = 1;
        while (wH2sCFX < GT3C9z) {
            if (SM7ZHJb1dKTi[1] < pRc468l[wH2sCFX][0] || SM7ZHJb1dKTi[0] > pRc468l[wH2sCFX][1]) {
                ww7UboF = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                break;
            }
            else {
                if (SM7ZHJb1dKTi[0] > pRc468l[wH2sCFX][0])
                    SM7ZHJb1dKTi[0] = pRc468l[wH2sCFX][0];
                if (pRc468l[wH2sCFX][1] > SM7ZHJb1dKTi[1])
                    SM7ZHJb1dKTi[1] = pRc468l[wH2sCFX][1];
            }
            wH2sCFX++;
        };
    }
    if (ww7UboF == 0)
        printf ("%d %d\n", SM7ZHJb1dKTi[0], SM7ZHJb1dKTi[1]);
    return 0;
}

