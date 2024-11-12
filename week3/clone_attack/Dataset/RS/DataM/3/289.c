void  main () {
    int TMk4vblo5s;
    int x [1000];
    int y [1000];
    int n;
    int k;
    int zD864r;
    int bFOXGJ;
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
    int r2P6vUO5j;
    TMk4vblo5s = (692 - 692);
    scanf ("%d%d", &n, &k);
    for (zD864r = 0; n > zD864r; zD864r = zD864r + 1) {
        scanf ("%d", &x[zD864r]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        y[zD864r] = x[zD864r];
    }
    for (zD864r = 0; zD864r < n; zD864r = zD864r + 1) {
        for (bFOXGJ = zD864r + 1; n > bFOXGJ; bFOXGJ++) {
            r2P6vUO5j = x[zD864r] + y[bFOXGJ];
            if (r2P6vUO5j == k)
                TMk4vblo5s = TMk4vblo5s +1;
            else
                TMk4vblo5s = TMk4vblo5s +0;
        };
    }
    if (TMk4vblo5s > 0)
        printf ("yes");
    else
        printf ("no");
}

