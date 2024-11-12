void  main () {
    int i;
    int j;
    int n;
    int m [100];
    int k;
    int GLwlrGNVqX [100];
    int TYn5uJ [100] [100];
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
    int count [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &m[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
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
            while (j < m[i]) {
                scanf ("%d", &TYn5uJ[i][j]);
                j = j + 1;
            };
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            count[i] = 0;
            GLwlrGNVqX[i] = 0;
            for (j = 1; 60 - count[i] >= j; j = j + 1) {
                for (k = 0; k < m[i]; k = k + 1)
                    if (j == TYn5uJ[i][k]) {
                        count[i] = count[i] + 3;
                        break;
                    }
                GLwlrGNVqX[i]++;
            }
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1)
        printf ("%d\n", GLwlrGNVqX[i]);
}

