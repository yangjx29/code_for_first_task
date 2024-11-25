int main () {
    int a [100];
    int HAPgRsIOtH7l, i, ygeHSNxnA0G, lc4eaqX2;
    int e;
    scanf ("%d", &HAPgRsIOtH7l);
    {
        i = 0;
        while (HAPgRsIOtH7l -1 > i) {
            scanf ("%d ", &a[i]);
            i = i + 1;
        };
    }
    if (i = HAPgRsIOtH7l -1) {
        scanf ("%d", &a[i]);
    }
    {
        ygeHSNxnA0G = 1;
        while (HAPgRsIOtH7l / 2 + 1 > ygeHSNxnA0G) {
            e = a[HAPgRsIOtH7l -ygeHSNxnA0G];
            a[HAPgRsIOtH7l -ygeHSNxnA0G] = a[ygeHSNxnA0G - 1];
            a[ygeHSNxnA0G - 1] = e;
            ygeHSNxnA0G++;
        };
    }
    {
        lc4eaqX2 = 0;
        while (HAPgRsIOtH7l -1 > lc4eaqX2) {
            printf ("%d ", a[lc4eaqX2]);
            lc4eaqX2 = lc4eaqX2 + 1;
        };
    }
    if (lc4eaqX2 = HAPgRsIOtH7l -1) {
        printf ("%d", a[lc4eaqX2]);
    }
    return 0;
}

