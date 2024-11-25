int main () {
    int aG2msuJ;
    int a [(582 - 482)] [100];
    int iw1TjeuKh0 = (321 - 321);
    int n;
    int FlS8tTVf1G0Y;
    int j;
    int CFJ0Wn1sMuG;
    int D3fhTsz = (597 - 597);
    cin >> n;
    {
        CFJ0Wn1sMuG = 576 - 576;
        while (CFJ0Wn1sMuG < n) {
            CFJ0Wn1sMuG++;
            D3fhTsz = 0;
            {
                FlS8tTVf1G0Y = 0;
                while (FlS8tTVf1G0Y < n - D3fhTsz) {
                    {
                        j = 0;
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
                        while (j < n - D3fhTsz) {
                            cin >> a[FlS8tTVf1G0Y][j];
                            j++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    FlS8tTVf1G0Y++;
                };
            }
            iw1TjeuKh0 = 0;
            while (D3fhTsz < n - (840 - 839)) {
                {
                    FlS8tTVf1G0Y = 0;
                    while (FlS8tTVf1G0Y < n - D3fhTsz) {
                        aG2msuJ = a[FlS8tTVf1G0Y][0];
                        {
                            j = 0;
                            while (j < n - D3fhTsz) {
                                if (a[FlS8tTVf1G0Y][j] < aG2msuJ)
                                    aG2msuJ = a[FlS8tTVf1G0Y][j];
                                j++;
                            };
                        }
                        for (j = 0; j < n - D3fhTsz; j++)
                            a[FlS8tTVf1G0Y][j] = a[FlS8tTVf1G0Y][j] - aG2msuJ;
                        FlS8tTVf1G0Y++;
                    };
                }
                {
                    j = 0;
                    while (j < n - D3fhTsz) {
                        aG2msuJ = a[0][j];
                        {
                            FlS8tTVf1G0Y = 0;
                            while (FlS8tTVf1G0Y < n - D3fhTsz) {
                                if (a[FlS8tTVf1G0Y][j] < aG2msuJ)
                                    aG2msuJ = a[FlS8tTVf1G0Y][j];
                                FlS8tTVf1G0Y++;
                            };
                        }
                        {
                            FlS8tTVf1G0Y = 0;
                            while (FlS8tTVf1G0Y < n - D3fhTsz) {
                                a[FlS8tTVf1G0Y][j] = a[FlS8tTVf1G0Y][j] - aG2msuJ;
                                FlS8tTVf1G0Y++;
                            };
                        }
                        j++;
                    };
                }
                iw1TjeuKh0 = iw1TjeuKh0 + a[(979 - 978)][(872 - 871)];
                for (FlS8tTVf1G0Y = 1; FlS8tTVf1G0Y < n - 1 - D3fhTsz; FlS8tTVf1G0Y++) {
                    j = 0;
                    while (j < n - D3fhTsz) {
                        a[FlS8tTVf1G0Y][j] = a[FlS8tTVf1G0Y +1][j];
                        j++;
                    };
                }
                {
                    j = 1;
                    while (j < n - 1 - D3fhTsz) {
                        {
                            FlS8tTVf1G0Y = 0;
                            while (FlS8tTVf1G0Y < n - D3fhTsz) {
                                a[FlS8tTVf1G0Y][j] = a[FlS8tTVf1G0Y][j + 1];
                                FlS8tTVf1G0Y++;
                            };
                        }
                        j++;
                    };
                }
                D3fhTsz++;
            }
            cout << iw1TjeuKh0 << endl;
        };
    }
    return 0;
}

