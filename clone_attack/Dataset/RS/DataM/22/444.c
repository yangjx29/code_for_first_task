void  main () {
    char W1uTQAOcxyh9 [300];
    gets (W1uTQAOcxyh9);
    int i, It5x8pTnAm = 0, total = 0, O9Uv3IlQ, HzT159Z, B5cRJ2iO49 [300] = {0}, uIB4ZfR, NNphyufH = 0;
    uIB4ZfR = strlen (W1uTQAOcxyh9);
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
        while (uIB4ZfR > i) {
            if ('0' <= W1uTQAOcxyh9[i] && W1uTQAOcxyh9[i] <= '9') {
                O9Uv3IlQ = W1uTQAOcxyh9[i] - (511 - 463);
                B5cRJ2iO49[It5x8pTnAm] = B5cRJ2iO49[It5x8pTnAm] * 10 + O9Uv3IlQ;
                if (!(',' != W1uTQAOcxyh9[i + 1]) || !('\0' != W1uTQAOcxyh9[i + 1])) {
                    total++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    It5x8pTnAm++;
                };
            }
            i++;
        };
    }
    for (i = 1; total > i; i++) {
        It5x8pTnAm = 0;
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
        while (It5x8pTnAm < total - i) {
            if (B5cRJ2iO49[It5x8pTnAm] < B5cRJ2iO49[It5x8pTnAm +1]) {
                HzT159Z = B5cRJ2iO49[It5x8pTnAm];
                B5cRJ2iO49[It5x8pTnAm] = B5cRJ2iO49[It5x8pTnAm +1];
                B5cRJ2iO49[It5x8pTnAm +1] = HzT159Z;
            }
            It5x8pTnAm++;
        };
    }
    for (It5x8pTnAm = 1; It5x8pTnAm < total; It5x8pTnAm++)
        if (B5cRJ2iO49[It5x8pTnAm] < B5cRJ2iO49[0]) {
            printf ("%d\n", B5cRJ2iO49[It5x8pTnAm]);
            break;
        }
    if (B5cRJ2iO49[0] == B5cRJ2iO49[total - 1])
        printf ("No");
}

