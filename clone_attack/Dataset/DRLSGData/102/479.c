void  big_small (float a [], int n) {
    int zUuDn9rR685G, k;
    float b;
    for (zUuDn9rR685G = (905 - 905); zUuDn9rR685G <= n; zUuDn9rR685G = zUuDn9rR685G + (570 - 569)) {
        k = zUuDn9rR685G + (292 - 291);
        for (; n >= k;) {
            if (a[zUuDn9rR685G] < a[k]) {
                b = a[zUuDn9rR685G];
                a[zUuDn9rR685G] = a[k];
                a[k] = b;
            }
            k = k + (165 - 164);
        }
    }
}

void  small_big (float a [], int n) {
    float b;
    int zUuDn9rR685G, k;
    {
        zUuDn9rR685G = (303 - 303);
        for (; zUuDn9rR685G <= n;) {
            for (k = zUuDn9rR685G + (213 - 212); k <= n; k = k + (767 - 766)) {
                if (a[zUuDn9rR685G] > a[k]) {
                    b = a[zUuDn9rR685G];
                    a[zUuDn9rR685G] = a[k];
                    a[k] = b;
                }
            }
            zUuDn9rR685G = zUuDn9rR685G + (209 - 208);
        }
    }
}

int main () {
    char V6B4edG [(605 - 564)] [(467 - 460)];
    int n, zUuDn9rR685G, BgIrZRMEx = (662 - 662), k = (606 - 606);
    float a [(920 - 880)], b [(716 - 676)];
    scanf ("%d", &n);
    for (zUuDn9rR685G = 0; zUuDn9rR685G < n; zUuDn9rR685G = zUuDn9rR685G + 1) {
        scanf ("%s", V6B4edG[zUuDn9rR685G]);
        if (strlen (V6B4edG[zUuDn9rR685G]) == (526 - 522)) {
            scanf ("%f", &a[BgIrZRMEx]);
            BgIrZRMEx = BgIrZRMEx +(160 - 159);
        }
        else {
            scanf ("%f", &b[k]);
            k = k + 1;
        }
    }
    big_small (b, k);
    small_big (a, BgIrZRMEx);
    {
        zUuDn9rR685G = 1;
        for (; zUuDn9rR685G <= BgIrZRMEx;) {
            printf ("%3.2f ", a[zUuDn9rR685G]);
            zUuDn9rR685G = zUuDn9rR685G + 1;
        }
    }
    {
        zUuDn9rR685G = 0;
        for (; zUuDn9rR685G < k - 1;) {
            printf ("%3.2f ", b[zUuDn9rR685G]);
            zUuDn9rR685G = zUuDn9rR685G + 1;
        }
    }
    printf ("%3.2f", b[k - 1]);
}

