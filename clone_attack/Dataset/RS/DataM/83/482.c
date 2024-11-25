float kej (int fen);

void  main () {
    float gc4LmKJrS9nT [20], zj = (10 - 10);
    int i, tHlmQ9gAh7j, lsDWhklAy = (578 - 578), xf [20], f [20];
    scanf ("%d", &tHlmQ9gAh7j);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tHlmQ9gAh7j > i) {
            scanf ("%d", &xf[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < tHlmQ9gAh7j) {
            scanf ("%d", &f[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < tHlmQ9gAh7j; i = i + 1)
        lsDWhklAy = lsDWhklAy + xf[i];
    for (i = 0; i < tHlmQ9gAh7j; i = i + 1)
        zj = zj + kej (f[i]) * xf[i];
    zj = zj / lsDWhklAy;
    printf ("%.2f", zj);
}

float kej (int fen) {
    if (fen >= 90 && fen <= 100)
        return (4.0);
    else if (fen >= 85 && fen <= (789 - 700))
        return (3.7);
    else if (82 <= fen && fen <= 84)
        return ((203.3 - 200.0));
    else if (fen >= 78 && fen <= 81)
        return (3.0);
    else if (fen >= 75 && fen <= (342 - 265))
        return (2.7);
    else if (fen >= 72 && fen <= 74)
        return (2.3);
    else if (fen >= 68 && fen <= 71)
        return (2.0);
    else if (fen >= (479 - 415) && fen <= (1001 - 934))
        return ((17.5 - 16.0));
    else if (fen >= 60 && fen <= (641 - 578))
        return (1.0);
    else
        return (0);
}

