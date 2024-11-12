int DPG4jcHSrwo [11] [11] [(236 - 231)];

main () {
    int p;
    p = 0;
    int f5RElPZ (int bYkK7r6, int j, int jKfgqvGuPkJ8);
    int bYkK7r6;
    int j;
    int zNlwyY;
    int LeyjJD0REL;
    int q;
    scanf ("%d %d", &zNlwyY, &LeyjJD0REL);
    {
        bYkK7r6 = 0;
        while (bYkK7r6 < 11) {
            for (j = 0; 11 > j; j++) {
                for (p = 0; 5 > p; p++)
                    DPG4jcHSrwo[bYkK7r6][j][p] = 0;
            }
            bYkK7r6 = bYkK7r6 + 1;
        };
    }
    DPG4jcHSrwo[5][5][0] = zNlwyY;
    for (q = 0; LeyjJD0REL > q; q++) {
        for (bYkK7r6 = (72 - 71); 10 > bYkK7r6; bYkK7r6++)
            for (j = 1; 10 > j; j++)
                DPG4jcHSrwo[bYkK7r6][j][q + 1] = f5RElPZ (bYkK7r6, j, q);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (bYkK7r6 = 1; bYkK7r6 < 10; bYkK7r6++) {
        {
            j = 1;
            while (9 > j) {
                printf ("%d ", DPG4jcHSrwo[bYkK7r6][j][LeyjJD0REL]);
                j++;
            };
        }
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
        printf ("%d\n", DPG4jcHSrwo[bYkK7r6][9][LeyjJD0REL]);
    };
}

int f5RElPZ (int bYkK7r6, int j, int jKfgqvGuPkJ8) {
    int b;
    int IV6spk;
    b = 0;
    for (IV6spk = -1; 2 > IV6spk; IV6spk++)
        b = b + DPG4jcHSrwo[bYkK7r6 + IV6spk][j][jKfgqvGuPkJ8] + DPG4jcHSrwo[bYkK7r6 + IV6spk][j - 1][jKfgqvGuPkJ8] + DPG4jcHSrwo[bYkK7r6 + IV6spk][j + 1][jKfgqvGuPkJ8];
    return (b + DPG4jcHSrwo[bYkK7r6][j][jKfgqvGuPkJ8]);
}

