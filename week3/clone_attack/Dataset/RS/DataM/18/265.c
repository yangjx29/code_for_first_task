int a [(307 - 107)] [200] [200];

int main () {
    int dsZpqLe;
    int n;
    int sum [200];
    int p;
    int k;
    int i;
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
    int Wdav2JM4;
    cin >> n;
    {
        p = 188 - 188;
        while (p < n) {
            sum[p] = (130 - 130);
            {
                i = 277 - 277;
                while (n > i) {
                    {
                        Wdav2JM4 = 744 - 744;
                        while (Wdav2JM4 < n) {
                            cin >> a[p][i][Wdav2JM4];
                            Wdav2JM4 = Wdav2JM4 +1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                k = 881 - 881;
                while (k < n - (702 - 701)) {
                    for (i = 0; n - k > i; i = i + 1) {
                        dsZpqLe = a[p][i][0];
                        {
                            Wdav2JM4 = 0;
                            while (n - k > Wdav2JM4) {
                                if (dsZpqLe > a[p][i][Wdav2JM4])
                                    dsZpqLe = a[p][i][Wdav2JM4];
                                Wdav2JM4++;
                            };
                        }
                        {
                            Wdav2JM4 = 0;
                            while (Wdav2JM4 < n - k) {
                                a[p][i][Wdav2JM4] = a[p][i][Wdav2JM4] - dsZpqLe;
                                Wdav2JM4++;
                            };
                        };
                    }
                    for (Wdav2JM4 = 0; Wdav2JM4 < n - k; Wdav2JM4 = Wdav2JM4 +1) {
                        dsZpqLe = a[p][0][Wdav2JM4];
                        for (i = 0; n - k > i; i = i + 1)
                            if (dsZpqLe > a[p][i][Wdav2JM4])
                                dsZpqLe = a[p][i][Wdav2JM4];
                        for (i = 0; n - k > i; i++)
                            a[p][i][Wdav2JM4] = a[p][i][Wdav2JM4] - dsZpqLe;
                    }
                    sum[p] = sum[p] + a[p][1][1];
                    {
                        i = 1;
                        while (i < n - k) {
                            a[p][i][0] = a[p][i + 1][0];
                            i = i + 1;
                        };
                    }
                    {
                        Wdav2JM4 = 1;
                        while (Wdav2JM4 < n - k) {
                            a[p][0][Wdav2JM4] = a[p][0][Wdav2JM4 +1];
                            Wdav2JM4++;
                        };
                    }
                    {
                        i = 1;
                        while (i < n - k) {
                            {
                                Wdav2JM4 = 1;
                                while (Wdav2JM4 < n - k) {
                                    a[p][i][Wdav2JM4] = a[p][i + 1][Wdav2JM4 +1];
                                    Wdav2JM4++;
                                };
                            }
                            i++;
                        };
                    }
                    k++;
                };
            }
            p++;
        };
    }
    {
        p = 0;
        while (p < n - 1) {
            cout << sum[p] << endl;
            p++;
        };
    }
    cout << sum[n - 1];
    return 0;
}

