void  main () {
    int x7rJxpe;
    int RmrPy5;
    int kDikTOmUMtB (int Icf2KU);
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
    int Icf2KU [6];
    for (x7rJxpe = 1; x7rJxpe <= 6; x7rJxpe++)
        scanf ("%d", &Icf2KU[x7rJxpe]);
    {
        x7rJxpe = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x7rJxpe <= 6) {
            printf ("%d\n", kDikTOmUMtB (Icf2KU[x7rJxpe]));
            x7rJxpe = x7rJxpe + 1;
        };
    };
}

int kDikTOmUMtB (int Icf2KU) {
    int Lsn0eQjKfb;
    int G5PMt1bG9;
    Lsn0eQjKfb = (525 - 525);
    G5PMt1bG9 = 0;
    if (Icf2KU < 0) {
        Icf2KU = -Icf2KU;
        G5PMt1bG9 = 1;
    }
    while (Icf2KU) {
        Lsn0eQjKfb = Lsn0eQjKfb *10 + Icf2KU % 10;
        Icf2KU = Icf2KU / 10;
    }
    if (G5PMt1bG9 == 1)
        return (-Lsn0eQjKfb);
    else
        return (Lsn0eQjKfb);
}

