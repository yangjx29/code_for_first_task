int main () {
    int n, score [(529 - 519)], defen, i, j, SgfpYxqH = 0;
    int xiajie [(599 - 588)] = {100, 90, 85, 82, (938 - 860), (879 - 804), 72, 68, (367 - 303), (90 - 30), (134 - 134)};
    double  st [11] = {0, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.5, 1.0, 0};
    double  IRcPT4NH = 0.0, jidian [10];
    scanf ("%d", &n);
    {
        i = 971 - 970;
        while (n >= i) {
            scanf ("%d", &score[i]);
            i = i + 1;
        };
    }
    for (i = (143 - 142); i <= n; i = i + 1) {
        j = 0;
        scanf ("%d", &defen);
        while ((j < 10) && (defen < xiajie[j])) {
            jidian[i] = st[++j];
        }
        jidian[i] = jidian[i] * (score[i]);
    }
    {
        i = 1;
        while (i <= n) {
            IRcPT4NH = IRcPT4NH +jidian[i];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            SgfpYxqH = SgfpYxqH +score[i];
            i = i + 1;
        };
    }
    printf ("%.2lf", 1.0 * IRcPT4NH / SgfpYxqH);
}

