int main () {
    int a [100] [100];
    int n;
    cin >> n;
    {
        int k;
        k = 0;
        while (n > k) {
            int Ug5eMmQZowT;
            Ug5eMmQZowT = 0;
            {
                int dobDTs = 0;
                while (dobDTs < n) {
                    {
                        int j = 0;
                        while (n > j) {
                            cin >> a[dobDTs][j];
                            j = j + 1;
                        };
                    }
                    dobDTs = dobDTs + 1;
                };
            }
            {
                int tkndAu3q = 0;
                while (n - 1 > tkndAu3q) {
                    {
                        int dobDTs = 0;
                        while (dobDTs < n) {
                            int ehoXEnRKG35 = a[dobDTs][0];
                            if (!(0 == dobDTs) && tkndAu3q >= dobDTs)
                                continue;
                            {
                                int j = tkndAu3q + 1;
                                while (j < n) {
                                    if (a[dobDTs][j] < ehoXEnRKG35)
                                        ehoXEnRKG35 = a[dobDTs][j];
                                    ++j;
                                };
                            }
                            a[dobDTs][0] = a[dobDTs][0] - ehoXEnRKG35;
                            for (int j = tkndAu3q + 1;
                            j < n; ++j)
                                a[dobDTs][j] = a[dobDTs][j] - ehoXEnRKG35;
                            ++dobDTs;
                        };
                    }
                    {
                        int j = 0;
                        while (j < n) {
                            int ehoXEnRKG35 = a[0][j];
                            if (!(0 == j) && j <= tkndAu3q)
                                continue;
                            {
                                int dobDTs = tkndAu3q + 1;
                                while (dobDTs < n) {
                                    if (a[dobDTs][j] < ehoXEnRKG35)
                                        ehoXEnRKG35 = a[dobDTs][j];
                                    ++dobDTs;
                                };
                            }
                            a[0][j] -= ehoXEnRKG35;
                            {
                                int dobDTs = tkndAu3q + 1;
                                while (dobDTs < n) {
                                    a[dobDTs][j] = a[dobDTs][j] - ehoXEnRKG35;
                                    ++dobDTs;
                                };
                            }
                            ++j;
                        };
                    }
                    Ug5eMmQZowT = Ug5eMmQZowT +a[tkndAu3q + 1][tkndAu3q + 1];
                    ++tkndAu3q;
                };
            }
            ++k;
            cout << Ug5eMmQZowT << endl;
        };
    };
}

