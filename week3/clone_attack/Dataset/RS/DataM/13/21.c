int main () {
    int n;
    int i;
    int ymfjKPQ4qiDU;
    int WcJyTP;
    int m;
    int a [20000];
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
        i = 0;
        while (n > i) {
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
    {
        ymfjKPQ4qiDU = 0;
        while (n > ymfjKPQ4qiDU) {
            {
                WcJyTP = 289 - 288;
                while (WcJyTP < n) {
                    if (!(a[WcJyTP] != a[ymfjKPQ4qiDU])) {
                        WcJyTP -= 1;
                        {
                            m = WcJyTP +1;
                            while (n > m) {
                                a[m - 1] = a[m];
                                m++;
                            };
                        }
                        n = n - 1;
                    }
                    WcJyTP = WcJyTP +1;
                };
            }
            ymfjKPQ4qiDU = ymfjKPQ4qiDU + 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            cout << a[i] << " ";
            i++;
        };
    }
    cout << a[n - 1];
    return 0;
}

