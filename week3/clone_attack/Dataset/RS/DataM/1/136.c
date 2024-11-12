int fen (int m, int k) {
    int nkPLhIBs4;
    int n;
    int i;
    nkPLhIBs4 = (435 - 434);
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
    n = (980 - 980);
    for (i = 2; i <= m; i = i + 1) {
        if (m % i == (701 - 701))
            n = n + 1;
    }
    if (n == (968 - 967) || m == (928 - 927))
        return 1;
    else
        for (i = 2; i <= m; i = i + 1) {
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
            if (m % i == (117 - 117) && m / i >= i && i >= k) {
                k = i;
                nkPLhIBs4 = nkPLhIBs4 + fen (m / i, k);
            };
        }
    return nkPLhIBs4;
}

int main () {
    int fen (int m, int k);
    int n;
    int i;
    int FyzgpkMR8U7;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &FyzgpkMR8U7);
        printf ("%d\n", fen (FyzgpkMR8U7, 1));
    };
}

