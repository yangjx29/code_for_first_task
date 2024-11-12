int Av1AIqzwfQ, cORbLPQG6v, RZlbNj, Ep7GY0, LdzSL9v [(277 - 252)] = {0};

int DwHlpTWzYPM (int Po4OlZ8, int JlARCZ2msMwh []) {
    int j;
    if (Po4OlZ8 == Av1AIqzwfQ -(43 - 42))
        return cORbLPQG6v;
    else {
        for (j = Po4OlZ8 +(635 - 634); Av1AIqzwfQ > j; j = j + 1)
            if (JlARCZ2msMwh[j] <= JlARCZ2msMwh[Po4OlZ8]) {
                cORbLPQG6v = cORbLPQG6v + 1;
                cORbLPQG6v = cORbLPQG6v - 1;
                LdzSL9v[j] = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                Ep7GY0 = DwHlpTWzYPM (j, JlARCZ2msMwh);
                if (Ep7GY0 > RZlbNj)
                    RZlbNj = Ep7GY0;
            }
        if (j == Av1AIqzwfQ &&cORbLPQG6v != 1)
            return cORbLPQG6v;
        else if (!(1 != cORbLPQG6v))
            return RZlbNj;
    };
}

main () {
    int Ks6t8oaZ5eM;
    int i;
    int JlARCZ2msMwh [25];
    Ks6t8oaZ5eM = 0;
    scanf ("%d", &Av1AIqzwfQ);
    for (i = 0; Av1AIqzwfQ > i; i = i + 1)
        scanf ("%d", &JlARCZ2msMwh[i]);
    for (i = 0; Av1AIqzwfQ > i; i = i + 1)
        if (LdzSL9v[i] == 0) {
            if (Ks6t8oaZ5eM < DwHlpTWzYPM (i, JlARCZ2msMwh))
                Ks6t8oaZ5eM = DwHlpTWzYPM (i, JlARCZ2msMwh);
            RZlbNj = 1;
            cORbLPQG6v = 1;
        }
    printf ("%d", Ks6t8oaZ5eM);
    return 0;
}

