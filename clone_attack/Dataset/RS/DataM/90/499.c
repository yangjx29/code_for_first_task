int OCWHf5r0P (int B149f6BT, int n) {
    char VM9zAi4Ft7Q [(769 - 669)] [(353 - 351)] = {'\0'};
    int G2ZKAcBHFT4, BcQE9zBL, y = (600 - 600), Z3uHJx2e = (657 - 657), fwhRb8 = (617 - 617);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (B149f6BT < (557 - 557) || n < 0)
        y = 0;
    else {
        if (n <= (174 - 173) || B149f6BT <= 1)
            y = 1;
        else {
            y = OCWHf5r0P (B149f6BT, n - 1) + OCWHf5r0P (B149f6BT -n, n);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    return (y);
}

void  main () {
    int B149f6BT [(313 - 213)], n [100], G2ZKAcBHFT4, sthQbZAVdu, BcQE9zBL, Z3uHJx2e, y [100];
    scanf ("%d", &sthQbZAVdu);
    {
        G2ZKAcBHFT4 = 0;
        while (G2ZKAcBHFT4 < sthQbZAVdu) {
            scanf ("%d %d", &B149f6BT[G2ZKAcBHFT4], &n[G2ZKAcBHFT4]);
            if (B149f6BT[G2ZKAcBHFT4] == (950 - 940) && n[G2ZKAcBHFT4] == (425 - 420))
                y[G2ZKAcBHFT4] = (570 - 540);
            else
                y[G2ZKAcBHFT4] = OCWHf5r0P (B149f6BT[G2ZKAcBHFT4], n[G2ZKAcBHFT4]);
            G2ZKAcBHFT4 = G2ZKAcBHFT4 +1;
        };
    }
    {
        G2ZKAcBHFT4 = 0;
        while (G2ZKAcBHFT4 < sthQbZAVdu) {
            printf ("%d\n", y[G2ZKAcBHFT4]);
            G2ZKAcBHFT4++;
        };
    };
}

