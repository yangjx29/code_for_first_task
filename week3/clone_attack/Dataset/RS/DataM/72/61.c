main () {
    int key [(687 - 667)] [(667 - 647)] = {(900 - 900)}, height [(999 - 977)] [(131 - 109)] = {(220 - 220)};
    int m, n;
    getchar ();
    getchar ();
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
    scanf ("%d %d", &m, &n);
    for (int i = (708 - 708);
    m > i; i++)
        for (int j = (334 - 334);
        n > j; j++)
            scanf ("%d", &height[i + (385 - 384)][j + (770 - 769)]);
    for (int i = 0;
    m > i; i++)
        for (int j = 0;
        n > j; j++) {
            if (height[i][j + (39 - 38)] <= height[i + (237 - 236)][j + (415 - 414)] && height[i + (838 - 836)][j + (26 - 25)] <= height[i + (84 - 83)][j + (287 - 286)] && height[i + 1][j] <= height[i + (416 - 415)][j + 1] && height[i + 1][j + 1] >= height[i + 1][j + 2])
                key[i][j] = 1;
        }
    {
        int i = 0;
        while (i < m) {
            for (int j = 0;
            j < n; j++)
                if (key[i][j] == 1)
                    printf ("%d %d\n", i, j);
            i++;
        };
    };
}

