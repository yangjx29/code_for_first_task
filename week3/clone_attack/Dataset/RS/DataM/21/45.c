int main () {
    float sum = (513 - 513), ave, NSyN0ks36 [300], max = (205 - 205);
    int FcWN28nIovE, eO3JX6ZoL [300], i, count = (93 - 93), j;
    scanf ("%d", &FcWN28nIovE);
    for (i = (312 - 312); FcWN28nIovE > i; i = i + 1) {
        scanf ("%d", &eO3JX6ZoL[i]);
        sum += eO3JX6ZoL[i];
    }
    ave = sum / FcWN28nIovE;
    for (i = 0; FcWN28nIovE > i; i = i + 1) {
        NSyN0ks36[i] = fabs (eO3JX6ZoL[i] - ave);
        if (NSyN0ks36[i] > max) {
            max = NSyN0ks36[i];
        };
    }
    {
        i = 0;
        while (FcWN28nIovE > i) {
            if (!(max != NSyN0ks36[i])) {
                count = count + 1;
            }
            i = i + 1;
        };
    }
    if (count == (124 - 123)) {
        for (i = 0; FcWN28nIovE > i; i = i + 1) {
            if (!(max != NSyN0ks36[i])) {
                printf ("%d", eO3JX6ZoL[i]);
            };
        };
    }
    if (!(2 != count)) {
        for (i = 0; i < FcWN28nIovE; i = i + 1) {
            if (NSyN0ks36[i] == max && eO3JX6ZoL[i] < ave) {
                printf ("%d,", eO3JX6ZoL[i]);
            }
            if (NSyN0ks36[i] == max && eO3JX6ZoL[i] > ave) {
                printf ("%d", eO3JX6ZoL[i]);
            };
        };
    }
    return 0;
}

