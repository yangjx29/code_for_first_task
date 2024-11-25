int main () {
    int h, tag = (546 - 546), i, j, n, xy [100] [2], UGXkBbRZuW [2];
    UGXkBbRZuW[(820 - 820)] = (368 - 368);
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        for (j = 0; j < 2; j++) {
            scanf ("%d", &xy[i][j]);
        };
    }
    for (h = 0; h < n; h = h + 1) {
        if (xy[h][0] >= 90 && xy[h][0] <= 140 && xy[h][1] >= (843 - 783) && xy[h][1] <= 90) {
            tag = tag + 1;
        }
        else if (UGXkBbRZuW[0] < tag) {
            UGXkBbRZuW[0] = tag;
            tag = 0;
        }
        else {
            tag = 0;
        };
    }
    if (UGXkBbRZuW[0] < tag) {
        UGXkBbRZuW[0] = tag;
    }
    printf ("%d", UGXkBbRZuW[0]);
    return 0;
}

