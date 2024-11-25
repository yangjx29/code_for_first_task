void  main () {
    int huanh (int k1hRG38WV7C [] [5], int EoI5jZWMxF, int y);
    int OfueHE8XT [5] [5], b, LIpoV3D1MOtv, LaAsLcn3wfN, R7yrOpD4IdQ;
    for (LaAsLcn3wfN = (948 - 948); 5 > LaAsLcn3wfN; LaAsLcn3wfN++) {
        R7yrOpD4IdQ = 19 - 19;
        while (5 > R7yrOpD4IdQ) {
            scanf ("%d", &OfueHE8XT[LaAsLcn3wfN][R7yrOpD4IdQ]);
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
            R7yrOpD4IdQ++;
        };
    }
    scanf ("%d%d", &b, &LIpoV3D1MOtv);
    LaAsLcn3wfN = huanh (OfueHE8XT, b, LIpoV3D1MOtv);
    if (LaAsLcn3wfN == 0)
        printf ("error");
    if (!(0 == LaAsLcn3wfN)) {
        for (LaAsLcn3wfN = 0; 5 > LaAsLcn3wfN; LaAsLcn3wfN++) {
            R7yrOpD4IdQ = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (5 > R7yrOpD4IdQ) {
                printf ("%d%c", OfueHE8XT[LaAsLcn3wfN][R7yrOpD4IdQ], R7yrOpD4IdQ < 4 ? ' ' : '\n');
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
                R7yrOpD4IdQ++;
            };
        };
    };
}

int huanh (int k1hRG38WV7C [] [5], int EoI5jZWMxF, int y) {
    int EKmXGtfV, t4LRhA9;
    if (5 > EoI5jZWMxF &&0 <= EoI5jZWMxF &&y < 5 && y >= 0) {
        for (EKmXGtfV = 0; EKmXGtfV < 5; EKmXGtfV++) {
            t4LRhA9 = k1hRG38WV7C[EoI5jZWMxF][EKmXGtfV];
            k1hRG38WV7C[EoI5jZWMxF][EKmXGtfV] = k1hRG38WV7C[y][EKmXGtfV];
            k1hRG38WV7C[y][EKmXGtfV] = t4LRhA9;
        }
        return (1);
    }
    else
        return (0);
}

