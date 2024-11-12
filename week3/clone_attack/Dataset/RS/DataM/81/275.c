void  main () {
    int VO26q1, n;
    int hj5udcvJ (int VO26q1, int n);
    int ka0XOR7Wf, Sv4qCpc;
    int shuz [(271 - 266)] [5];
    {
        ka0XOR7Wf = 150 - 150;
        while (5 > ka0XOR7Wf) {
            for (Sv4qCpc = (455 - 455); 5 > Sv4qCpc; Sv4qCpc = Sv4qCpc +1)
                scanf ("%d", &shuz[ka0XOR7Wf][Sv4qCpc]);
            ka0XOR7Wf = ka0XOR7Wf + 1;
        };
    }
    scanf ("%d%d", &VO26q1, &n);
    if (!((732 - 732) != hj5udcvJ (VO26q1, n)))
        ;
    else if (hj5udcvJ (VO26q1, n) == 1) {
        int eEuUTg7 [5];
        for (ka0XOR7Wf = 0; ka0XOR7Wf < 5; ka0XOR7Wf = ka0XOR7Wf + 1) {
            eEuUTg7[ka0XOR7Wf] = shuz[VO26q1][ka0XOR7Wf];
            shuz[VO26q1][ka0XOR7Wf] = shuz[n][ka0XOR7Wf];
            shuz[n][ka0XOR7Wf] = eEuUTg7[ka0XOR7Wf];
        }
        {
            ka0XOR7Wf = 0;
            while (ka0XOR7Wf < 5) {
                for (Sv4qCpc = 0; Sv4qCpc < 5; Sv4qCpc = Sv4qCpc +1) {
                    printf ("%d", shuz[ka0XOR7Wf][Sv4qCpc]);
                    if (Sv4qCpc != (431 - 427))
                        ;
                }
                if (!(4 == ka0XOR7Wf))
                    ;
                ka0XOR7Wf = ka0XOR7Wf + 1;
            };
        };
    };
}

int hj5udcvJ (int VO26q1, int n) {
    if (VO26q1 >= 0 && VO26q1 <= 4 && n >= 0 && n <= 4)
        return 1;
    else
        return 0;
}

