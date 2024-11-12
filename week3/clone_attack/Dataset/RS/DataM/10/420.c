int k, RgHxcfEz4 [25], h [25];

int main () {
    int i;
    int EtdN5ucM;
    int tXdPg2c7p;
    tXdPg2c7p = 0;
    cin >> k;
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
    for (i = 0; i < k; i++)
        cin >> h[i];
    memset (RgHxcfEz4, sizeof (RgHxcfEz4), 0);
    {
        i = 0;
        while (i < k) {
            tXdPg2c7p = 0;
            for (EtdN5ucM = 0; EtdN5ucM < i; EtdN5ucM++) {
                if (h[EtdN5ucM] >= h[i]) {
                    if (RgHxcfEz4[EtdN5ucM] > tXdPg2c7p)
                        tXdPg2c7p = RgHxcfEz4[EtdN5ucM];
                };
            }
            RgHxcfEz4[i] = 1 + tXdPg2c7p;
            i = i + 1;
        };
    }
    tXdPg2c7p = 0;
    for (i = 0; i < k; i++) {
        if (RgHxcfEz4[i] > tXdPg2c7p)
            tXdPg2c7p = RgHxcfEz4[i];
    }
    cout << tXdPg2c7p << endl;
    return 0;
}

