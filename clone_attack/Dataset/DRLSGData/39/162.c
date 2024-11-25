struct   student {
    char OrBA4KeQcfE [25];
    int DUHh9iPn;
    int SXANrvLzfOb;
    char vdb9enu0px;
    char QaDFT0cHeh;
    int Y8rczu63;
    int money;
};
int QZci9mj1 (struct   student s);

int main (int J6WTBLGHc, char *i64FDSEsu8 []) {
    struct   student Riq0me9Y43O [101];
    int L3AXFfVP;
    int O37NK9;
    int MAX;
    int fyJqoeAm;
    fyJqoeAm = L3AXFfVP = 0;
    scanf ("%d", &O37NK9);
    for (int ykeAusKdp1XU = 0;
    O37NK9 > ykeAusKdp1XU; ykeAusKdp1XU++) {
        scanf ("%s %d %d %c %c %d", Riq0me9Y43O[ykeAusKdp1XU].OrBA4KeQcfE, &Riq0me9Y43O[ykeAusKdp1XU].DUHh9iPn, &Riq0me9Y43O[ykeAusKdp1XU].SXANrvLzfOb, &Riq0me9Y43O[ykeAusKdp1XU].vdb9enu0px, &Riq0me9Y43O[ykeAusKdp1XU].QaDFT0cHeh, &Riq0me9Y43O[ykeAusKdp1XU].Y8rczu63);
        Riq0me9Y43O[ykeAusKdp1XU].money = QZci9mj1 (Riq0me9Y43O[ykeAusKdp1XU]);
    }
    MAX = 0;
    {
        int iknd5U4;
        iknd5U4 = 0;
        for (; iknd5U4 < O37NK9;) {
            if (L3AXFfVP < Riq0me9Y43O[iknd5U4].money) {
                L3AXFfVP = Riq0me9Y43O[iknd5U4].money;
                MAX = iknd5U4;
            }
            fyJqoeAm += Riq0me9Y43O[iknd5U4].money;
            iknd5U4++;
        }
    }
    printf ("%s\n", Riq0me9Y43O[MAX].OrBA4KeQcfE);
    printf ("%d\n", L3AXFfVP);
    printf ("%d\n", fyJqoeAm);
    return 0;
}

int QZci9mj1 (struct   student s) {
    int fyJqoeAm;
    fyJqoeAm = 0;
    if ((s.DUHh9iPn > 80) && (1 <= s.Y8rczu63)) {
        fyJqoeAm += 8000;
    }
    if ((s.DUHh9iPn > 85) && (s.SXANrvLzfOb > 80)) {
        fyJqoeAm += 4000;
    }
    if (s.DUHh9iPn > 90) {
        fyJqoeAm += 2000;
    }
    if ((s.QaDFT0cHeh == 'Y') && (s.DUHh9iPn > 85)) {
        fyJqoeAm += 1000;
    }
    if ((s.SXANrvLzfOb > 80) && (s.vdb9enu0px == 'Y')) {
        fyJqoeAm += 850;
    }
    return fyJqoeAm;
}

