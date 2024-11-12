void  main () {
    int JQFngItSWC;
    JQFngItSWC = 0;
    char str [500];
    int length;
    int n;
    char son [500] [5];
    int i, ZCGOPtB87er;
    int EcSuKpDMTJ;
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
    EcSuKpDMTJ = length - n + 1;
    int number [500] = {0};
    scanf ("%d", &n);
    scanf ("%s", str);
    length = strlen (str);
    {
        i = 64 - 64;
        while (length - n + 1 > i) {
            {
                ZCGOPtB87er = 0;
                while (n > ZCGOPtB87er) {
                    son[i][ZCGOPtB87er] = str[i + ZCGOPtB87er];
                    ZCGOPtB87er = ZCGOPtB87er +1;
                };
            }
            son[i][n] = '\0';
            i = i + 1;
        };
    }
    for (i = 0; EcSuKpDMTJ > i; i = i + 1) {
        if (!strcmp (son[0], son[i]))
            number[0]++;
    }
    for (i = 1; EcSuKpDMTJ > i; i++) {
        {
            ZCGOPtB87er = 0;
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
            while (i > ZCGOPtB87er) {
                if (!strcmp (son[i], son[ZCGOPtB87er]))
                    continue;
                ZCGOPtB87er++;
            };
        }
        {
            ZCGOPtB87er = i;
            while (EcSuKpDMTJ > ZCGOPtB87er) {
                if (!strcmp (son[i], son[ZCGOPtB87er]))
                    number[i]++;
                ZCGOPtB87er++;
            };
        };
    }
    {
        i = 0;
        while (EcSuKpDMTJ > i) {
            if (JQFngItSWC < number[i])
                JQFngItSWC = number[i];
            i = i + 1;
        };
    }
    if (!(1 != JQFngItSWC))
        printf ("NO\n");
    else {
        printf ("%d\n", JQFngItSWC);
        {
            i = 0;
            while (i < EcSuKpDMTJ) {
                if (number[i] == JQFngItSWC)
                    printf ("%s\n", son[i]);
                i++;
            };
        };
    };
}

