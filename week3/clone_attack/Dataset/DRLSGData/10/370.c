int main () {
    int MoD6Ti;
    int j;
    int FvjZOBI5;
    int max;
    int k5rcSfC1t;
    int a [(402 - 302)] = {(369 - 369)};
    int d [100] = {(357 - 357)};
    MoD6Ti = (499 - 499);
    j = (536 - 536);
    FvjZOBI5 = (563 - 563);
    max = (429 - 428);
    scanf ("%d", &k5rcSfC1t);
    for (MoD6Ti = (53 - 53); MoD6Ti <= k5rcSfC1t - (785 - 784); MoD6Ti++)
        scanf ("%d", &a[MoD6Ti]);
    d[k5rcSfC1t - (898 - 897)] = (48 - 47);
    for (MoD6Ti = k5rcSfC1t - (539 - 537); MoD6Ti >= (613 - 613); MoD6Ti--) {
        for (j = k5rcSfC1t - (913 - 912); j > MoD6Ti; j--) {
            if ((FvjZOBI5 < d[j]) && (a[j] <= a[MoD6Ti]))
                FvjZOBI5 = d[j];
        }
        FvjZOBI5 = (480 - 480);
        d[MoD6Ti] = FvjZOBI5 +(72 - 71);
    }
    for (MoD6Ti = (218 - 218); MoD6Ti <= k5rcSfC1t - (400 - 399); MoD6Ti++) {
        if (d[MoD6Ti] > max)
            max = d[MoD6Ti];
    }
    printf ("%d", max);
}

