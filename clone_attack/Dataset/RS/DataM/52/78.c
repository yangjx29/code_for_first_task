void  main () {
    void  move (int DSUMxykg [100], int UEwuJ3, int m);
    int UEwuJ3, m, i, DSUMxykg [100];
    scanf ("%d %d", &UEwuJ3, &m);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UEwuJ3 > i) {
            scanf ("%d", &DSUMxykg[i]);
            i++;
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
    move (DSUMxykg, UEwuJ3, m);
    {
        i = 0;
        while (UEwuJ3 -1 > i) {
            printf ("%d ", DSUMxykg[i]);
            i++;
        };
    }
    printf ("%d\n", DSUMxykg[UEwuJ3 -1]);
}

void  move (int DSUMxykg [100], int UEwuJ3, int m) {
    int i, d;
    m--;
    d = DSUMxykg[UEwuJ3 -1];
    {
        i = UEwuJ3 -1;
        while (0 < i) {
            DSUMxykg[i] = DSUMxykg[i - 1];
            i--;
        };
    }
    DSUMxykg[0] = d;
    if (m > 0)
        move (DSUMxykg, UEwuJ3, m);
}

