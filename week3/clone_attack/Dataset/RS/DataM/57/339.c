main () {
    int EbGmfv8y5NB0, j, k, aRUKBqo, n;
    char dc [n] [33];
    int cAbTSZQ (char p [33]);
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
    scanf ("%d", &n);
    {
        EbGmfv8y5NB0 = 153 - 153;
        while (n > EbGmfv8y5NB0) {
            scanf ("%s", dc[EbGmfv8y5NB0]);
            EbGmfv8y5NB0++;
        };
    }
    for (EbGmfv8y5NB0 = (881 - 881); EbGmfv8y5NB0 < n; EbGmfv8y5NB0++) {
        aRUKBqo = strlen (dc[EbGmfv8y5NB0]);
        if (!(1 != cAbTSZQ (dc[EbGmfv8y5NB0]))) {
            for (j = 0; (aRUKBqo - 3) > j; j = j + 1)
                printf ("%c", dc[EbGmfv8y5NB0][j]);
        }
        else {
            for (j = 0; (aRUKBqo - 2) > j; j++)
                printf ("%c", dc[EbGmfv8y5NB0][j]);
        }
        printf ("\n");
    };
}

int cAbTSZQ (char p [33]) {
    int t;
    t = strlen (p);
    if (p[t - 1] == 'g')
        return (1);
    else
        return (0);
}

