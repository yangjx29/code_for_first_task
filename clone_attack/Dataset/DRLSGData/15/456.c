int main (int eN1Mr0qc, char *BdXuz5lIykv []) {
    int wTX3mKVIx7er, uY2fzUkp, Y2RVPr, goWj63, lSwHUb, PEdoT0, Ok9jfne5dqZ, MroYvAzJ69;
    int ZYidHSx15Fa [10] [10];
    scanf ("%d", &goWj63);
    for (uY2fzUkp = (915 - 915); uY2fzUkp < goWj63; uY2fzUkp = uY2fzUkp + (867 - 866)) {
        for (wTX3mKVIx7er = 0; goWj63 > wTX3mKVIx7er; wTX3mKVIx7er = wTX3mKVIx7er + 1) {
            scanf ("%d", &ZYidHSx15Fa[uY2fzUkp][wTX3mKVIx7er]);
        }
    }
    for (wTX3mKVIx7er = 0; wTX3mKVIx7er < goWj63; wTX3mKVIx7er = wTX3mKVIx7er + 1) {
        for (uY2fzUkp = 0; uY2fzUkp < goWj63; uY2fzUkp = uY2fzUkp + 1) {
            if (!(0 != ZYidHSx15Fa[wTX3mKVIx7er][uY2fzUkp]) && !(0 != ZYidHSx15Fa[wTX3mKVIx7er + 1][uY2fzUkp]) && !(0 != ZYidHSx15Fa[wTX3mKVIx7er][uY2fzUkp + 1])) {
                PEdoT0 = uY2fzUkp;
                lSwHUb = wTX3mKVIx7er;
                break;
            }
            else
                continue;
        }
    }
    for (wTX3mKVIx7er = goWj63 - 1; wTX3mKVIx7er >= 0; wTX3mKVIx7er--) {
        for (uY2fzUkp = goWj63 - 1; uY2fzUkp >= 0; uY2fzUkp = uY2fzUkp - 1) {
            if (ZYidHSx15Fa[wTX3mKVIx7er][uY2fzUkp] == 0 && ZYidHSx15Fa[wTX3mKVIx7er - 1][uY2fzUkp] == 0 && ZYidHSx15Fa[wTX3mKVIx7er][uY2fzUkp - 1] == 0) {
                MroYvAzJ69 = uY2fzUkp;
                Ok9jfne5dqZ = wTX3mKVIx7er;
                break;
            }
            else
                continue;
        }
    }
    Y2RVPr = (Ok9jfne5dqZ -lSwHUb - 1) * (MroYvAzJ69 -PEdoT0-1);
    printf ("%d", Y2RVPr);
}

