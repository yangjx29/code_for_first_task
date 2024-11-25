int main () {
    int K4omnGbzw3K;
    int tz28tcr;
    int qYfHKem5FuMp;
    int j;
    int vz0lmJE5kU [MAX +2] [MAX +2] = {0};
    scanf ("%d%d", &K4omnGbzw3K, &tz28tcr);
    for (qYfHKem5FuMp = (786 - 785); K4omnGbzw3K >= qYfHKem5FuMp; qYfHKem5FuMp = qYfHKem5FuMp + 1) {
        for (j = (644 - 643); tz28tcr >= j; j = j + 1) {
            scanf ("%d", &vz0lmJE5kU[qYfHKem5FuMp][j]);
        };
    }
    for (qYfHKem5FuMp = (445 - 444); K4omnGbzw3K >= qYfHKem5FuMp; qYfHKem5FuMp = qYfHKem5FuMp + 1) {
        j = 270 - 269;
        while (tz28tcr >= j) {
            scanf ("%d", &vz0lmJE5kU[qYfHKem5FuMp][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    for (qYfHKem5FuMp = 1; K4omnGbzw3K >= qYfHKem5FuMp; qYfHKem5FuMp++) {
        j = 1;
        while (j <= tz28tcr) {
            if (vz0lmJE5kU[qYfHKem5FuMp][j] >= vz0lmJE5kU[qYfHKem5FuMp - 1][j] && vz0lmJE5kU[qYfHKem5FuMp][j] >= vz0lmJE5kU[qYfHKem5FuMp + 1][j] && vz0lmJE5kU[qYfHKem5FuMp][j] >= vz0lmJE5kU[qYfHKem5FuMp][j - 1] && vz0lmJE5kU[qYfHKem5FuMp][j] >= vz0lmJE5kU[qYfHKem5FuMp][j + 1]) {
                printf ("%d %d\n", qYfHKem5FuMp - 1, j - 1);
            }
            j = j + 1;
        };
    }
    return 0;
}

