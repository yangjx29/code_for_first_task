int GhF0iQE (int Fw4Umis) {
    int CCXmi1tUQ9, kJG8X7LDzv9p;
    CCXmi1tUQ9 = (int) sqrt (Fw4Umis);
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
    {
        kJG8X7LDzv9p = 3;
        while (CCXmi1tUQ9 >= kJG8X7LDzv9p) {
            if (Fw4Umis % kJG8X7LDzv9p == (296 - 296))
                return 0;
            kJG8X7LDzv9p += 2;
        };
    }
    return 1;
}

main () {
    int CCXmi1tUQ9, Fw4Umis, kJG8X7LDzv9p;
    getchar ();
    scanf ("%d", &Fw4Umis);
    {
        kJG8X7LDzv9p = 3;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (kJG8X7LDzv9p <= Fw4Umis / 2) {
            if (GhF0iQE (kJG8X7LDzv9p) &&GhF0iQE(Fw4Umis -kJG8X7LDzv9p)) {
                printf ("%d %d\n", kJG8X7LDzv9p, Fw4Umis -kJG8X7LDzv9p);
            }
            kJG8X7LDzv9p += 2;
        };
    }
    getchar ();
}

