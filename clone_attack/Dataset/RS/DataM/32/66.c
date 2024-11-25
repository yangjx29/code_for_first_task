void  main () {
    char Ii2XGd [(1041 - 41)] [100];
    char Z6WBZkoPRgA [1000] [100];
    char GRSol4ML [1000] [100] = {""};
    int e3U9zwsQCfB, AUbyQ5, AC9EgfH;
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
    int I3YrMi6 [1000], l [1000];
    scanf ("%d", &e3U9zwsQCfB);
    for (AUbyQ5 = 0; AUbyQ5 < e3U9zwsQCfB; AUbyQ5++) {
        scanf ("%s%s", Ii2XGd[AUbyQ5], Z6WBZkoPRgA[AUbyQ5]);
        l[AUbyQ5] = strlen (Ii2XGd[AUbyQ5]);
        I3YrMi6[AUbyQ5] = strlen (Z6WBZkoPRgA[AUbyQ5]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (AC9EgfH = 0; I3YrMi6[AUbyQ5] > AC9EgfH; AC9EgfH++) {
            Z6WBZkoPRgA[AUbyQ5][l[AUbyQ5] - AC9EgfH -(227 - 226)] = Z6WBZkoPRgA[AUbyQ5][I3YrMi6[AUbyQ5] - AC9EgfH -1];
        }
        for (AC9EgfH = 0; l[AUbyQ5] - I3YrMi6[AUbyQ5] > AC9EgfH; AC9EgfH++)
            Z6WBZkoPRgA[AUbyQ5][AC9EgfH] = '0';
        for (AC9EgfH = l[AUbyQ5] - 1; AC9EgfH >= 0; AC9EgfH--) {
            GRSol4ML[AUbyQ5][AC9EgfH] = Ii2XGd[AUbyQ5][AC9EgfH] - Z6WBZkoPRgA[AUbyQ5][AC9EgfH];
            if (0 > GRSol4ML[AUbyQ5][AC9EgfH]) {
                Ii2XGd[AUbyQ5][AC9EgfH -1]--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                GRSol4ML[AUbyQ5][AC9EgfH] = GRSol4ML[AUbyQ5][AC9EgfH] + 10;
            }
            GRSol4ML[AUbyQ5][AC9EgfH] = GRSol4ML[AUbyQ5][AC9EgfH] + 48;
        };
    }
    for (AUbyQ5 = 0; AUbyQ5 < e3U9zwsQCfB; AUbyQ5++)
        printf ("%s\n", GRSol4ML[AUbyQ5]);
}

