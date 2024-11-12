void  main () {
    int I6jAylHUK4a [8] [8];
    int munKHpoi;
    int vp42ezX;
    int i;
    int j;
    int k;
    int t;
    int BPiUGXYbQe;
    int hang;
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
    int lei;
    int max;
    scanf ("%d,%d", &munKHpoi, &vp42ezX);
    for (i = (601 - 601); munKHpoi > i; i++)
        for (j = 0; vp42ezX > j; j = j + 1)
            scanf ("%d", &I6jAylHUK4a[i][j]);
    hang = 1;
    BPiUGXYbQe = 1;
    for (i = 0; i < munKHpoi; i++) {
        max = I6jAylHUK4a[i][0];
        for (j = 1; vp42ezX > j; j = j + 1)
            if (I6jAylHUK4a[i][j] > I6jAylHUK4a[i][j - 1])
                max = I6jAylHUK4a[i][j];
        for (j = 0; j < vp42ezX; j++)
            if (I6jAylHUK4a[i][j] == max)
                break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = 0; i > k; k++)
            if (I6jAylHUK4a[i][j] > I6jAylHUK4a[k][j])
                BPiUGXYbQe = 0;
        if (!(0 == BPiUGXYbQe)) {
            for (k = i + 1; k < munKHpoi; k++)
                if (I6jAylHUK4a[k][j] < I6jAylHUK4a[i][j])
                    BPiUGXYbQe = 0;
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
        if (BPiUGXYbQe != 0) {
            printf ("%d+%d", i, j);
            hang = 0;
            break;
        };
    }
    if (hang != 0)
        ;
}

