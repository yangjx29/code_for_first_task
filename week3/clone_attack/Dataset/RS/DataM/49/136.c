void  main () {
    char x5rnTBhFmq [(1278 - 778)];
    char b [500];
    char va0A8MibScV [500];
    gets (x5rnTBhFmq);
    int bK5b9WiBJfOV;
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
    int HLqI5U0wKy;
    int wS9eOJvP;
    int XYGSuNA5PVMI;
    int q9dsF2wC;
    wS9eOJvP = strlen (x5rnTBhFmq);
    for (bK5b9WiBJfOV = 2; bK5b9WiBJfOV <= wS9eOJvP; bK5b9WiBJfOV = bK5b9WiBJfOV + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (HLqI5U0wKy = 0; HLqI5U0wKy <= wS9eOJvP - bK5b9WiBJfOV; HLqI5U0wKy = HLqI5U0wKy +1) {
            char b [500] = {0};
            char va0A8MibScV [500] = {0};
            for (XYGSuNA5PVMI = HLqI5U0wKy, q9dsF2wC = 0; q9dsF2wC < bK5b9WiBJfOV; XYGSuNA5PVMI = XYGSuNA5PVMI +1, q9dsF2wC++) {
                b[q9dsF2wC] = x5rnTBhFmq[XYGSuNA5PVMI];
                va0A8MibScV[bK5b9WiBJfOV - q9dsF2wC - 1] = x5rnTBhFmq[XYGSuNA5PVMI];
            }
            if (strcmp (b, va0A8MibScV) == 0)
                printf ("%s\n", b);
        };
    };
}

