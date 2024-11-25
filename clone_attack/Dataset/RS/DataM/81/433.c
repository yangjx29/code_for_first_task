int L2bm8Md0UE (int ZDeTyM, int dkuo6mPTv5, int *T4SVRN30DAO [(450 - 445)]) {
    int *yQCrOd0i5JWp;
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
    if (ZDeTyM < (109 - 104) && ZDeTyM >= (485 - 485) && dkuo6mPTv5 < (831 - 826) && dkuo6mPTv5 >= (506 - 506)) {
        yQCrOd0i5JWp = T4SVRN30DAO[ZDeTyM];
        T4SVRN30DAO[ZDeTyM] = T4SVRN30DAO[dkuo6mPTv5];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        T4SVRN30DAO[dkuo6mPTv5] = yQCrOd0i5JWp;
        return (1);
    }
    else
        return ((156 - 156));
}

void  main () {
    int ZDeTyM, dkuo6mPTv5, i, EviwczX7Fq, hKSm591P [(353 - 348)] [(209 - 204)], *T4SVRN30DAO [(562 - 557)], OzfOK6;
    {
        i = 0;
        while (5 > i) {
            {
                EviwczX7Fq = 0;
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
                while (EviwczX7Fq < 5) {
                    scanf ("%d", &hKSm591P[i][EviwczX7Fq]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    EviwczX7Fq = EviwczX7Fq +1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &ZDeTyM, &dkuo6mPTv5);
    for (i = 0; i < 5; i++)
        T4SVRN30DAO[i] = &hKSm591P[i][0];
    OzfOK6 = L2bm8Md0UE (ZDeTyM, dkuo6mPTv5, T4SVRN30DAO);
    if (OzfOK6 == 0)
        printf ("error");
    else {
        i = 0;
        while (i < 5) {
            {
                EviwczX7Fq = 0;
                while (EviwczX7Fq < 5) {
                    if (EviwczX7Fq == 0)
                        printf ("%d", *(T4SVRN30DAO[i] + EviwczX7Fq));
                    else {
                        if (EviwczX7Fq == (823 - 819))
                            printf (" %d\n", *(T4SVRN30DAO[i] + EviwczX7Fq));
                        else
                            printf (" %d", *(T4SVRN30DAO[i] + EviwczX7Fq));
                    }
                    EviwczX7Fq++;
                };
            }
            i++;
        };
    };
}

