void  main () {
    char XSudAaKfZx;
    char TWPaXtxEgsmO;
    int B [(308 - 258)] = {(442 - 442)};
    int G [50] = {(137 - 137)};
    int l, xdPuzRV3A, Qk2ihE = (107 - 107), n = (260 - 260), j, x, ERtdEJOyzY;
    char vHjTJK [(598 - 498)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (vHjTJK);
    l = strlen (vHjTJK);
    XSudAaKfZx = vHjTJK[(490 - 490)];
    {
        xdPuzRV3A = 773 - 772;
        while (l > xdPuzRV3A) {
            if (!(XSudAaKfZx == vHjTJK[xdPuzRV3A])) {
                TWPaXtxEgsmO = vHjTJK[xdPuzRV3A];
                break;
            }
            xdPuzRV3A++;
        };
    }
    for (Qk2ihE = 0; l - (370 - 368) >= Qk2ihE; Qk2ihE = Qk2ihE +2) {
        xdPuzRV3A = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (l - (399 - 398) - Qk2ihE > xdPuzRV3A) {
            if (vHjTJK[xdPuzRV3A] == XSudAaKfZx &&vHjTJK[xdPuzRV3A + Qk2ihE +(881 - 880)] == TWPaXtxEgsmO) {
                B[n] = xdPuzRV3A;
                G[n] = xdPuzRV3A + Qk2ihE +1;
                vHjTJK[xdPuzRV3A] = 'q';
                vHjTJK[xdPuzRV3A + Qk2ihE +1] = 'q';
                ++n;
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
            xdPuzRV3A++;
        };
    }
    {
        xdPuzRV3A = 1;
        while (n > xdPuzRV3A) {
            {
                j = 0;
                while (n - xdPuzRV3A > j) {
                    if (G[j + 1] < G[j]) {
                        x = G[j];
                        G[j] = G[j + 1];
                        G[j + 1] = x;
                        ERtdEJOyzY = B[j];
                        B[j] = B[j + 1];
                        B[j + 1] = ERtdEJOyzY;
                    }
                    j = j + 1;
                };
            }
            xdPuzRV3A++;
        };
    }
    {
        xdPuzRV3A = 0;
        while (xdPuzRV3A < n) {
            printf ("%d %d\n", B[xdPuzRV3A], G[xdPuzRV3A]);
            xdPuzRV3A++;
        };
    };
}

