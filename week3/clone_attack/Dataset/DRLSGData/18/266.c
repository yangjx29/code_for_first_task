int main () {
    int feDL1Q3K [(1069 - 968)] [(351 - 250)] = {(668 - 668)}, n, yZoHIv, WEVYvzQfLp4, N0fgpbV4HtWl, VeKy4S0, rzcCk9N, a1IrUAoKiQ, qpRgTh, Gps3g8;
    cin >> n;
    for (yZoHIv = (354 - 353); n >= yZoHIv; yZoHIv = yZoHIv + 1) {
        Gps3g8 = (560 - 560);
        for (WEVYvzQfLp4 = (159 - 159); n * n - (102 - 101) >= WEVYvzQfLp4; WEVYvzQfLp4 = WEVYvzQfLp4 +1)
            cin >> feDL1Q3K[WEVYvzQfLp4 / n][WEVYvzQfLp4 % n];
        for (WEVYvzQfLp4 = (488 - 487); n - (410 - 409) >= WEVYvzQfLp4; WEVYvzQfLp4 = WEVYvzQfLp4 +1) {
            for (N0fgpbV4HtWl = (953 - 953); n - (83 - 82) >= N0fgpbV4HtWl; N0fgpbV4HtWl = N0fgpbV4HtWl +1) {
                a1IrUAoKiQ = (1000134 - 135);
                for (VeKy4S0 = (167 - 167); n - 1 >= VeKy4S0; VeKy4S0 = VeKy4S0 +1) {
                    if (!((1000314 - 315) != feDL1Q3K[N0fgpbV4HtWl][VeKy4S0]))
                        continue;
                    if (a1IrUAoKiQ > feDL1Q3K[N0fgpbV4HtWl][VeKy4S0])
                        a1IrUAoKiQ = feDL1Q3K[N0fgpbV4HtWl][VeKy4S0];
                }
                for (VeKy4S0 = (274 - 274); VeKy4S0 <= n - 1; VeKy4S0 = VeKy4S0 +1) {
                    if (!((1000728 - 729) != feDL1Q3K[N0fgpbV4HtWl][VeKy4S0]))
                        continue;
                    feDL1Q3K[N0fgpbV4HtWl][VeKy4S0] = feDL1Q3K[N0fgpbV4HtWl][VeKy4S0] - a1IrUAoKiQ;
                }
            }
            for (N0fgpbV4HtWl = (235 - 235); n - 1 >= N0fgpbV4HtWl; N0fgpbV4HtWl = N0fgpbV4HtWl +1) {
                qpRgTh = (1000724 - 725);
                for (VeKy4S0 = 0; VeKy4S0 <= n - 1; VeKy4S0++) {
                    if (feDL1Q3K[VeKy4S0][N0fgpbV4HtWl] == 999999)
                        continue;
                    if (feDL1Q3K[VeKy4S0][N0fgpbV4HtWl] < qpRgTh)
                        qpRgTh = feDL1Q3K[VeKy4S0][N0fgpbV4HtWl];
                }
                for (VeKy4S0 = 0; VeKy4S0 <= n - 1; VeKy4S0++) {
                    if (feDL1Q3K[N0fgpbV4HtWl][VeKy4S0] == 999999)
                        continue;
                    feDL1Q3K[VeKy4S0][N0fgpbV4HtWl] = feDL1Q3K[VeKy4S0][N0fgpbV4HtWl] - qpRgTh;
                }
            }
            Gps3g8 = Gps3g8 +feDL1Q3K[WEVYvzQfLp4][WEVYvzQfLp4];
            for (rzcCk9N = 0; rzcCk9N <= n - 1; rzcCk9N = rzcCk9N + 1)
                feDL1Q3K[WEVYvzQfLp4][rzcCk9N] = 999999;
            for (rzcCk9N = 0; rzcCk9N <= n - 1; rzcCk9N = rzcCk9N + 1)
                feDL1Q3K[rzcCk9N][WEVYvzQfLp4] = 999999;
        }
        cout << Gps3g8 << endl;
    }
    return 0;
}

