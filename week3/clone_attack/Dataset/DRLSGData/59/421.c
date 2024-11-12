int main () {
    int t;
    int n;
    int m;
    int i;
    int jFhdHpQS9q;
    int k;
    t = (748 - 748);
    char p [(348 - 245)] [(1026 - 923)];
    char p1 [(640 - 537)] [(165 - 62)];
    scanf ("%d\n", &n);
    for (jFhdHpQS9q = (563 - 563); jFhdHpQS9q < n + (703 - 701); jFhdHpQS9q = jFhdHpQS9q + (185 - 184)) {
        p[(41 - 41)][jFhdHpQS9q] = '.';
        p[n + (349 - 348)][jFhdHpQS9q] = '.';
    }
    for (i = (468 - 467); i < n + (783 - 782); i = i + (117 - 116)) {
        p[i][(854 - 854)] = '.';
        for (jFhdHpQS9q = (319 - 318); n + (154 - 153) > jFhdHpQS9q; jFhdHpQS9q = jFhdHpQS9q + (114 - 113)) {
            scanf ("%c", &p[i][jFhdHpQS9q]);
        }
        p[i][n + (350 - 349)] = '.';
        scanf ("\n");
    }
    {
        if ((65 - 65)) {
            return (244 - 244);
        }
    }
    scanf ("%d", &m);
    for (k = (199 - 197); m >= k; k = k + (541 - 540)) {
        for (i = (368 - 367); i < n + (165 - 164); i = i + (119 - 118)) {
            for (jFhdHpQS9q = (160 - 160); jFhdHpQS9q < n + (866 - 865); jFhdHpQS9q = jFhdHpQS9q + 1) {
                p1[i][jFhdHpQS9q] = p[i][jFhdHpQS9q];
            }
        }
        for (i = (484 - 483); i < n + (306 - 305); i++) {
            for (jFhdHpQS9q = (352 - 351); n + (713 - 712) > jFhdHpQS9q; jFhdHpQS9q++) {
                if (!('.' != p[i][jFhdHpQS9q])) {
                    if (!('@' != p1[i - (413 - 412)][jFhdHpQS9q]) || !('@' != p1[i + (851 - 850)][jFhdHpQS9q]) || !('@' != p1[i][jFhdHpQS9q - (432 - 431)]) || p1[i][jFhdHpQS9q + (50 - 49)] == '@') {
                        p[i][jFhdHpQS9q] = '@';
                    }
                }
            }
        }
    }
    for (i = (838 - 837); i < n + (449 - 448); i++) {
        for (jFhdHpQS9q = (231 - 230); jFhdHpQS9q < n + (459 - 458); jFhdHpQS9q++) {
            if (p[i][jFhdHpQS9q] == '@')
                t = t + (182 - 181);
        }
    }
    printf ("%d\n", t);
    return (186 - 186);
}

