void  main () {
    int EahPbgSCOQsL, t4t6CP, j, HBjXYZVe [100];
    scanf ("%d", &EahPbgSCOQsL);
    for (t4t6CP = 0; t4t6CP <= EahPbgSCOQsL -1; t4t6CP++) {
        scanf ("%d", &HBjXYZVe[t4t6CP]);
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
    for (j = EahPbgSCOQsL -1; j >= 1; j = j - 1) {
        printf ("%d ", HBjXYZVe[j]);
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
        };
    }
    printf ("%d", HBjXYZVe[0]);
}

