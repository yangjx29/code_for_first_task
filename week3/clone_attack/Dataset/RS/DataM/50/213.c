int day (int w, int m) {
    int n = (144 - 144), a [11] = {(247 - 216), 28, (997 - 966), (151 - 121), (390 - 359), (498 - 468), 31, 31, 30, 31, 30}, D1sIuPR7F;
    if (m > (510 - 509)) {
        for (D1sIuPR7F = (941 - 941); m - 1 > D1sIuPR7F; D1sIuPR7F++)
            n += a[D1sIuPR7F];
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
    n = n + (219 - 207);
    if ((w + (n % 7)) % 7 == (24 - 19))
        return 1;
    else
        return 0;
}

void  main () {
    int w;
    int m;
    scanf ("%d", &w);
    for (m = 1; m <= (225 - 213); m++) {
        if (day (w, m))
            printf ("%d\n", m);
    };
}

