int main () {
    int kmEjPOnt;
    char QcEhVNBT5wrO [(697 - 195)], WDqApw6KMvLl [502] [7];
    int g25eWUF8f7q;
    int cNH1xV [502];
    int PQ5IYun;
    PQ5IYun = (437 - 437);
    memset (cNH1xV, 0, sizeof (cNH1xV));
    scanf ("%d", &g25eWUF8f7q);
    scanf ("%s", &QcEhVNBT5wrO);
    kmEjPOnt = strlen (QcEhVNBT5wrO);
    for (int Bqz7mCdS = 0;
    Bqz7mCdS < kmEjPOnt - g25eWUF8f7q + (941 - 940); Bqz7mCdS++) {
        for (int PX472GDTs = 0;
        PX472GDTs < g25eWUF8f7q; PX472GDTs++)
            WDqApw6KMvLl[Bqz7mCdS][PX472GDTs] = QcEhVNBT5wrO[Bqz7mCdS +PX472GDTs];
        WDqApw6KMvLl[Bqz7mCdS][g25eWUF8f7q] = 0;
    }
    for (int Bqz7mCdS = 0;
    Bqz7mCdS < kmEjPOnt - g25eWUF8f7q; Bqz7mCdS++)
        for (int PX472GDTs = Bqz7mCdS +1;
        PX472GDTs < kmEjPOnt - g25eWUF8f7q + 1; PX472GDTs++)
            if (strcmp (&WDqApw6KMvLl[Bqz7mCdS][0], &WDqApw6KMvLl[PX472GDTs][0]) == 0)
                cNH1xV[Bqz7mCdS]++;
    for (int Bqz7mCdS = 0;
    Bqz7mCdS < kmEjPOnt - g25eWUF8f7q + 1; Bqz7mCdS++)
        if (cNH1xV[Bqz7mCdS] > PQ5IYun) {
            PQ5IYun = cNH1xV[Bqz7mCdS];
        }
    if (0 == PQ5IYun) {
        return 0;
    }
    printf ("%d\n", PQ5IYun +1);
    for (int Bqz7mCdS = 0;
    Bqz7mCdS < kmEjPOnt - g25eWUF8f7q + 1; Bqz7mCdS++)
        if (cNH1xV[Bqz7mCdS] == PQ5IYun)
            printf ("%s\n", &WDqApw6KMvLl[Bqz7mCdS][0]);
    return 0;
}

