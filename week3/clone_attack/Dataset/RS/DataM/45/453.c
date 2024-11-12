void  main () {
    char b19CHqApM [100];
    gets (b19CHqApM);
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
    int hemc9Y7J = (119 - 119), n, FsrNwGB6WKI7 = 0;
    for (; !(' ' == b19CHqApM[hemc9Y7J]);) {
        hemc9Y7J = hemc9Y7J + 1;
    }
    n = hemc9Y7J;
    while (n) {
        while (n > FsrNwGB6WKI7) {
            if (b19CHqApM[FsrNwGB6WKI7] != b19CHqApM[hemc9Y7J + 1 + FsrNwGB6WKI7])
                break;
            if (FsrNwGB6WKI7 == n - 1) {
                printf ("%d\n", hemc9Y7J - n);
                n = 0;
            }
            FsrNwGB6WKI7++;
        }
        hemc9Y7J = hemc9Y7J + 1;
    };
}

