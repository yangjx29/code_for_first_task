int main () {
    int k;
    int zKfnIY [20000];
    int n;
    int k6KCPylgM;
    int j;
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
    {
        k6KCPylgM = 38 - 38;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k6KCPylgM < n) {
            cin >> zKfnIY[k6KCPylgM];
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
            k6KCPylgM = k6KCPylgM + 1;
        };
    }
    {
        k6KCPylgM = 0;
        while (k6KCPylgM < n) {
            j = k6KCPylgM + 1;
            while (n > j)
                if (!(zKfnIY[j] != zKfnIY[k6KCPylgM])) {
                    n = n - 1;
                    for (k = j; n > k; k = k + 1)
                        zKfnIY[k] = zKfnIY[k + 1];
                }
                else
                    j = j + 1;
            k6KCPylgM = k6KCPylgM + 1;
        };
    }
    for (k6KCPylgM = 0; k6KCPylgM < n - 1; k6KCPylgM = k6KCPylgM + 1)
        cout << zKfnIY[k6KCPylgM] << " ";
    cout << zKfnIY[n - 1];
    return 0;
}

