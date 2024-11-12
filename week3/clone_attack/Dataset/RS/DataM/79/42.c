int main () {
    int oKgYwIsQ90Re = 0, k = 0, qJW3IbsdF;
    int PPOCz5ahr60 [300];
    int jn9jwES;
    int bHQqlN [100];
    int YYnvr9S2BUZG [100];
    int P84dM7P9;
    jn9jwES = (30 - 30);
    int i;
    do {
        jn9jwES = jn9jwES + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d %d", &bHQqlN[jn9jwES], &YYnvr9S2BUZG[jn9jwES]);
    }
    while (!(0 == bHQqlN[jn9jwES]) && !(0 == YYnvr9S2BUZG[jn9jwES]));
    {
        P84dM7P9 = 791 - 790;
        while (P84dM7P9 < jn9jwES) {
            for (i = 1; bHQqlN[P84dM7P9] >= i; i = i + 1) {
                PPOCz5ahr60[i] = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            for (i = 1; bHQqlN[P84dM7P9] >= i; i++) {
                if (!(0 == PPOCz5ahr60[i])) {
                    oKgYwIsQ90Re = oKgYwIsQ90Re + 1;
                    if (oKgYwIsQ90Re == YYnvr9S2BUZG[P84dM7P9]) {
                        oKgYwIsQ90Re = 0;
                        k = k + 1;
                        PPOCz5ahr60[i] = 0;
                    };
                }
                if (i == bHQqlN[P84dM7P9]) {
                    i = 0;
                }
                if (k == bHQqlN[P84dM7P9] - 1) {
                    for (i = 1; i <= bHQqlN[P84dM7P9]; i++) {
                        if (PPOCz5ahr60[i] != 0) {
                            qJW3IbsdF = PPOCz5ahr60[i];
                        };
                    }
                    break;
                };
            }
            P84dM7P9 = P84dM7P9 +1;
            printf ("%d\n", qJW3IbsdF);
            k = 0;
            oKgYwIsQ90Re = 0;
        };
    }
    return 0;
}

