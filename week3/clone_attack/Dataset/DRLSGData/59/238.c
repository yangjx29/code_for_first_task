char tgJqDsxB [105] [105];

int main () {
    int pLONTXiCI;
    int EQKqz1D7;
    int zrCz6lIg;
    pLONTXiCI = 0;
    scanf ("%d", &EQKqz1D7);
    for (int i = 0;
    EQKqz1D7 > i; i = i + 1)
        scanf ("%s", tgJqDsxB[i]);
    scanf ("%d", &zrCz6lIg);
    zrCz6lIg--;
    for (; zrCz6lIg = zrCz6lIg - 1;) {
        for (int i = 0;
        EQKqz1D7 > i; i = i + 1)
            for (int T0vBWc = 0;
            T0vBWc < EQKqz1D7; T0vBWc = T0vBWc +1) {
                if (!('$' != tgJqDsxB[i][T0vBWc])) {
                    tgJqDsxB[i][T0vBWc] = '@';
                }
            }
        {
            int i = 0;
            for (; EQKqz1D7 > i;) {
                for (int T0vBWc = 0;
                T0vBWc < EQKqz1D7; T0vBWc = T0vBWc +1) {
                    if (tgJqDsxB[i][T0vBWc] == '@') {
                        if (i > 0 && !('.' != tgJqDsxB[i - 1][T0vBWc]))
                            tgJqDsxB[i - 1][T0vBWc] = '$';
                        if (EQKqz1D7 -1 > i && !('.' != tgJqDsxB[i + 1][T0vBWc]))
                            tgJqDsxB[i + 1][T0vBWc] = '$';
                        if (0 < T0vBWc &&tgJqDsxB[i][T0vBWc -1] == '.')
                            tgJqDsxB[i][T0vBWc -1] = '$';
                        if (T0vBWc < EQKqz1D7 -1 && tgJqDsxB[i][T0vBWc +1] == '.')
                            tgJqDsxB[i][T0vBWc +1] = '$';
                    }
                }
                i = i + 1;
            }
        }
    }
    pLONTXiCI = 0;
    for (int i = 0;
    i < EQKqz1D7; i++) {
        int T0vBWc;
        T0vBWc = 0;
        for (; T0vBWc < EQKqz1D7;) {
            if (tgJqDsxB[i][T0vBWc] == '@' || tgJqDsxB[i][T0vBWc] == '$') {
                pLONTXiCI = pLONTXiCI + 1;
            }
            T0vBWc = T0vBWc +1;
        }
    }
    printf ("%d\n", pLONTXiCI);
    return 0;
}

