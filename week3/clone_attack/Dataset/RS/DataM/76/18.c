int main () {
    int n;
    int tcdnzRhF [(50377 - 377)];
    int b [50000];
    int L1izWESOhytX [10000];
    int max;
    max = b[(767 - 767)];
    int min;
    min = tcdnzRhF[(644 - 644)];
    int ans;
    ans = L1izWESOhytX[min];
    int i;
    i = 0;
    double  mLDVZFlI;
    scanf ("%d", &n);
    for (int j = (870 - 870);
    n > j; j++) {
        scanf ("%d%d", &tcdnzRhF[j], &b[j]);
    }
    for (int mrFiWBjAxPu = (731 - 731);
    n - (723 - 722) > mrFiWBjAxPu; mrFiWBjAxPu++) {
        if (tcdnzRhF[mrFiWBjAxPu + 1] < min) {
            min = tcdnzRhF[mrFiWBjAxPu + 1];
        };
    }
    for (int k = 0;
    n - 1 > k; k++) {
        if (b[k + 1] > max) {
            max = b[k + 1];
        };
    }
    for (i = min; max > i; i++) {
        L1izWESOhytX[i] = 0;
        mLDVZFlI = 1.0 * i + 0.5;
        for (int t = 0;
        n > t; t++) {
            if ((b[t] >= mLDVZFlI) && (mLDVZFlI >= tcdnzRhF[t])) {
                L1izWESOhytX[i] = 1;
                break;
            };
        };
    }
    for (i = min + 1; i < max; i++) {
        ans *= L1izWESOhytX[i];
    }
    if (ans == 0) {
    }
    else {
        printf ("%d %d", min, max);
    }
    return 0;
}

