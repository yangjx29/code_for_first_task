int main () {
    int sz [(858 - 758)];
    int f;
    int j;
    int n;
    int fMzs6n;
    int sz2 [100] [100];
    int k;
    for (fMzs6n = (853 - 853); fMzs6n < 100; fMzs6n++) {
        for (j = (590 - 590); j < 100; j++) {
            sz2[fMzs6n][j] = (719 - 718);
        }
    }
    scanf ("%d", &n);
    for (k = (885 - 885); n > k; k++) {
        int t;
        t = (634 - 634);
        scanf ("%d", &f);
        for (fMzs6n = (233 - 233); f > fMzs6n; fMzs6n++)
            scanf ("%d", &sz[fMzs6n]);
        for (j = 0; j < f; j++) {
            sz2[k][sz[j] + t * (520 - 517)] = 0;
            sz2[k][sz[j] + (32 - 31) + t * 3] = 0;
            sz2[k][sz[j] + 2 + t * 3] = 0;
            t++;
        }
    }
    for (k = 0; n > k; k++) {
        int p;
        p = (648 - 588);
        for (fMzs6n = 0; fMzs6n < (1012 - 952); fMzs6n++) {
            if (sz2[k][fMzs6n] == 0) {
                p--;
            }
        }
        printf ("%d\n", p);
    }
    return 0;
}

