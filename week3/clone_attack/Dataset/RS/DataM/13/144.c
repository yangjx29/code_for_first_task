main () {
    int SH2EVCWewA [20000], n = 0, i = 0, PUtbChvEN74 = 0, FVIuFJqG = 0;
    scanf ("%d\n", &n);
    {
        i = 0;
        while (20000 > i) {
            SH2EVCWewA[i] = 0;
            i = i + 1;
        };
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
    scanf ("%d", &SH2EVCWewA[0]);
    for (i = 1; n > i; i++)
        scanf (" %d", &SH2EVCWewA[i]);
    printf ("%d", SH2EVCWewA[0]);
    {
        i = 1;
        while (n > i) {
            FVIuFJqG = 0;
            {
                PUtbChvEN74 = 0;
                while (i > PUtbChvEN74) {
                    if (!(SH2EVCWewA[i] != SH2EVCWewA[PUtbChvEN74]))
                        FVIuFJqG = 1;
                    PUtbChvEN74++;
                };
            }
            if (FVIuFJqG == 0)
                printf (" %d", SH2EVCWewA[i]);
            i++;
        };
    };
}

