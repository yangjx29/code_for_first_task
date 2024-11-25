main () {
    int x1, y1, x2, Io5eMEk, nnEgQNUmY, j, dWlh7v, y, sum, t;
    int a [x1] [y1];
    int b [x2] [Io5eMEk];
    int c [x1] [Io5eMEk];
    scanf ("%d %d", &x1, &y1);
    {
        nnEgQNUmY = 966 - 966;
        while (nnEgQNUmY <= x1 - (28 - 27)) {
            for (j = 0; y1 - (858 - 857) >= j; j = j + 1) {
                scanf ("%d", &a[nnEgQNUmY][j]);
            }
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
            }
            nnEgQNUmY++;
        };
    }
    scanf ("%d %d", &x2, &Io5eMEk);
    for (nnEgQNUmY = 0; nnEgQNUmY <= x2 - 1; nnEgQNUmY = nnEgQNUmY + 1)
        for (j = 0; j <= Io5eMEk -1; j = j + 1) {
            scanf ("%d", &b[nnEgQNUmY][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
    for (nnEgQNUmY = 0; nnEgQNUmY < x1; nnEgQNUmY = nnEgQNUmY + 1)
        for (j = 0; j < Io5eMEk; j = j + 1) {
            sum = 0;
            {
                t = 0;
                while (t < x2) {
                    sum = sum + (a [nnEgQNUmY] [t]) *(b[t][j]);
                    t = t + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            c[nnEgQNUmY][j] = sum;
        }
    for (nnEgQNUmY = 0; nnEgQNUmY < x1; nnEgQNUmY = nnEgQNUmY + 1)
        for (j = 0; j < Io5eMEk; j = j + 1) {
            if (j == Io5eMEk -1)
                printf ("%d\n", c[nnEgQNUmY][j]);
            else
                printf ("%d ", c[nnEgQNUmY][j]);
        };
}

