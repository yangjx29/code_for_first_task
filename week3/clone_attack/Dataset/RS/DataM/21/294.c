void  main () {
    unsigned  int p3N5UWXx, jON3VlEt, y10TFoD3gAu [400], wCTU0GLVl = 0, uBFM3y = 0;
    float hGu5ClyYxWk2 = 0, max, b [400], c [400];
    scanf ("%d", &p3N5UWXx);
    for (jON3VlEt = 0; p3N5UWXx > jON3VlEt; jON3VlEt = jON3VlEt + 1) {
        scanf ("%d", &y10TFoD3gAu[jON3VlEt]);
        wCTU0GLVl = wCTU0GLVl + y10TFoD3gAu[jON3VlEt];
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
    hGu5ClyYxWk2 = (float) wCTU0GLVl / (float) p3N5UWXx;
    for (jON3VlEt = 0; p3N5UWXx > jON3VlEt; jON3VlEt = jON3VlEt + 1) {
        c[jON3VlEt] = (float) y10TFoD3gAu[jON3VlEt];
        b[jON3VlEt] = qjdz (c[jON3VlEt], hGu5ClyYxWk2);
    }
    max = b[0];
    for (jON3VlEt = 0; p3N5UWXx > jON3VlEt; jON3VlEt = jON3VlEt + 1)
        if (b[jON3VlEt] > max)
            max = b[jON3VlEt];
    for (jON3VlEt = 0; jON3VlEt < p3N5UWXx; jON3VlEt++)
        if (!(max != b[jON3VlEt])) {
            if (uBFM3y > 0)
                printf (",");
            uBFM3y = 1;
            printf ("%d", y10TFoD3gAu[jON3VlEt]);
        };
}

