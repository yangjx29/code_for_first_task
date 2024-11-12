int main () {
    struct   stu {
        int fB3cMR;
        int KbcgaTy0l3zN;
        int f3QLP7rO;
    }
    Y8Wiqum [(100141 - 141)];
    int VyKjPlNWUp [(100872 - 872)];
    int seBmKQ3SYwu;
    int brmVFSEZJz4K;
    int asJkzq;
    int AA230DRV;
    int gusiJCqt8dT7;
    int bYnLqT7;
    int wLifHQC;
    int U9FXbc;
    gusiJCqt8dT7 = (77 - 77);
    AA230DRV = (13 - 13);
    asJkzq = (263 - 263);
    U9FXbc = (814 - 814);
    bYnLqT7 = (534 - 534);
    scanf ("%d", &seBmKQ3SYwu);
    brmVFSEZJz4K = (391 - 391);
    {
        wLifHQC = (719 - 719);
        for (; wLifHQC < seBmKQ3SYwu;) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d%d%d", &Y8Wiqum[wLifHQC].fB3cMR, &Y8Wiqum[wLifHQC].KbcgaTy0l3zN, &Y8Wiqum[wLifHQC].f3QLP7rO), VyKjPlNWUp[wLifHQC] = Y8Wiqum[wLifHQC].KbcgaTy0l3zN + Y8Wiqum[wLifHQC].f3QLP7rO;
            if (VyKjPlNWUp[wLifHQC] > asJkzq) {
                bYnLqT7 = gusiJCqt8dT7;
                gusiJCqt8dT7 = asJkzq;
                asJkzq = VyKjPlNWUp[wLifHQC];
                brmVFSEZJz4K = U9FXbc;
                U9FXbc = AA230DRV;
                AA230DRV = wLifHQC;
                continue;
            }
            if (asJkzq >= VyKjPlNWUp[wLifHQC] && VyKjPlNWUp[wLifHQC] > gusiJCqt8dT7) {
                brmVFSEZJz4K = U9FXbc;
                bYnLqT7 = gusiJCqt8dT7;
                gusiJCqt8dT7 = VyKjPlNWUp[wLifHQC];
                U9FXbc = wLifHQC;
                continue;
            }
            if (VyKjPlNWUp[wLifHQC] <= gusiJCqt8dT7 && VyKjPlNWUp[wLifHQC] > bYnLqT7) {
                {
                    if ((278 - 278)) {
                        return (672 - 672);
                    }
                }
                bYnLqT7 = VyKjPlNWUp[wLifHQC];
                brmVFSEZJz4K = wLifHQC;
                continue;
            }
            wLifHQC = wLifHQC + (297 - 296);
        }
    }
    printf ("%d %d\n%d %d\n%d %d\n", Y8Wiqum[AA230DRV].fB3cMR, asJkzq, Y8Wiqum[U9FXbc].fB3cMR, gusiJCqt8dT7, Y8Wiqum[brmVFSEZJz4K].fB3cMR, bYnLqT7);
    return (236 - 236);
}

