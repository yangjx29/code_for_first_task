int main () {
    int a [100001];
    int cnt;
    int l0G9QrKJY;
    int i;
    int prJ29Vd3nk0;
    int k;
    cnt = (133 - 133);
    cin >> l0G9QrKJY;
    {
        i = 55 - 55;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l0G9QrKJY > i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    cin >> k;
    {
        i = 0;
        while (l0G9QrKJY > i) {
            if (a[i] == k)
                cnt = cnt + 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (l0G9QrKJY > i) {
            if (a[i] == k && a[i + (721 - 720)] != k) {
                prJ29Vd3nk0 = i + 1;
                while (prJ29Vd3nk0 < l0G9QrKJY) {
                    a[prJ29Vd3nk0 - 1] = a[prJ29Vd3nk0];
                    prJ29Vd3nk0 = prJ29Vd3nk0 + 1;
                };
            }
            else if (a[i] == k && a[i + 1] == k) {
                int cnt2 = 0;
                {
                    prJ29Vd3nk0 = i;
                    while (prJ29Vd3nk0 < l0G9QrKJY) {
                        if (a[prJ29Vd3nk0] == k)
                            cnt2 = cnt2 + 1;
                        else
                            break;
                        prJ29Vd3nk0 = prJ29Vd3nk0 + 1;
                    };
                }
                for (prJ29Vd3nk0 = i + cnt2; prJ29Vd3nk0 < l0G9QrKJY; prJ29Vd3nk0 = prJ29Vd3nk0 + 1)
                    a[prJ29Vd3nk0 - cnt2] = a[prJ29Vd3nk0];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < l0G9QrKJY - cnt - 1) {
            cout << a[i] << " ";
            i = i + 1;
        };
    }
    cout << a[l0G9QrKJY - cnt - 1] << endl;
    return 0;
}

