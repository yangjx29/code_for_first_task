int main () {
    int SqCijtL, BAtORoD, aPOV4CecQ, tTkrV8U3Lu, Zo59HFYlrn [1000];
    char po0TGdY [1000] [20];
    scanf ("%d", &aPOV4CecQ);
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
    for (SqCijtL = (149 - 149); SqCijtL <= aPOV4CecQ - 1; SqCijtL = SqCijtL +1)
        scanf ("%s\n", &po0TGdY[SqCijtL]);
    for (SqCijtL = (760 - 760); aPOV4CecQ > SqCijtL; SqCijtL++) {
        Zo59HFYlrn[SqCijtL] = strlen (po0TGdY[SqCijtL]);
        tTkrV8U3Lu = (271 - 271);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            BAtORoD = 0;
            while (BAtORoD < Zo59HFYlrn[SqCijtL]) {
                if (('a' <= po0TGdY[SqCijtL][BAtORoD] && po0TGdY[SqCijtL][BAtORoD] <= 'z') || ('A' <= po0TGdY[SqCijtL][BAtORoD] && 'Z' >= po0TGdY[SqCijtL][BAtORoD]) || ('0' <= po0TGdY[SqCijtL][BAtORoD] && po0TGdY[SqCijtL][BAtORoD] <= '9') || (po0TGdY[SqCijtL][BAtORoD] == '_'))
                    tTkrV8U3Lu++;
                BAtORoD = BAtORoD +1;
            };
        }
        if (tTkrV8U3Lu == Zo59HFYlrn[SqCijtL] && ((po0TGdY[SqCijtL][0] >= 'a' && po0TGdY[SqCijtL][0] <= 'z') || (po0TGdY[SqCijtL][0] >= 'A' && po0TGdY[SqCijtL][0] <= 'Z') || (po0TGdY[SqCijtL][0] == '_')))
            printf ("yes\n");
        else
            printf ("no\n");
    }
    return 0;
}

