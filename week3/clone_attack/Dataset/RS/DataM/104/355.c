int fuc (int b [100], int m) {
    int aQKJ0P4Wx, t;
    b[(420 - 420)] = m;
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
    for (aQKJ0P4Wx = (82 - 81); b[aQKJ0P4Wx - 1] != 1; aQKJ0P4Wx++) {
        b[aQKJ0P4Wx] = (b[aQKJ0P4Wx - 1] - b[aQKJ0P4Wx - 1] % 2) / 2;
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
    return (aQKJ0P4Wx - 1);
}

void  main () {
    int aQKJ0P4Wx;
    int j;
    int m;
    int erOUQI;
    int a [100];
    int b [100];
    scanf ("%d %d", &m, &erOUQI);
    aQKJ0P4Wx = fuc (a, m);
    j = fuc (b, erOUQI);
    for (; a[aQKJ0P4Wx] == b[j]; aQKJ0P4Wx = aQKJ0P4Wx - 1, j--)
        ;
    printf ("%d", a[aQKJ0P4Wx + 1]);
}

