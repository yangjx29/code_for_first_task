int main () {
    int RO26iAearuH, n, bbBtPw;
    int b4ytJj7d, o360s7WFUCT, brk = 0;
    cin >> n >> bbBtPw;
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
        b4ytJj7d = n + bbBtPw;
        while (1) {
            RO26iAearuH = b4ytJj7d;
            {
                o360s7WFUCT = 0;
                while (o360s7WFUCT < n) {
                    if (RO26iAearuH % n != bbBtPw) {
                        brk = 1;
                        break;
                    }
                    o360s7WFUCT = o360s7WFUCT + 1;
                    RO26iAearuH = RO26iAearuH -bbBtPw - RO26iAearuH / n;
                };
            }
            if (!brk && RO26iAearuH > 0)
                break;
            b4ytJj7d += n;
            brk = 0;
        };
    }
    cout << b4ytJj7d;
    return 0;
}

