int main () {
    int n;
    int m;
    int i;
    int wq3nB4;
    int wdcgNROH2V0B;
    int a [100000] = {0};
    cin >> n;
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
        i = 0;
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
            i++;
        };
    }
    cin >> m;
    i = 0;
    wq3nB4 = 0;
    while (i < n - wq3nB4) {
        if (a[i] == m) {
            wq3nB4 = wq3nB4 + 1;
            {
                wdcgNROH2V0B = i;
                while (wdcgNROH2V0B < n - wq3nB4) {
                    a[wdcgNROH2V0B] = a[wdcgNROH2V0B + 1];
                    wdcgNROH2V0B = wdcgNROH2V0B + 1;
                };
            };
        }
        else
            i++;
    }
    {
        i = 0;
        while (i < n - wq3nB4 - 1) {
            cout << a[i] << " ";
            i++;
        };
    }
    cout << a[n - wq3nB4 - 1] << endl;
    return 0;
}

