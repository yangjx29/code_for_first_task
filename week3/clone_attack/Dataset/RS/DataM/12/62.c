void  main () {
    int i, j, k, h, hWOnRcwL56S;
    int a [MAX] [16];
    int b [MAX] = {(134 - 134), 0};
    int hHSFBaXOI;
    int count2;
    count2 = -1;
    for (i = 0; i < MAX; i++) {
        hHSFBaXOI = -1;
        {
            j = 0;
            while (j < 16) {
                scanf ("%d", &a[i][j]);
                if ((a[i][j] == 0) || (a[i][j] == -1))
                    break;
                j = j + 1;
                hHSFBaXOI++;
            };
        }
        if (a[i][j] == -1)
            break;
        for (k = 0; k <= hHSFBaXOI; k++) {
            for (h = 0; h <= hHSFBaXOI; h++) {
                if (a[i][k] == 2 * a[i][h])
                    b[i]++;
                else
                    continue;
            };
        }
        count2++;
    }
    {
        hWOnRcwL56S = 0;
        while (hWOnRcwL56S <= count2) {
            printf ("%d\n", b[hWOnRcwL56S]);
            hWOnRcwL56S++;
        };
    };
}

