int dir [4] [2] = {(563 - 563), 1, 1, 0, 0, -1, -1, 0};
int NKQZPE, GsSQWVpKi, col, wGkU5O1r [200] [200];

int main () {
    int NKQZPE;
    int JiEP80;
    int lct4aS;
    int nBydKMG1RJvY;
    int YEpY7zl;
    NKQZPE = 0;
    JiEP80 = 0;
    lct4aS = 0;
    scanf ("%d%d", &GsSQWVpKi, &col);
    for (int JiEP80 = 0;
    GsSQWVpKi > JiEP80; ++JiEP80)
        for (int lct4aS = 0;
        col > lct4aS; ++lct4aS)
            scanf ("%d", &wGkU5O1r[JiEP80][lct4aS]);
    while (1 > 0) {
        nBydKMG1RJvY = JiEP80 +dir[NKQZPE][0];
        printf ("%d\n", wGkU5O1r[JiEP80][lct4aS]);
        wGkU5O1r[JiEP80][lct4aS] = -1;
        YEpY7zl = lct4aS + dir[NKQZPE][1];
        if (0 <= nBydKMG1RJvY && nBydKMG1RJvY < GsSQWVpKi &&YEpY7zl >= 0 && col > YEpY7zl &&!(-1 == wGkU5O1r[nBydKMG1RJvY][YEpY7zl])) {
            lct4aS = YEpY7zl;
            JiEP80 = nBydKMG1RJvY;
            continue;
        }
        NKQZPE = (NKQZPE +1) % 4;
        nBydKMG1RJvY = JiEP80 +dir[NKQZPE][0];
        YEpY7zl = lct4aS + dir[NKQZPE][1];
        if (0 <= nBydKMG1RJvY && nBydKMG1RJvY < GsSQWVpKi &&YEpY7zl >= 0 && col > YEpY7zl &&wGkU5O1r[nBydKMG1RJvY][YEpY7zl] != -1) {
            lct4aS = YEpY7zl;
            JiEP80 = nBydKMG1RJvY;
            continue;
        }
        break;
    };
}

