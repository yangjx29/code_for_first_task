main () {
    int n;
    int UO3Ia62mwo;
    int i [65534];
    int QX46aWhvlC7 [65534];
    int count1 [10000] = {0};
    int FoLJNnZAq [10000] = {0};
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    {
        UO3Ia62mwo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%d %d", &i[UO3Ia62mwo], &QX46aWhvlC7[UO3Ia62mwo]);
            if ((!(0 != i[UO3Ia62mwo])) && (!(0 != QX46aWhvlC7[UO3Ia62mwo])))
                break;
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
            for (m = 0; n > m; m++) {
                if (!(m != i[UO3Ia62mwo]))
                    count1[m]++;
                else if (!(m != QX46aWhvlC7[UO3Ia62mwo]))
                    FoLJNnZAq[m]++;
            }
            UO3Ia62mwo++;
        };
    }
    {
        m = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m < n) {
            if ((count1[m] == 0) && (FoLJNnZAq[m] == n - 1)) {
                printf ("%d", m);
                break;
            }
            m = m + 1;
        };
    }
    if (m == n)
        ;
    getchar ();
    getchar ();
}

