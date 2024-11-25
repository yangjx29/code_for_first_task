int main () {
    int fcBOysw;
    int FqD4aRKO;
    int i;
    struct   {
        int ID;
        int IqVExY5mKjtB, math;
        int sum;
    }
    reAWv2J [100000];
    int T5cM29Y;
    int m1;
    int Bxf2Qi;
    int XlZK4bz;
    int e9fUAN;
    int HC7Z2kmH;
    int z;
    scanf ("%d", &T5cM29Y);
    scanf ("%d %d %d", &reAWv2J[0].ID, &reAWv2J[0].IqVExY5mKjtB, &reAWv2J[0].math);
    m1 = reAWv2J[0].IqVExY5mKjtB + reAWv2J[0].math;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (T5cM29Y > i) {
            scanf ("%d %d %d", &reAWv2J[i].ID, &reAWv2J[i].IqVExY5mKjtB, &reAWv2J[i].math);
            reAWv2J[i].sum = reAWv2J[i].IqVExY5mKjtB + reAWv2J[i].math;
            if (m1 < reAWv2J[i].sum) {
                m1 = reAWv2J[i].sum;
                e9fUAN = i;
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n", reAWv2J[e9fUAN].ID, m1);
    reAWv2J[e9fUAN].IqVExY5mKjtB = reAWv2J[e9fUAN].math = reAWv2J[e9fUAN].sum = 0;
    scanf ("%d %d %d", &reAWv2J[0].ID, &reAWv2J[0].IqVExY5mKjtB, &reAWv2J[0].math);
    Bxf2Qi = reAWv2J[0].sum;
    {
        FqD4aRKO = 0;
        while (T5cM29Y > FqD4aRKO) {
            scanf ("%d %d %d", &reAWv2J[FqD4aRKO].ID, &reAWv2J[FqD4aRKO].IqVExY5mKjtB, &reAWv2J[FqD4aRKO].math);
            reAWv2J[FqD4aRKO].sum = reAWv2J[FqD4aRKO].IqVExY5mKjtB + reAWv2J[FqD4aRKO].math;
            if (Bxf2Qi < reAWv2J[FqD4aRKO].sum) {
                Bxf2Qi = reAWv2J[FqD4aRKO].sum;
                HC7Z2kmH = FqD4aRKO;
            }
            FqD4aRKO++;
        };
    }
    printf ("%d %d\n", reAWv2J[HC7Z2kmH].ID, Bxf2Qi);
    reAWv2J[HC7Z2kmH].IqVExY5mKjtB = reAWv2J[HC7Z2kmH].math = reAWv2J[HC7Z2kmH].sum = 0;
    scanf ("%d %d %d", &reAWv2J[0].ID, &reAWv2J[0].IqVExY5mKjtB, &reAWv2J[0].math);
    XlZK4bz = reAWv2J[0].sum;
    {
        fcBOysw = 0;
        while (fcBOysw < T5cM29Y) {
            scanf ("%d %d %d", &reAWv2J[fcBOysw].ID, &reAWv2J[fcBOysw].IqVExY5mKjtB, &reAWv2J[fcBOysw].math);
            reAWv2J[fcBOysw].sum = reAWv2J[fcBOysw].IqVExY5mKjtB + reAWv2J[fcBOysw].math;
            if (reAWv2J[fcBOysw].sum > XlZK4bz) {
                XlZK4bz = reAWv2J[fcBOysw].sum;
                z = fcBOysw;
            }
            fcBOysw++;
        };
    }
    printf ("%d %d\n", reAWv2J[z].ID, XlZK4bz);
    return 0;
}

