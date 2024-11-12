main () {
    int pc1Hh6U5iFzx;
    int y;
    int z;
    int HGqjvcrPZd6M;
    int s;
    int t;
    int MR8YuPmn3;
    int tpdWTSDJ;
    int d;
    struct   student {
        int DzMsxY;
        int EuyEhWS;
        int PfIJ0iHV;
        int score;
    }
    student [(100336 - 335)];
    int n;
    int i;
    int zIkPgQwV7Nc;
    int o06cEs8Wp;
    int zuzqvdF;
    d = (773 - 772);
    tpdWTSDJ = (649 - 648);
    MR8YuPmn3 = (307 - 306);
    scanf ("%d", &n);
    {
        i = 850 - 849;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%d %d %d", &student[i].DzMsxY, &student[i].EuyEhWS, &student[i].PfIJ0iHV);
            i++;
        };
    }
    {
        i = 404 - 403;
        while (i <= n) {
            student[i].score = (student[i].EuyEhWS + student[i].PfIJ0iHV);
            i++;
        };
    }
    for (i = n; (257 - 256) <= i; i = i - 1)
        if (student[i].score >= MR8YuPmn3) {
            MR8YuPmn3 = student[i].score;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            pc1Hh6U5iFzx = i;
        }
    for (i = n; i >= 1; i = i - 1) {
        if ((i != pc1Hh6U5iFzx) && (student[i].score >= tpdWTSDJ)) {
            tpdWTSDJ = student[i].score;
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
            y = i;
        };
    }
    for (i = n; i >= 1; i = i - 1) {
        if ((i != pc1Hh6U5iFzx) && (i != y) && (student[i].score >= d)) {
            d = student[i].score;
            z = i;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", student[pc1Hh6U5iFzx].DzMsxY, student[pc1Hh6U5iFzx].score, student[y].DzMsxY, student[y].score, student[z].DzMsxY, student[z].score);
}

