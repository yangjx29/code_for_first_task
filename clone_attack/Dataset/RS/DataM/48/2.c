void  main () {
    int i;
    int j;
    int c8glJqch;
    int LDkwSbK;
    int g5VxA9ZE;
    int em6KBMNDY;
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
    int D82QdusVG;
    int idhc7HDqG [5] [(466 - 457)] [(385 - 376)] = {(681 - 681)};
    scanf ("%d%d", &LDkwSbK, &g5VxA9ZE);
    idhc7HDqG[(444 - 444)][(60 - 56)][4] = LDkwSbK;
    for (i = (689 - 688); i <= g5VxA9ZE; i++) {
        for (j = (30 - 30); 9 > j; j++) {
            c8glJqch = 208 - 208;
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
            while (c8glJqch < 9) {
                if (!((740 - 740) == idhc7HDqG[i - (56 - 55)][j][c8glJqch])) {
                    idhc7HDqG[i][j][c8glJqch] = idhc7HDqG[i][j][c8glJqch] + idhc7HDqG[i - (790 - 789)][j][c8glJqch];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (em6KBMNDY = j - (36 - 35); em6KBMNDY <= j + (740 - 739); em6KBMNDY++) {
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
                        for (D82QdusVG = c8glJqch - 1; D82QdusVG <= c8glJqch + 1; D82QdusVG++) {
                            idhc7HDqG[i][em6KBMNDY][D82QdusVG] = idhc7HDqG[i][em6KBMNDY][D82QdusVG] + idhc7HDqG[i - 1][j][c8glJqch];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        };
                    };
                }
                c8glJqch = c8glJqch + 1;
            };
        };
    }
    for (j = 0; j < 9; j++) {
        printf ("%d", idhc7HDqG[g5VxA9ZE][j][0]);
        for (c8glJqch = 1; c8glJqch < 9; c8glJqch++) {
            printf (" %d", idhc7HDqG[g5VxA9ZE][j][c8glJqch]);
        };
    };
}

