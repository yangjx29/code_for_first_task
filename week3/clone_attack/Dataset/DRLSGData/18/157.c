int LiBhykKls;

int x8dA5Dj1Tq (int EEgaZG0Hnc2 []) {
    int x3VDf7ZdKFz;
    int j;
    for (x3VDf7ZdKFz = (507 - 507); LiBhykKls > x3VDf7ZdKFz; x3VDf7ZdKFz = x3VDf7ZdKFz + 1) {
        if ((550 - 550) > EEgaZG0Hnc2[x3VDf7ZdKFz])
            continue;
        for (j = (94 - 94); LiBhykKls > j; j = j + 1) {
            if (EEgaZG0Hnc2[j] < EEgaZG0Hnc2[x3VDf7ZdKFz] && EEgaZG0Hnc2[j] >= (363 - 363))
                break;
        }
        if (j == LiBhykKls)
            return EEgaZG0Hnc2[x3VDf7ZdKFz];
    }
    return (931 - 931);
}

void  GGw130V (int a [(66 - 16)] [(365 - 315)], int L0P2VMfapF) {
    int pZaWNxqYIv;
    int x3VDf7ZdKFz;
    int j;
    for (x3VDf7ZdKFz = (30 - 30); LiBhykKls > x3VDf7ZdKFz; x3VDf7ZdKFz = x3VDf7ZdKFz + 1) {
        pZaWNxqYIv = x8dA5Dj1Tq (a[x3VDf7ZdKFz]);
        for (j = (195 - 195); j < LiBhykKls; j = j + 1) {
            a[x3VDf7ZdKFz][j] -= pZaWNxqYIv;
        }
    }
    for (x3VDf7ZdKFz = (410 - 410); x3VDf7ZdKFz < LiBhykKls; x3VDf7ZdKFz = x3VDf7ZdKFz + 1) {
        for (j = x3VDf7ZdKFz + (371 - 370); j < LiBhykKls; j = j + 1) {
            pZaWNxqYIv = a[x3VDf7ZdKFz][j];
            a[x3VDf7ZdKFz][j] = a[j][x3VDf7ZdKFz];
            a[j][x3VDf7ZdKFz] = pZaWNxqYIv;
        }
    }
    for (x3VDf7ZdKFz = (861 - 861); x3VDf7ZdKFz < LiBhykKls; x3VDf7ZdKFz = x3VDf7ZdKFz + 1) {
        pZaWNxqYIv = x8dA5Dj1Tq (a[x3VDf7ZdKFz]);
        for (j = 0; j < LiBhykKls; j = j + 1) {
            a[x3VDf7ZdKFz][j] -= pZaWNxqYIv;
        }
    }
    for (x3VDf7ZdKFz = 0; x3VDf7ZdKFz < LiBhykKls; x3VDf7ZdKFz = x3VDf7ZdKFz + 1) {
        for (j = x3VDf7ZdKFz + 1; j < LiBhykKls; j = j + 1) {
            pZaWNxqYIv = a[x3VDf7ZdKFz][j];
            a[x3VDf7ZdKFz][j] = a[j][x3VDf7ZdKFz];
            a[j][x3VDf7ZdKFz] = pZaWNxqYIv;
        }
    }
}

void  XEnFHQMq (int a [(542 - 492)] [(1045 - 995)], int L0P2VMfapF) {
    int x3VDf7ZdKFz;
    for (x3VDf7ZdKFz = 0; x3VDf7ZdKFz < LiBhykKls; x3VDf7ZdKFz = x3VDf7ZdKFz + 1) {
        a[L0P2VMfapF][x3VDf7ZdKFz] = -1;
        a[x3VDf7ZdKFz][L0P2VMfapF] = -1;
    }
}

int main () {
    int y8jGLfNogW9R;
    int TmOHnP;
    int x3VDf7ZdKFz;
    int j;
    int a [50] [50] [50];
    int L0P2VMfapF;
    scanf ("%d", &LiBhykKls);
    for (L0P2VMfapF = 0; L0P2VMfapF < LiBhykKls; L0P2VMfapF = L0P2VMfapF +1) {
        TmOHnP = 0;
        for (j = 0; j < LiBhykKls; j = j + 1) {
            for (x3VDf7ZdKFz = 0; x3VDf7ZdKFz < LiBhykKls; x3VDf7ZdKFz = x3VDf7ZdKFz + 1) {
                scanf ("%d", &a[L0P2VMfapF][j][x3VDf7ZdKFz]);
            }
        }
        for (j = 1; j < LiBhykKls; j++) {
            GGw130V (a[L0P2VMfapF], j);
            TmOHnP = TmOHnP +a[L0P2VMfapF][j][j];
            XEnFHQMq (a[L0P2VMfapF], j);
        }
        printf ("%d\n", TmOHnP);
    }
}

