int main () {
    int HuYxoIv, n, jrpztf, k = 0, WKwpeqaCO8c, opPtcsR [500] = {0}, b [500];
    cin >> n;
    {
        HuYxoIv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HuYxoIv < 500) {
            b[HuYxoIv] = 10000000;
            HuYxoIv = HuYxoIv +1;
        };
    }
    for (HuYxoIv = 0; n > HuYxoIv; HuYxoIv = HuYxoIv +1) {
        cin >> opPtcsR[HuYxoIv];
    }
    for (jrpztf = 0; jrpztf < n; jrpztf = jrpztf + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (opPtcsR[jrpztf] % 2 == 1) {
            b[k] = opPtcsR[jrpztf];
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
            k++;
        };
    }
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
    for (HuYxoIv = 0; HuYxoIv < n - 1; HuYxoIv = HuYxoIv +1)
        for (jrpztf = 0; jrpztf < n - HuYxoIv -1; jrpztf++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (b[jrpztf] > b[jrpztf + 1]) {
                WKwpeqaCO8c = b[jrpztf];
                b[jrpztf] = b[jrpztf + 1];
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
                b[jrpztf + 1] = WKwpeqaCO8c;
            };
        }
    {
        HuYxoIv = 0;
        while (HuYxoIv < k - 1) {
            cout << b[HuYxoIv] << ",";
            HuYxoIv = HuYxoIv +1;
        };
    }
    cout << b[k - 1];
    return 0;
}

