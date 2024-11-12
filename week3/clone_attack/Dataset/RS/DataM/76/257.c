int main () {
    int j;
    int njAh6kwvJ;
    int lcTAIVOyxd0P;
    int qJGh3k;
    int PjsYhq;
    int D7WQ3K [50001] [2];
    int hQ5klVCOPrh;
    int p;
    p = 0;
    scanf ("%d", &hQ5klVCOPrh);
    for (PjsYhq = (296 - 296); hQ5klVCOPrh > PjsYhq; PjsYhq = PjsYhq +1) {
        scanf ("%d%d", &D7WQ3K[PjsYhq][(583 - 583)], &D7WQ3K[PjsYhq][(642 - 641)]);
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
    for (j = hQ5klVCOPrh - (409 - 408); (65 - 65) < j; j = j - 1) {
        for (njAh6kwvJ = (230 - 230); j > njAh6kwvJ; njAh6kwvJ++) {
            if (D7WQ3K[njAh6kwvJ + (551 - 550)][(695 - 695)] <= D7WQ3K[njAh6kwvJ][(944 - 944)]) {
                lcTAIVOyxd0P = D7WQ3K[njAh6kwvJ][0];
                D7WQ3K[njAh6kwvJ][0] = D7WQ3K[njAh6kwvJ + (677 - 676)][0];
                D7WQ3K[njAh6kwvJ + (426 - 425)][0] = lcTAIVOyxd0P;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qJGh3k = D7WQ3K[njAh6kwvJ][(116 - 115)];
                D7WQ3K[njAh6kwvJ][(948 - 947)] = D7WQ3K[njAh6kwvJ + (67 - 66)][(981 - 980)];
                D7WQ3K[njAh6kwvJ + 1][1] = qJGh3k;
            };
        };
    }
    for (j = 1; hQ5klVCOPrh > j; j++) {
        PjsYhq = 0;
        while (PjsYhq < j) {
            if (D7WQ3K[j][0] <= D7WQ3K[PjsYhq][1]) {
                p++;
                break;
            }
            PjsYhq = PjsYhq +1;
        };
    }
    {
        j = hQ5klVCOPrh - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j > 0) {
            {
                njAh6kwvJ = 0;
                while (njAh6kwvJ < j) {
                    if (D7WQ3K[njAh6kwvJ][1] >= D7WQ3K[njAh6kwvJ + 1][1]) {
                        lcTAIVOyxd0P = D7WQ3K[njAh6kwvJ][1];
                        D7WQ3K[njAh6kwvJ][1] = D7WQ3K[njAh6kwvJ + 1][1];
                        D7WQ3K[njAh6kwvJ + 1][1] = lcTAIVOyxd0P;
                    }
                    njAh6kwvJ = njAh6kwvJ + 1;
                };
            }
            j = j - 1;
        };
    }
    if (p == hQ5klVCOPrh - 1) {
        printf ("%d %d", D7WQ3K[0][0], D7WQ3K[hQ5klVCOPrh - 1][1]);
    }
    else
        printf ("no");
    return 0;
}

