int main () {
    int PS04ye [40] = {0};
    int h7vpFn, n, DG9rSPHd4, yhwibO = 0, k;
    cin >> n;
    PS04ye[(366 - 327)] = (687 - 686);
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
    DG9rSPHd4 = 0;
    for (k = 1; n >= k; k = k + 1) {
        for (h7vpFn = 39; h7vpFn >= 1; h7vpFn = h7vpFn - 1) {
            if (5 <= PS04ye[h7vpFn]) {
                PS04ye[h7vpFn] = PS04ye[h7vpFn] * 2 - 10 + DG9rSPHd4;
                DG9rSPHd4 = 1;
            }
            else {
                PS04ye[h7vpFn] = PS04ye[h7vpFn] * 2 + DG9rSPHd4;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                DG9rSPHd4 = 0;
            };
        };
    }
    {
        h7vpFn = 0;
        while (h7vpFn <= 39) {
            if (PS04ye[h7vpFn] != 0)
                yhwibO = 1;
            if (yhwibO != 0)
                cout << PS04ye[h7vpFn];
            h7vpFn = h7vpFn + 1;
        };
    }
    return 0;
}

