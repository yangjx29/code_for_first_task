void  main () {
    int xTcjUy [300];
    int TPm3SAIJx [300];
    int u6jD53;
    int *x1GVNrL;
    int Qilvew3;
    int k15MJeha;
    int n;
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
    u6jD53 = 0;
    x1GVNrL = TPm3SAIJx;
    scanf ("%d", &n);
    for (Qilvew3 = 0; n > Qilvew3; Qilvew3 = Qilvew3 +1)
        scanf ("%d", &xTcjUy[Qilvew3]);
    for (Qilvew3 = 0; Qilvew3 < n; Qilvew3++) {
        for (k15MJeha = 0; Qilvew3 > k15MJeha; k15MJeha = k15MJeha + 1) {
            if (!(xTcjUy[k15MJeha] != xTcjUy[Qilvew3]))
                break;
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
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k15MJeha == Qilvew3) {
            u6jD53++;
            *x1GVNrL++ = xTcjUy[Qilvew3];
        }
        else
            continue;
    }
    x1GVNrL = TPm3SAIJx;
    for (Qilvew3 = 0; Qilvew3 < u6jD53 - 1; Qilvew3++)
        printf ("%d,", *x1GVNrL++);
    printf ("%d", *x1GVNrL);
}

