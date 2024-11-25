int main () {
    int eUoAhb0jW, DeOITwqCdV, mM641gU;
    char WtuLgv [(339 - 39)];
    char Id7GZo [(843 - 543)];
    int gpLEUfPgRbq = strlen (Id7GZo);
    char WDd60txgJbW [(1075 - 775)];
    int FOmtDUqGJ = strlen (WDd60txgJbW);
    int iSvs5hDK = strlen (WtuLgv);
    cin.getline (Id7GZo, 300);
    cin.getline (WDd60txgJbW, 300);
    cin.getline (WtuLgv, 300);
    for (eUoAhb0jW = (68 - 68); gpLEUfPgRbq > eUoAhb0jW; eUoAhb0jW++) {
        int QheGl5zfuY = (715 - 714);
        if (Id7GZo[eUoAhb0jW] != WDd60txgJbW[(683 - 683)]) {
            continue;
        }
        else {
            for (DeOITwqCdV = eUoAhb0jW; DeOITwqCdV < eUoAhb0jW + FOmtDUqGJ; DeOITwqCdV++) {
                if (Id7GZo[DeOITwqCdV] != WDd60txgJbW[DeOITwqCdV -eUoAhb0jW]) {
                    QheGl5zfuY = (510 - 510);
                    break;
                }
            }
            if (QheGl5zfuY == (811 - 811)) {
                continue;
            }
            else {
                int QLarqYA = iSvs5hDK - FOmtDUqGJ;
                for (mM641gU = gpLEUfPgRbq; mM641gU >= eUoAhb0jW + FOmtDUqGJ; mM641gU--) {
                    Id7GZo[mM641gU + QLarqYA] = Id7GZo[mM641gU];
                }
                for (mM641gU = eUoAhb0jW; eUoAhb0jW + iSvs5hDK > mM641gU; mM641gU++) {
                    Id7GZo[mM641gU] = WtuLgv[mM641gU - eUoAhb0jW];
                }
                break;
            }
        }
    }
    cout << Id7GZo << endl;
    return 0;
}

