main () {
    float b, J8wR532sKn67, grCFVzK8;
    int S7jhgET8f [2] [9], n, rof7ITrc4S, asyExFd9YW, d;
    d = 0;
    grCFVzK8 = 0;
    scanf ("%d", &n);
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
        rof7ITrc4S = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (2 > rof7ITrc4S) {
            {
                asyExFd9YW = 0;
                while (n > asyExFd9YW) {
                    scanf ("%d", &S7jhgET8f[rof7ITrc4S][asyExFd9YW]);
                    asyExFd9YW = asyExFd9YW + 1;
                };
            }
            rof7ITrc4S++;
        };
    }
    {
        asyExFd9YW = 0;
        while (n > asyExFd9YW) {
            if (90 <= S7jhgET8f[(118 - 117)][asyExFd9YW] && 100 >= S7jhgET8f[1][asyExFd9YW])
                b = 4.0;
            if (85 <= S7jhgET8f[1][asyExFd9YW] && 89 >= S7jhgET8f[1][asyExFd9YW])
                b = 3.7;
            if (82 <= S7jhgET8f[1][asyExFd9YW] && 84 >= S7jhgET8f[1][asyExFd9YW])
                b = 3.3;
            if (78 <= S7jhgET8f[1][asyExFd9YW] && 81 >= S7jhgET8f[1][asyExFd9YW])
                b = 3.0;
            if (75 <= S7jhgET8f[1][asyExFd9YW] && S7jhgET8f[1][asyExFd9YW] <= 77)
                b = 2.7;
            if (S7jhgET8f[1][asyExFd9YW] >= 72 && S7jhgET8f[1][asyExFd9YW] <= 74)
                b = 2.3;
            if (S7jhgET8f[1][asyExFd9YW] >= 68 && S7jhgET8f[1][asyExFd9YW] <= 71)
                b = 2.0;
            if (S7jhgET8f[1][asyExFd9YW] >= 64 && S7jhgET8f[1][asyExFd9YW] <= 67)
                b = 1.5;
            if (S7jhgET8f[1][asyExFd9YW] >= 60 && S7jhgET8f[1][asyExFd9YW] <= 63)
                b = 1.0;
            if (S7jhgET8f[1][asyExFd9YW] < 60)
                b = 0;
            grCFVzK8 = grCFVzK8 + S7jhgET8f[0][asyExFd9YW] * b;
            d = d + S7jhgET8f[0][asyExFd9YW];
            asyExFd9YW = asyExFd9YW + 1;
        };
    }
    J8wR532sKn67 = grCFVzK8 / d;
    printf ("%.2f\n", J8wR532sKn67);
}

