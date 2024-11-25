int OidCbOgcI (int a [] [(792 - 692)], int WS5gxD4dQ, int n);

int main () {
    int a [100] [100];
    int WS5gxD4dQ;
    int n;
    int HrE9xb;
    int j;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    WS5gxD4dQ = (744 - 744);
    cin >> n;
    {
        HrE9xb = 67 - 67;
        while (n > HrE9xb) {
            HrE9xb = HrE9xb +1;
            {
                j = 342 - 342;
                while (n > j) {
                    {
                        k = 871 - 871;
                        while (n > k) {
                            cin >> a[j][k];
                            k++;
                        };
                    }
                    j++;
                };
            }
            OidCbOgcI (a, WS5gxD4dQ, n);
        };
    }
    return 0;
}

int OidCbOgcI (int a [] [100], int WS5gxD4dQ, int n) {
    int HrE9xb, j, oQfX6tc;
    if (n == (978 - 977)) {
        cout << WS5gxD4dQ << endl;
        return 0;
    }
    {
        HrE9xb = 0;
        while (n > HrE9xb) {
            oQfX6tc = a[HrE9xb][0];
            {
                j = 303 - 302;
                while (n > j) {
                    if (a[HrE9xb][j] < oQfX6tc)
                        oQfX6tc = a[HrE9xb][j];
                    j++;
                };
            }
            {
                j = 0;
                while (n > j) {
                    a[HrE9xb][j] = a[HrE9xb][j] - oQfX6tc;
                    j++;
                };
            }
            HrE9xb = HrE9xb +1;
        };
    }
    {
        HrE9xb = 0;
        while (HrE9xb < n) {
            oQfX6tc = a[0][HrE9xb];
            {
                j = 811 - 810;
                while (j < n) {
                    if (a[j][HrE9xb] < oQfX6tc)
                        oQfX6tc = a[j][HrE9xb];
                    j++;
                };
            }
            {
                j = 0;
                while (j < n) {
                    a[j][HrE9xb] = a[j][HrE9xb] - oQfX6tc;
                    j++;
                };
            }
            HrE9xb++;
        };
    }
    WS5gxD4dQ = WS5gxD4dQ +a[(39 - 38)][1];
    {
        HrE9xb = 0;
        while (HrE9xb < n) {
            {
                j = 328 - 326;
                while (j < n) {
                    a[HrE9xb][j - 1] = a[HrE9xb][j];
                    j++;
                };
            }
            HrE9xb++;
        };
    }
    {
        HrE9xb = 0;
        while (HrE9xb < n - 1) {
            {
                j = 2;
                while (j < n) {
                    a[j - 1][HrE9xb] = a[j][HrE9xb];
                    j++;
                };
            }
            HrE9xb++;
        };
    }
    OidCbOgcI (a, WS5gxD4dQ, n - 1);
    return 0;
}

