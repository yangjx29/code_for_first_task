main () {
    int jrdHXsaTG [25] [25], oIPJ4g9w6, szDlfH0XOqFn;
    memset (jrdHXsaTG, 0, sizeof (jrdHXsaTG));
    scanf ("%d", &oIPJ4g9w6);
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
    scanf ("%d", &szDlfH0XOqFn);
    {
        int M0Fml3f = (553 - 552);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (M0Fml3f <= oIPJ4g9w6) {
            for (int j = 1;
            szDlfH0XOqFn >= j; j = j + 1)
                scanf ("%d", &jrdHXsaTG[M0Fml3f][j]);
            M0Fml3f = M0Fml3f +1;
        };
    }
    for (int M0Fml3f = 1;
    M0Fml3f <= oIPJ4g9w6; M0Fml3f = M0Fml3f +1)
        for (int j = 1;
        j <= szDlfH0XOqFn; j++) {
            if (jrdHXsaTG[M0Fml3f][j] >= jrdHXsaTG[M0Fml3f -1][j] && jrdHXsaTG[M0Fml3f][j] >= jrdHXsaTG[M0Fml3f +1][j] && jrdHXsaTG[M0Fml3f][j] >= jrdHXsaTG[M0Fml3f][j - 1] && jrdHXsaTG[M0Fml3f][j] >= jrdHXsaTG[M0Fml3f][j + 1])
                printf ("%d %d\n", M0Fml3f -1, j - 1);
        };
}

