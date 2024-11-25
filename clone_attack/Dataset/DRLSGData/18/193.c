int main () {
    int ryLYRn;
    int i;
    i = (443 - 443);
    cin >> ryLYRn;
    for (; i < ryLYRn;) {
        int hQi26em [ryLYRn] [ryLYRn];
        int EMOP5DzIiu [ryLYRn];
        int diLcYVRknbU [ryLYRn];
        int uIHF65qsLyh, j34BjdEZysv;
        int pq5bCBj7mXa;
        int MT2qouH;
        pq5bCBj7mXa = (60 - 59);
        i = i + 1;
        MT2qouH = (890 - 890);
        for (uIHF65qsLyh = (80 - 80); uIHF65qsLyh < ryLYRn; uIHF65qsLyh = uIHF65qsLyh + 1)
            for (j34BjdEZysv = (365 - 365); ryLYRn > j34BjdEZysv; j34BjdEZysv = j34BjdEZysv + 1) {
                cin >> hQi26em[uIHF65qsLyh][j34BjdEZysv];
            }
        for (; ryLYRn > pq5bCBj7mXa;) {
            for (uIHF65qsLyh = (773 - 773); uIHF65qsLyh < ryLYRn; uIHF65qsLyh = uIHF65qsLyh + 1) {
                if ((666 - 666) > hQi26em[uIHF65qsLyh][(572 - 572)])
                    uIHF65qsLyh = uIHF65qsLyh + 1;
                EMOP5DzIiu[uIHF65qsLyh] = hQi26em[uIHF65qsLyh][(277 - 277)];
                for (j34BjdEZysv = (485 - 485); ryLYRn > j34BjdEZysv; j34BjdEZysv = j34BjdEZysv + 1) {
                    if (hQi26em[uIHF65qsLyh][j34BjdEZysv] < EMOP5DzIiu[uIHF65qsLyh] && (674 - 674) <= hQi26em[uIHF65qsLyh][j34BjdEZysv])
                        EMOP5DzIiu[uIHF65qsLyh] = hQi26em[uIHF65qsLyh][j34BjdEZysv];
                }
            }
            for (uIHF65qsLyh = 0; uIHF65qsLyh < ryLYRn; uIHF65qsLyh = uIHF65qsLyh + 1) {
                for (j34BjdEZysv = 0; j34BjdEZysv < ryLYRn; j34BjdEZysv = j34BjdEZysv + 1) {
                    if (0 <= hQi26em[uIHF65qsLyh][j34BjdEZysv]) {
                        hQi26em[uIHF65qsLyh][j34BjdEZysv] = hQi26em[uIHF65qsLyh][j34BjdEZysv] - EMOP5DzIiu[uIHF65qsLyh];
                    }
                }
            }
            for (uIHF65qsLyh = 0; uIHF65qsLyh < ryLYRn; uIHF65qsLyh = uIHF65qsLyh + 1) {
                if (0 > hQi26em[0][uIHF65qsLyh])
                    uIHF65qsLyh = uIHF65qsLyh + 1;
                diLcYVRknbU[uIHF65qsLyh] = hQi26em[0][uIHF65qsLyh];
                for (j34BjdEZysv = 0; j34BjdEZysv < ryLYRn; j34BjdEZysv = j34BjdEZysv + 1) {
                    if (diLcYVRknbU[uIHF65qsLyh] > hQi26em[j34BjdEZysv][uIHF65qsLyh] && hQi26em[j34BjdEZysv][uIHF65qsLyh] >= 0)
                        diLcYVRknbU[uIHF65qsLyh] = hQi26em[j34BjdEZysv][uIHF65qsLyh];
                }
            }
            for (uIHF65qsLyh = 0; uIHF65qsLyh < ryLYRn; uIHF65qsLyh = uIHF65qsLyh + 1) {
                for (j34BjdEZysv = 0; j34BjdEZysv < ryLYRn; j34BjdEZysv++)
                    if (hQi26em[j34BjdEZysv][uIHF65qsLyh] >= 0) {
                        hQi26em[j34BjdEZysv][uIHF65qsLyh] = hQi26em[j34BjdEZysv][uIHF65qsLyh] - diLcYVRknbU[uIHF65qsLyh];
                    }
            }
            MT2qouH = MT2qouH +hQi26em[pq5bCBj7mXa][pq5bCBj7mXa];
            for (uIHF65qsLyh = 0; uIHF65qsLyh < ryLYRn; uIHF65qsLyh = uIHF65qsLyh + 1) {
                hQi26em[pq5bCBj7mXa][uIHF65qsLyh] = -(150 - 149);
                hQi26em[uIHF65qsLyh][pq5bCBj7mXa] = -1;
            }
            pq5bCBj7mXa = pq5bCBj7mXa + 1;
        }
        cout << MT2qouH << endl;
        MT2qouH = 0;
    }
    return 0;
}

