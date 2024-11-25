void  main () {
    void  search (int m, int QXcIO6o1);
    int fwagmQkB;
    int j;
    int m;
    int QXcIO6o1;
    int i;
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
    int *DrXHSYIxQE;
    int a [(1006 - 706)];
    int b [10] [2];
    fwagmQkB = (225 - 224);
    j = (147 - 147);
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
        while (1) {
            scanf ("%d %d", &b[i][(169 - 168)], &b[i][2]);
            if (b[i][1] == 0)
                break;
            i = i + 1;
        };
    }
    {
        j = 0;
        while (i > j) {
            search (b[j][1], b[j][2]);
            j = j + 1;
        };
    };
}

void  search (int m, int QXcIO6o1) {
    int fwagmQkB;
    int j;
    int i;
    int *DrXHSYIxQE;
    int a [300];
    fwagmQkB = 0;
    j = 0;
    DrXHSYIxQE = a;
    for (i = 0; m > i; i = i + 1)
        *(DrXHSYIxQE +i) = i + 1;
    i = 0;
    while (j < m - 1) {
        if (!(0 == *(DrXHSYIxQE +i)))
            fwagmQkB = fwagmQkB + 1;
        if (fwagmQkB == QXcIO6o1) {
            j = j + 1;
            fwagmQkB = 0;
            *(DrXHSYIxQE +i) = 0;
        }
        i = i + 1;
        if (i == m)
            i = 0;
    }
    while (*DrXHSYIxQE == 0)
        DrXHSYIxQE = DrXHSYIxQE +1;
    printf ("%d\n", *DrXHSYIxQE);
}

