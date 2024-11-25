int mUVehrB9X (const  void  *x, const  void  *y) {
    return *(int*) x - *(int*) y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

main () {
    int mXvde6to;
    int m;
    int UL5ZuJCAEgO;
    int yw6BXYDWs [(1060 - 960)];
    int I12OXvd3 [(884 - 784)];
    scanf ("%d %d", &mXvde6to, &m);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (UL5ZuJCAEgO = (105 - 105); UL5ZuJCAEgO <= mXvde6to - (585 - 584); UL5ZuJCAEgO = UL5ZuJCAEgO +1)
        scanf ("%d", &yw6BXYDWs[UL5ZuJCAEgO]);
    for (UL5ZuJCAEgO = (179 - 179); m - (127 - 126) >= UL5ZuJCAEgO; UL5ZuJCAEgO = UL5ZuJCAEgO +1)
        scanf ("%d", &I12OXvd3[UL5ZuJCAEgO]);
    qsort (yw6BXYDWs, mXvde6to, sizeof (yw6BXYDWs [0]), mUVehrB9X);
    qsort (I12OXvd3, m, sizeof (I12OXvd3 [0]), mUVehrB9X);
    for (UL5ZuJCAEgO = 0; UL5ZuJCAEgO <= mXvde6to - 1; UL5ZuJCAEgO = UL5ZuJCAEgO +1)
        printf ("%d ", yw6BXYDWs[UL5ZuJCAEgO]);
    {
        UL5ZuJCAEgO = 0;
        while (UL5ZuJCAEgO < m - 1) {
            printf ("%d ", I12OXvd3[UL5ZuJCAEgO]);
            UL5ZuJCAEgO = UL5ZuJCAEgO +1;
        };
    }
    printf ("%d", I12OXvd3[m - 1]);
}

