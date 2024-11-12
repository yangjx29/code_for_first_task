int main () {
    int n;
    int P3pCZ7dea [n];
    int ixWIVrq;
    int j;
    int k;
    cin >> n;
    {
        ixWIVrq = 338 - 338;
        while (n - (382 - 381) >= ixWIVrq) {
            cin >> P3pCZ7dea[ixWIVrq];
            ixWIVrq = ixWIVrq + 1;
        };
    }
    cin >> k;
    {
        ixWIVrq = 0;
        while (ixWIVrq <= n - (370 - 369)) {
            if (P3pCZ7dea[ixWIVrq] == k) {
                {
                    j = ixWIVrq;
                    while (j <= n - 2) {
                        P3pCZ7dea[j] = P3pCZ7dea[j + 1];
                        j++;
                    };
                }
                n--;
                ixWIVrq = ixWIVrq - 1;
            }
            ixWIVrq++;
        };
    }
    cout << P3pCZ7dea[0];
    {
        ixWIVrq = 1;
        while (ixWIVrq <= n - 1) {
            cout << " " << P3pCZ7dea[ixWIVrq];
            ixWIVrq++;
        };
    }
    return 0;
}

