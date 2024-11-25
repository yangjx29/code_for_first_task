void  main () {
    int yHopf1M, EihwM6, b8bsEz4CIXj;
    char b7P9Nc [100];
    gets (b7P9Nc);
    b8bsEz4CIXj = strlen (b7P9Nc);
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
    for (yHopf1M = strlen (b7P9Nc) - 1; yHopf1M >= (550 - 550); yHopf1M = yHopf1M - 1) {
        if (b7P9Nc[yHopf1M] == ' ') {
            for (EihwM6 = yHopf1M + 1; EihwM6 < b8bsEz4CIXj; EihwM6 = EihwM6 +1)
                printf ("%c", b7P9Nc[EihwM6]);
            b8bsEz4CIXj = yHopf1M;
            printf (" ");
        };
    }
    for (yHopf1M = 0; yHopf1M < strlen (b7P9Nc); yHopf1M = yHopf1M + 1)
        if (b7P9Nc[yHopf1M] == ' ')
            break;
    for (EihwM6 = 0; EihwM6 < yHopf1M; EihwM6++)
        printf ("%c", b7P9Nc[EihwM6]);
}

