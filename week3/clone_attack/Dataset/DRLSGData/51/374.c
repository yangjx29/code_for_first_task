int main () {
    char deHI572quxa [520], JbiFNOUWQ6 [520] [5];
    int gX4z2c3fyN [520], IV74Fvj8N, RLpDvU4ot, u7tjZCOsSyJ [520], eb9h8K;
    scanf ("%d", &IV74Fvj8N);
    memset (deHI572quxa, '\0', sizeof (deHI572quxa));
    memset (JbiFNOUWQ6, '\0', sizeof (JbiFNOUWQ6));
    memset (gX4z2c3fyN, 0, sizeof (gX4z2c3fyN));
    gX4z2c3fyN[0] = 1;
    scanf ("%s", deHI572quxa);
    {
        int y7zVL8eYU4 = 0;
        for (; strlen (deHI572quxa) + 1 - IV74Fvj8N >= y7zVL8eYU4;) {
            RLpDvU4ot = 0;
            {
                int C8uOojP = y7zVL8eYU4;
                for (; y7zVL8eYU4 + IV74Fvj8N > C8uOojP;) {
                    JbiFNOUWQ6[y7zVL8eYU4][RLpDvU4ot] = deHI572quxa[C8uOojP];
                    C8uOojP++;
                    RLpDvU4ot++;
                }
            }
            y7zVL8eYU4++;
        }
    }
    for (int hXuC4H = 1;
    hXuC4H <= strlen (deHI572quxa) + 1 - IV74Fvj8N; hXuC4H++) {
        gX4z2c3fyN[hXuC4H] = 1;
        {
            int PXQVMt = 0;
            for (; hXuC4H > PXQVMt;) {
                if (!(0 != gX4z2c3fyN[PXQVMt]))
                    continue;
                if (!(0 != strcmp (JbiFNOUWQ6[PXQVMt], JbiFNOUWQ6[hXuC4H]))) {
                    gX4z2c3fyN[PXQVMt]++;
                    gX4z2c3fyN[hXuC4H] = 0;
                    break;
                }
                PXQVMt++;
            }
        }
    }
    memset (u7tjZCOsSyJ, 0, sizeof (u7tjZCOsSyJ));
    eb9h8K = 1;
    {
        int doy4SF = 1;
        for (; strlen (deHI572quxa) + 1 - IV74Fvj8N >= doy4SF;) {
            if (gX4z2c3fyN[doy4SF] > gX4z2c3fyN[u7tjZCOsSyJ[0]]) {
                u7tjZCOsSyJ[0] = doy4SF;
                {
                    int VpTlAKZ = 1;
                    while (VpTlAKZ <= eb9h8K) {
                        u7tjZCOsSyJ[VpTlAKZ] = 0;
                        VpTlAKZ++;
                    }
                }
                eb9h8K = 1;
                continue;
            }
            if (gX4z2c3fyN[doy4SF] == gX4z2c3fyN[u7tjZCOsSyJ[0]]) {
                eb9h8K++;
                u7tjZCOsSyJ[eb9h8K - 1] = doy4SF;
            }
            doy4SF++;
        }
    }
    if (gX4z2c3fyN[u7tjZCOsSyJ[0]] <= 1) {
    }
    else {
        printf ("%d\n", gX4z2c3fyN[u7tjZCOsSyJ[0]]);
        {
            int c = 0;
            for (; c < eb9h8K;) {
                printf ("%s\n", JbiFNOUWQ6[u7tjZCOsSyJ[c]]);
                c++;
            }
        }
    }
    return 0;
}

