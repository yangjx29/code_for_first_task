int JXaVucJ1SZ (int, int, int);

int main () {
    int t;
    int aGarCwF4;
    int aF4NdjisLxqA;
    int i;
    int s;
    cin >> t;
    for (i = 1; t >= i; i = i + 1) {
        cin >> aF4NdjisLxqA >> aGarCwF4;
        if (aF4NdjisLxqA < aGarCwF4)
            aGarCwF4 = aF4NdjisLxqA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = JXaVucJ1SZ (aF4NdjisLxqA, aGarCwF4, 0);
        cout << s << endl;
    }
    return 0;
}

int JXaVucJ1SZ (int IxY6N9X1ByHk, int esHG7xpz, int NiqMLs) {
    int gDa64d5gAjOP;
    int NpJeKtH8;
    gDa64d5gAjOP = 0;
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
    if (esHG7xpz == 1)
        return IxY6N9X1ByHk >= NiqMLs;
    {
        NpJeKtH8 = NiqMLs;
        while (NpJeKtH8 < IxY6N9X1ByHk) {
            gDa64d5gAjOP = gDa64d5gAjOP + JXaVucJ1SZ (IxY6N9X1ByHk -NpJeKtH8, esHG7xpz - 1, NpJeKtH8);
            NpJeKtH8++;
        };
    }
    return (gDa64d5gAjOP);
}

