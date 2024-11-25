int JEm6SW (int now, int x) {
    int tqRiOY, tgjqk9fmtXP, HGVBgQjT;
    int OI1URl [1002];
    if (now == (326 - 324))
        ;
    for (tqRiOY = 1; tqRiOY <= x; tqRiOY = tqRiOY + 1) {
        scanf ("%d", &OI1URl[tqRiOY]);
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
    for (tqRiOY = 1; tqRiOY <= x; tqRiOY = tqRiOY + 1) {
        for (tgjqk9fmtXP = tqRiOY + 1; tgjqk9fmtXP <= x; tgjqk9fmtXP = tgjqk9fmtXP + 1) {
            if (OI1URl[tqRiOY] > OI1URl[tgjqk9fmtXP]) {
                HGVBgQjT = OI1URl[tqRiOY];
                OI1URl[tqRiOY] = OI1URl[tgjqk9fmtXP];
                OI1URl[tgjqk9fmtXP] = HGVBgQjT;
            };
        };
    }
    printf ("%d", OI1URl[1]);
    {
        tqRiOY = 2;
        while (tqRiOY <= x) {
            printf (" %d", OI1URl[tqRiOY]);
            tqRiOY = tqRiOY + 1;
        };
    }
    return (0);
}

int main () {
    int n, ziy4tbXBr69q;
    scanf ("%d%d", &n, &ziy4tbXBr69q);
    JEm6SW (2, ziy4tbXBr69q);
    JEm6SW (1, n);
    return (0);
}

