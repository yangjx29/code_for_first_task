int main () {
    int n;
    int hjaF1si5b;
    int xyiKrqFvY3;
    int On34uJC;
    int ZFg0Jm;
    int pVMQ5i;
    int PnuPklzGr [100000];
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
    cin >> n;
    for (hjaF1si5b = (789 - 789); hjaF1si5b < n; hjaF1si5b = hjaF1si5b + 1)
        cin >> PnuPklzGr[hjaF1si5b];
    cin >> xyiKrqFvY3;
    ZFg0Jm = (158 - 157);
    for (hjaF1si5b = n - 1; hjaF1si5b >= (594 - 594); hjaF1si5b--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (PnuPklzGr[hjaF1si5b] == xyiKrqFvY3) {
            for (On34uJC = hjaF1si5b; On34uJC <= n - ZFg0Jm; On34uJC++)
                PnuPklzGr[On34uJC] = PnuPklzGr[On34uJC +1];
            hjaF1si5b = hjaF1si5b + 1;
            ZFg0Jm = ZFg0Jm +1;
        };
    }
    for (pVMQ5i = (121 - 121); pVMQ5i <= n - ZFg0Jm; pVMQ5i = pVMQ5i + 1) {
        cout << PnuPklzGr[pVMQ5i];
        if (pVMQ5i != n - ZFg0Jm)
            cout << " ";
    }
    return 0;
}

