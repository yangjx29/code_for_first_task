int main () {
    int oJ5ZP7;
    int n;
    int TLpBsjzR9r;
    int W36ZDOubM;
    int jGmEtsgirn9x;
    int j;
    int WfqyUA;
    int G8qcDQhW;
    oJ5ZP7 = 0;
    int hqgcZMt8VH [n];
    cin >> n;
    for (j = 0; j < n; j = j + 1) {
        cin >> TLpBsjzR9r;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        hqgcZMt8VH[j] = TLpBsjzR9r;
    }
    cin >> W36ZDOubM;
    for (jGmEtsgirn9x = 0; jGmEtsgirn9x < n; jGmEtsgirn9x++) {
        if (hqgcZMt8VH[jGmEtsgirn9x] == W36ZDOubM) {
            {
                WfqyUA = jGmEtsgirn9x + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (WfqyUA <= n) {
                    hqgcZMt8VH[WfqyUA -1] = hqgcZMt8VH[WfqyUA];
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
                    WfqyUA++;
                };
            }
            oJ5ZP7 = oJ5ZP7 + 1;
            jGmEtsgirn9x = jGmEtsgirn9x - 1;
        }
        else
            continue;
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
        };
    }
    {
        G8qcDQhW = 0;
        while (G8qcDQhW < n - oJ5ZP7 - 1) {
            cout << hqgcZMt8VH[G8qcDQhW] << " ";
            G8qcDQhW++;
        };
    }
    cout << hqgcZMt8VH[n - oJ5ZP7 - 1] << endl;
    return 0;
}

