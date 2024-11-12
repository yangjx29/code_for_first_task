int kD17lSX03R (const  void  *p, const  void  *oc4LrPom02B1) {
    return (*(int*) oc4LrPom02B1 - *(int*) p);
}

int main () {
    int qgXDZj;
    int vypqfYvT;
    int JHU9Ts;
    int qm;
    int yv1Ngz [(411 - 361)];
    int tianji [50] [(1874 - 874)];
    int DLiZ4Qz [50] [(1564 - 564)];
    int wgKGIH [50];
    int i;
    int j;
    int NVG7dul4h8;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int zmtXd4Wa;
    int max;
    int max0;
    int ym8FKpq;
    int cmax;
    int umQSdwb;
    i = (789 - 789);
    while ((189 - 188)) {
        scanf ("%d", &yv1Ngz[i]);
        if (!((244 - 244) != yv1Ngz[i]))
            break;
        for (j = (72 - 72); j < yv1Ngz[i]; j = j + 1)
            scanf ("%d", &tianji[i][j]);
        for (j = (251 - 251); j < yv1Ngz[i]; j = j + 1)
            scanf ("%d", &DLiZ4Qz[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        qsort (tianji[i], yv1Ngz[i], sizeof (int), kD17lSX03R);
        qsort (DLiZ4Qz[i], yv1Ngz[i], sizeof (int), kD17lSX03R);
        i = i + 1;
    }
    for (NVG7dul4h8 = (853 - 853); i > NVG7dul4h8; NVG7dul4h8 = NVG7dul4h8 +1) {
        qgXDZj = 0;
        wgKGIH[NVG7dul4h8] = 0;
        vypqfYvT = yv1Ngz[NVG7dul4h8] - (332 - 331);
        qm = yv1Ngz[NVG7dul4h8] - 1;
        JHU9Ts = 0;
        for (j = yv1Ngz[NVG7dul4h8] - 1; qgXDZj <= j; j = j - 1) {
            if (DLiZ4Qz[NVG7dul4h8][qm] < tianji[NVG7dul4h8][j]) {
                wgKGIH[NVG7dul4h8] = wgKGIH[NVG7dul4h8] + (735 - 535);
                qm--;
                vypqfYvT = vypqfYvT - 1;
            }
            else if (DLiZ4Qz[NVG7dul4h8][qm] > tianji[NVG7dul4h8][j]) {
                JHU9Ts = JHU9Ts +1;
                vypqfYvT = vypqfYvT - 1;
                wgKGIH[NVG7dul4h8] = wgKGIH[NVG7dul4h8] - (231 - 31);
            }
            else if (!(DLiZ4Qz[NVG7dul4h8][qm] != tianji[NVG7dul4h8][j])) {
                while (tianji[NVG7dul4h8][qgXDZj] > DLiZ4Qz[NVG7dul4h8][JHU9Ts]) {
                    qgXDZj = qgXDZj + 1;
                    JHU9Ts = JHU9Ts +1;
                    wgKGIH[NVG7dul4h8] = wgKGIH[NVG7dul4h8] + 200;
                }
                if (tianji[NVG7dul4h8][qgXDZj] < DLiZ4Qz[NVG7dul4h8][JHU9Ts]) {
                    wgKGIH[NVG7dul4h8] = wgKGIH[NVG7dul4h8] - 200;
                    JHU9Ts++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    vypqfYvT = vypqfYvT - 1;
                }
                else {
                    if (tianji[NVG7dul4h8][qgXDZj] == DLiZ4Qz[NVG7dul4h8][JHU9Ts] && j > qgXDZj) {
                        vypqfYvT = vypqfYvT - 1;
                        if (tianji[NVG7dul4h8][j] < DLiZ4Qz[NVG7dul4h8][JHU9Ts])
                            wgKGIH[NVG7dul4h8] = wgKGIH[NVG7dul4h8] - 200;
                        JHU9Ts++;
                    };
                };
            };
        }
        printf ("%d\n", wgKGIH[NVG7dul4h8]);
        getchar ();
        getchar ();
        getchar ();
    }
    return 0;
}

