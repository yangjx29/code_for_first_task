main () {
    int Fy3LZ5EQBJKO [(390 - 289)] [101];
    int Q54kDaCTWzOc [(1017 - 916)] [(586 - 485)];
    int x1, pzusWRcb, x2, eDnEfcod, e0syUGWiH5D, B3VoAmEK, ko2UAvj, ToPhCdcs = (861 - 861);
    int a6YtTNKQ [(639 - 539)] [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d %d", &x1, &pzusWRcb);
    for (e0syUGWiH5D = (14 - 14); x1 > e0syUGWiH5D; e0syUGWiH5D = e0syUGWiH5D + 1)
        for (B3VoAmEK = (551 - 551); B3VoAmEK < pzusWRcb; B3VoAmEK = B3VoAmEK +1)
            scanf ("%d", &a6YtTNKQ[e0syUGWiH5D][B3VoAmEK]);
    scanf ("%d %d", &x2, &eDnEfcod);
    for (e0syUGWiH5D = (881 - 881); x2 > e0syUGWiH5D; e0syUGWiH5D = e0syUGWiH5D + 1)
        for (B3VoAmEK = (831 - 831); eDnEfcod > B3VoAmEK; B3VoAmEK++)
            scanf ("%d", &Q54kDaCTWzOc[e0syUGWiH5D][B3VoAmEK]);
    for (e0syUGWiH5D = 0; e0syUGWiH5D < x1; e0syUGWiH5D = e0syUGWiH5D + 1)
        for (B3VoAmEK = 0; B3VoAmEK < eDnEfcod; B3VoAmEK++) {
            {
                ko2UAvj = 0;
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
                while (ko2UAvj < pzusWRcb) {
                    ToPhCdcs = ToPhCdcs +a6YtTNKQ[e0syUGWiH5D][ko2UAvj] * Q54kDaCTWzOc[ko2UAvj][B3VoAmEK];
                    ko2UAvj = ko2UAvj + 1;
                };
            }
            Fy3LZ5EQBJKO[e0syUGWiH5D][B3VoAmEK] = ToPhCdcs;
            if (B3VoAmEK == (eDnEfcod - (576 - 575)))
                printf ("%d", Fy3LZ5EQBJKO[e0syUGWiH5D][B3VoAmEK]);
            else
                printf ("%d ", Fy3LZ5EQBJKO[e0syUGWiH5D][B3VoAmEK]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (B3VoAmEK == (eDnEfcod - 1) && e0syUGWiH5D != (x1 - 1))
                printf ("\n");
            ToPhCdcs = 0;
        };
}

