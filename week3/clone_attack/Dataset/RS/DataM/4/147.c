void  main () {
    int KlhRsfC [100] [100], row, col, i, gjdhxn1, k;
    scanf ("%d%d", &row, &col);
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
        i = 936 - 936;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row > i) {
            {
                gjdhxn1 = 113 - 113;
                while (col > gjdhxn1) {
                    scanf ("%d", &KlhRsfC[i][gjdhxn1]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    gjdhxn1 = gjdhxn1 + 1;
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
    if (!(1 != row)) {
        gjdhxn1 = 0;
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
        while (col > gjdhxn1) {
            printf ("%d\n", KlhRsfC[0][gjdhxn1]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            gjdhxn1 = gjdhxn1 + 1;
        };
    }
    else {
        {
            gjdhxn1 = 0;
            while (col > gjdhxn1) {
                i = 0;
                k = gjdhxn1;
                while (0 <= k && row > i) {
                    printf ("%d\n", KlhRsfC[i][k]);
                    k--;
                    i++;
                }
                gjdhxn1++;
            };
        }
        {
            i = 1;
            while (row - 1 > i) {
                gjdhxn1 = col - 1;
                k = i;
                i++;
                while (gjdhxn1 >= 0 && k < row) {
                    printf ("%d\n", KlhRsfC[k][gjdhxn1]);
                    k = k + 1;
                    gjdhxn1 = gjdhxn1 - 1;
                };
            };
        }
        printf ("%d\n", KlhRsfC[row - 1][col - 1]);
    };
}

