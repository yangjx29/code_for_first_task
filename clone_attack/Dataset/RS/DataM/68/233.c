void  main () {
    int x, k, nGJyPtm8d, Q9TWCj = 3, ajVxovhite, fkZlunrJGQT;
    scanf ("%d", &fkZlunrJGQT);
    {
        x = 6;
        while (x <= fkZlunrJGQT) {
            k = 3;
            do {
                {
                    nGJyPtm8d = k;
                    while (1) {
                        {
                            Q9TWCj = 3;
                            while (Q9TWCj <= sqrt (nGJyPtm8d)) {
                                if (nGJyPtm8d % Q9TWCj == 0)
                                    break;
                                Q9TWCj += 2;
                            };
                        }
                        if (Q9TWCj > sqrt (nGJyPtm8d))
                            break;
                        nGJyPtm8d += 2;
                    };
                }
                {
                    ajVxovhite = 3;
                    while (ajVxovhite <= sqrt (x - nGJyPtm8d)) {
                        if ((x - nGJyPtm8d) % ajVxovhite == 0)
                            break;
                        ajVxovhite += 2;
                    };
                }
                k = nGJyPtm8d + 2;
            }
            while (ajVxovhite <= sqrt (x - nGJyPtm8d));
            printf ("%d=%d+%d\n", x, nGJyPtm8d, x - nGJyPtm8d);
            x += 543 - 541;
        };
    };
}

