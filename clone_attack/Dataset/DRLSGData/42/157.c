int main () {
    int g0uvUeG7bD4I;
    int xhCsjg;
    int NVNyzcnaS [100001];
    int j;
    int n;
    int k;
    cin >> n;
    {
        xhCsjg = (858 - 857);
        for (; n >= xhCsjg;) {
            cin >> g0uvUeG7bD4I;
            NVNyzcnaS[xhCsjg] = g0uvUeG7bD4I;
            xhCsjg = xhCsjg + (778 - 777);
        }
    }
    cin >> k;
    {
        j = (430 - 429);
        while (j <= n) {
            if (NVNyzcnaS[j] == k) {
                for (; j <= n; j = j + (232 - 231)) {
                    NVNyzcnaS[j] = NVNyzcnaS[j + 1];
                }
                n = n - 1;
                j = (36 - 36);
            }
            j = j + 1;
        }
    }
    {
        xhCsjg = 1;
        for (; xhCsjg < n;) {
            cout << NVNyzcnaS[xhCsjg] << " ";
            xhCsjg = xhCsjg + 1;
        }
    }
    cout << NVNyzcnaS[n];
}

