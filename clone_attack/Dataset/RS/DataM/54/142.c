void  main () {
    int xVbAftRW72KB, kO7Pcy, Stbjq6XfH, etloehyK9 = 1, To3nWFTubl = 1;
    scanf ("%d%d", &xVbAftRW72KB, &kO7Pcy);
    Stbjq6XfH = To3nWFTubl *xVbAftRW72KB + kO7Pcy;
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
    do {
        if (Stbjq6XfH % (xVbAftRW72KB - 1) == 0) {
            Stbjq6XfH = Stbjq6XfH *xVbAftRW72KB / (xVbAftRW72KB - 1) + kO7Pcy;
            etloehyK9 = etloehyK9 + 1;
        }
        else {
            etloehyK9 = 1;
            To3nWFTubl = To3nWFTubl +1;
            Stbjq6XfH = To3nWFTubl *xVbAftRW72KB + kO7Pcy;
        };
    }
    while (etloehyK9 <= (xVbAftRW72KB - 1));
    printf ("%d\n", Stbjq6XfH);
}

