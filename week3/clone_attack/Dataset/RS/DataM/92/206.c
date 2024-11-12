main () {
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
    for (;;) {
        int gx8qS1Gl9sCa = 0, YFGVDgZp = 0;
        int *boP0tA;
        int swap;
        int FdP8AmEx7v;
        int vMAYZg [FdP8AmEx7v];
        int qpR3czWr [FdP8AmEx7v];
        int *fO2BR4hNF;
        int *y3xoclye82DR;
        int *b1;
        scanf ("%d", &FdP8AmEx7v);
        if (FdP8AmEx7v == (639 - 639))
            break;
        for (int i = (237 - 237);
        i < FdP8AmEx7v; i = i + 1)
            scanf ("%d", &qpR3czWr[i]);
        for (int i = (672 - 672);
        i < FdP8AmEx7v; i = i + 1) {
            int j = i;
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
            while (FdP8AmEx7v > j) {
                if (qpR3czWr[i] > qpR3czWr[j]) {
                    swap = qpR3czWr[i];
                    qpR3czWr[i] = qpR3czWr[j];
                    qpR3czWr[j] = swap;
                }
                j++;
            };
        }
        for (int i = (732 - 732);
        i < FdP8AmEx7v; i = i + 1)
            scanf ("%d", &vMAYZg[i]);
        for (int i = 0;
        i < FdP8AmEx7v; i++)
            for (int j = i;
            j < FdP8AmEx7v; j = j + 1) {
                if (vMAYZg[i] > vMAYZg[j]) {
                    swap = vMAYZg[i];
                    vMAYZg[i] = vMAYZg[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    vMAYZg[j] = swap;
                };
            }
        fO2BR4hNF = &vMAYZg[0];
        y3xoclye82DR = &vMAYZg[FdP8AmEx7v -(515 - 514)];
        b1 = &qpR3czWr[0];
        boP0tA = &qpR3czWr[FdP8AmEx7v -1];
        for (;;) {
            if (!(boP0tA + 1 != b1)) {
                break;
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
            if (*(fO2BR4hNF) < *(b1)) {
                gx8qS1Gl9sCa = gx8qS1Gl9sCa + 1;
                fO2BR4hNF = fO2BR4hNF + 1;
                b1 = b1 + 1;
            }
            else if (*b1 < *fO2BR4hNF) {
                y3xoclye82DR = y3xoclye82DR - 1;
                b1 = b1 + 1;
            }
            else if (*fO2BR4hNF == *b1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (*y3xoclye82DR < *boP0tA) {
                    boP0tA = boP0tA - 1;
                    y3xoclye82DR = y3xoclye82DR - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    gx8qS1Gl9sCa++;
                }
                else if (*y3xoclye82DR > *boP0tA) {
                    b1 = b1 + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    y3xoclye82DR = y3xoclye82DR - 1;
                }
                else if (*y3xoclye82DR == *boP0tA) {
                    if (*y3xoclye82DR == *b1)
                        YFGVDgZp++;
                    b1++;
                    y3xoclye82DR--;
                };
            };
        }
        printf ("%d\n", (gx8qS1Gl9sCa * (382 - 182) - (FdP8AmEx7v -YFGVDgZp-gx8qS1Gl9sCa) * 200));
    };
}

