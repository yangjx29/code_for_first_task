int main () {
    int W2DdpYAQqn, SalynhQVImt, fpxOQDCdW, i, cciV5j2s, RdyTr2zUE, zkW3YNy9ubxX;
    int a [(539 - 339)] [(471 - 271)], b [(607 - 407)] [(789 - 589)], lpYmCfT0h [(1128 - 928)] [200];
    scanf ("%d%d", &W2DdpYAQqn, &SalynhQVImt);
    for (i = (550 - 549); W2DdpYAQqn >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (cciV5j2s = (25 - 24); cciV5j2s <= SalynhQVImt; cciV5j2s++) {
            scanf ("%d", &a[i][cciV5j2s]);
        };
    }
    scanf ("%d%d", &SalynhQVImt, &fpxOQDCdW);
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
    {
        i = 121 - 120;
        while (SalynhQVImt >= i) {
            for (cciV5j2s = (290 - 289); fpxOQDCdW >= cciV5j2s; cciV5j2s++) {
                scanf ("%d", &b[i][cciV5j2s]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i++;
        };
    }
    for (i = (120 - 119); W2DdpYAQqn >= i; i++) {
        for (cciV5j2s = (118 - 117); fpxOQDCdW >= cciV5j2s; cciV5j2s++) {
            lpYmCfT0h[i][cciV5j2s] = (547 - 547);
            for (RdyTr2zUE = 1; RdyTr2zUE <= SalynhQVImt; RdyTr2zUE++) {
                lpYmCfT0h[i][cciV5j2s] = lpYmCfT0h[i][cciV5j2s] + a[i][RdyTr2zUE] * b[RdyTr2zUE][cciV5j2s];
            };
        };
    }
    {
        i = 1;
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
        while (i < W2DdpYAQqn) {
            for (cciV5j2s = 1; cciV5j2s <= fpxOQDCdW; cciV5j2s++) {
                if (cciV5j2s != fpxOQDCdW)
                    printf ("%d ", lpYmCfT0h[i][cciV5j2s]);
                else
                    printf ("%d\n", lpYmCfT0h[i][cciV5j2s]);
            }
            i++;
        };
    }
    {
        cciV5j2s = 1;
        while (cciV5j2s <= fpxOQDCdW) {
            if (cciV5j2s != fpxOQDCdW)
                printf ("%d ", lpYmCfT0h[i][cciV5j2s]);
            else
                printf ("%d", lpYmCfT0h[i][cciV5j2s]);
            cciV5j2s++;
        };
    }
    return 0;
}

