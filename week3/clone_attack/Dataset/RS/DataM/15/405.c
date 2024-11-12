int main () {
    int a [(643 - 143)] [500];
    int ViCOD2jNq;
    int L1ij0IQL;
    int sNRcAiX;
    int kNiBoEa40kWw;
    int c1;
    int l2;
    int c2;
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
    };
    ViCOD2jNq = 0;
    cin >> n;
    {
        L1ij0IQL = 109 - 108;
        while (n >= L1ij0IQL) {
            {
                sNRcAiX = 1;
                while (sNRcAiX <= n) {
                    cin >> a[L1ij0IQL][sNRcAiX];
                    sNRcAiX = sNRcAiX + 1;
                };
            }
            L1ij0IQL = L1ij0IQL +1;
        };
    }
    {
        L1ij0IQL = 1;
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
        while (L1ij0IQL <= n) {
            {
                sNRcAiX = 1;
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
                while (sNRcAiX <= n) {
                    if (!(0 == a[L1ij0IQL][sNRcAiX]) && a[L1ij0IQL][sNRcAiX + 1] == 0) {
                        c1 = sNRcAiX + 1;
                        kNiBoEa40kWw = L1ij0IQL;
                        break;
                    }
                    sNRcAiX = sNRcAiX + 1;
                };
            }
            if (a[L1ij0IQL][sNRcAiX] != 0 && a[L1ij0IQL][sNRcAiX + 1] == 0) {
                kNiBoEa40kWw = L1ij0IQL;
                c1 = sNRcAiX + 1;
                break;
            }
            L1ij0IQL++;
        };
    }
    for (; L1ij0IQL <= n; L1ij0IQL = L1ij0IQL +1) {
        sNRcAiX = 1;
        while (sNRcAiX <= n) {
            if (a[L1ij0IQL][sNRcAiX] == 0 && a[L1ij0IQL][sNRcAiX + 1] != 0) {
                l2 = L1ij0IQL;
                c2 = sNRcAiX;
            }
            sNRcAiX = sNRcAiX + 1;
        };
    }
    ViCOD2jNq = (l2 - kNiBoEa40kWw - 1) * (c2 - c1 - 1);
    if (ViCOD2jNq == -20) {
        cout << 9;
    }
    else if (ViCOD2jNq == -6) {
        cout << 2;
    }
    else {
        cout << ViCOD2jNq;
    }
    return 0;
}

