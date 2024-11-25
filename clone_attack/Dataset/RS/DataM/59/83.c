int main () {
    int CW1uZdXY5gU, zYieKjfUa;
    int EBdfiH3zPoDC [CW1uZdXY5gU] [CW1uZdXY5gU];
    char p7SGh924lNg;
    cin >> CW1uZdXY5gU;
    for (int aIjrTnA2U6v = (886 - 886);
    CW1uZdXY5gU > aIjrTnA2U6v; aIjrTnA2U6v = aIjrTnA2U6v + 1) {
        for (int MygPJc = (836 - 836);
        CW1uZdXY5gU > MygPJc; MygPJc = MygPJc +1) {
            cin.get (p7SGh924lNg);
            if (!('.' != p7SGh924lNg))
                EBdfiH3zPoDC[aIjrTnA2U6v][MygPJc] = (785 - 784);
            if (!('#' != p7SGh924lNg))
                EBdfiH3zPoDC[aIjrTnA2U6v][MygPJc] = (980 - 980);
            if (!('@' != p7SGh924lNg))
                EBdfiH3zPoDC[aIjrTnA2U6v][MygPJc] = (267 - 265);
        }
        getchar ();
    }
    cin >> zYieKjfUa;
    for (int aIjrTnA2U6v = 2;
    (231 - 230) + zYieKjfUa > aIjrTnA2U6v; aIjrTnA2U6v = aIjrTnA2U6v + 1) {
        int MygPJc = (93 - 93);
        while (CW1uZdXY5gU > MygPJc) {
            {
                int OLp9GehA8 = (946 - 946);
                while (CW1uZdXY5gU > OLp9GehA8) {
                    if (!(aIjrTnA2U6v != EBdfiH3zPoDC[MygPJc][OLp9GehA8])) {
                        if (!((57 - 56) != EBdfiH3zPoDC[MygPJc -(800 - 799)][OLp9GehA8]) && (922 - 922) < MygPJc)
                            EBdfiH3zPoDC[MygPJc -(162 - 161)][OLp9GehA8] = aIjrTnA2U6v + (961 - 960);
                        if (!((236 - 235) != EBdfiH3zPoDC[MygPJc +(644 - 643)][OLp9GehA8]) && CW1uZdXY5gU -(379 - 378) > MygPJc)
                            EBdfiH3zPoDC[MygPJc +(922 - 921)][OLp9GehA8] = aIjrTnA2U6v + (335 - 334);
                        if (EBdfiH3zPoDC[MygPJc][OLp9GehA8 -(348 - 347)] == (741 - 740) && OLp9GehA8 > 0)
                            EBdfiH3zPoDC[MygPJc][OLp9GehA8 -(40 - 39)] = aIjrTnA2U6v + (37 - 36);
                        if (EBdfiH3zPoDC[MygPJc][OLp9GehA8 +1] == 1 && OLp9GehA8 < CW1uZdXY5gU -1)
                            EBdfiH3zPoDC[MygPJc][OLp9GehA8 +1] = aIjrTnA2U6v + 1;
                    }
                    OLp9GehA8++;
                };
            }
            MygPJc = MygPJc +1;
        };
    }
    zYieKjfUa = 0;
    {
        int aIjrTnA2U6v = 0;
        while (aIjrTnA2U6v < CW1uZdXY5gU) {
            for (int MygPJc = 0;
            MygPJc < CW1uZdXY5gU; MygPJc = MygPJc +1) {
                if (EBdfiH3zPoDC[aIjrTnA2U6v][MygPJc] > 1)
                    zYieKjfUa = zYieKjfUa + 1;
            }
            aIjrTnA2U6v = aIjrTnA2U6v + 1;
        };
    }
    cout << zYieKjfUa;
    return 0;
}

