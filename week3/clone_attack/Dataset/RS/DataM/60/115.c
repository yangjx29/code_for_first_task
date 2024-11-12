int sushu (int qIrb1Dm2wj) {
    int i, k;
    if (qIrb1Dm2wj == 1)
        k = 0;
    else if (qIrb1Dm2wj == 2)
        k = 1;
    else {
        for (i = 2; i < qIrb1Dm2wj; i = i + 1) {
            if (!(0 == qIrb1Dm2wj % i))
                k = 1;
            else {
                k = 0;
                break;
            };
        };
    }
    return (k);
}

main () {
    int ZQfzSt2h, b [100000], i, j, k, t;
    scanf ("%d", &ZQfzSt2h);
    if (ZQfzSt2h <= 4)
        ;
    else {
        for (i = 1, j = 0; i <= ZQfzSt2h; i = i + 1) {
            t = sushu (i);
            if (t == 1) {
                b[j] = i;
                k = j;
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
                j = j + 1;
            };
        }
        for (j = 1; j <= k; j++) {
            if (b[j] - b[j - 1] == 2)
                printf ("%d %d\n", b[j - 1], b[j]);
        };
    };
}

