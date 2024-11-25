void  main () {
    int i;
    int m;
    int n;
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
    int mluJ61Cwg [20] = {1, 1, (371 - 369), 3, 5, 8, (448 - 435), 21, 34, 55, (231 - 142), 144, (344 - 111), (556 - 179), 610, 987, (1969 - 372), 2584, 4181, (7501 - 736)};
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &m);
        printf ("%d\n", mluJ61Cwg[m - 1]);
    };
}

