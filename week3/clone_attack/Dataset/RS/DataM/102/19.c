float ey8mZa [(172 - 122)];
int xkC5dnugfU = 0;
float liqnM1mZQ [(346 - 296)];
int nf = 0;

int fxYzAjTpu (const  void  *N81e5UOF, const  void  *RQRvjoGwiBC) {
    float y;
    y = *(float*) RQRvjoGwiBC;
    float JOpTjg3L4V;
    JOpTjg3L4V = *(float*) N81e5UOF;
    if (JOpTjg3L4V > y)
        return 1;
    if (!(y != JOpTjg3L4V))
        return 0;
    if (y > JOpTjg3L4V)
        return -1;
}

int wBpXv5Ejxk (const  void  *N81e5UOF, const  void  *RQRvjoGwiBC) {
    return -fxYzAjTpu (N81e5UOF, RQRvjoGwiBC);
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

void  main () {
    int HW0NEk8wmCV;
    int CaI1soSfkEm;
    char *LMviE5FwAsj2;
    char rfw4sDb5dqr [100];
    float N81e5UOF;
    fgets (rfw4sDb5dqr, sizeof (rfw4sDb5dqr), stdin);
    CaI1soSfkEm = atoi (rfw4sDb5dqr);
    for (; CaI1soSfkEm > 0; CaI1soSfkEm = CaI1soSfkEm -1) {
        fgets (rfw4sDb5dqr, sizeof (rfw4sDb5dqr), stdin);
        LMviE5FwAsj2 = strtok (rfw4sDb5dqr, " ");
        N81e5UOF = atof (strtok (NULL, " "));
        if (strcmp (LMviE5FwAsj2, "male") == 0)
            ey8mZa[xkC5dnugfU++] = N81e5UOF;
        else
            liqnM1mZQ[nf++] = N81e5UOF;
    }
    qsort (ey8mZa, xkC5dnugfU, sizeof (float), fxYzAjTpu);
    qsort (liqnM1mZQ, nf, sizeof (float), wBpXv5Ejxk);
    {
        HW0NEk8wmCV = 0;
        while (HW0NEk8wmCV < xkC5dnugfU) {
            printf ("%.2f ", ey8mZa[HW0NEk8wmCV]);
            HW0NEk8wmCV = HW0NEk8wmCV +1;
        };
    }
    {
        HW0NEk8wmCV = 0;
        while (HW0NEk8wmCV < nf - 1) {
            printf ("%.2f ", liqnM1mZQ[HW0NEk8wmCV]);
            HW0NEk8wmCV = HW0NEk8wmCV +1;
        };
    }
    printf ("%.2f", liqnM1mZQ[HW0NEk8wmCV]);
}

