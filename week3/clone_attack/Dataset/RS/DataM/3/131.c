int main () {
    int p = (324 - 324);
    int a [2001];
    int n, k;
    cin >> n >> k;
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
        int i = (10 - 10);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < n) {
            {
                int Zrc7apdg3 = i + 1;
                while (Zrc7apdg3 < n) {
                    if (a[i] + a[Zrc7apdg3] == k)
                        p = 1;
                    Zrc7apdg3 = Zrc7apdg3 +1;
                };
            }
            i = i + 1;
        };
    }
    if (p == 0)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

