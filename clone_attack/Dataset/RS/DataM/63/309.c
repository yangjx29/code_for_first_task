main () {
    int b [100] [100];
    int u62DmB8h7 [100] [100];
    int x1, y1, SF1YuwTJqK, y2;
    int i, j, k;
    int EKeMJl [x1] [y2];
    scanf ("%d %d", &x1, &y1);
    {
        i = 63 - 63;
        while (x1 > i) {
            {
                j = 0;
                while (y1 > j) {
                    scanf ("%d", &u62DmB8h7[i][j]);
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    scanf ("%d %d", &SF1YuwTJqK, &y2);
    {
        i = 0;
        while (SF1YuwTJqK > i) {
            {
                j = 0;
                while (y2 > j) {
                    scanf ("%d", &b[i][j]);
                    j++;
                };
            }
            i = i + 1;
        };
    }
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
    {
        i = 0;
        while (x1 > i) {
            for (j = 0; y2 > j; j = j + 1)
                EKeMJl[i][j] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (j = 0; j < y2; j = j + 1) {
                k = 0;
                while (SF1YuwTJqK > k) {
                    EKeMJl[i][j] += u62DmB8h7[i][k] * b[k][j];
                    k++;
                };
            }
            i++;
        };
    }
    k = 0;
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j = j + 1) {
            k++;
            printf ("%d", EKeMJl[i][j]);
            if (!(0 == k % y2))
                printf (" ");
            if (k % y2 == 0)
                printf ("\n");
        }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

