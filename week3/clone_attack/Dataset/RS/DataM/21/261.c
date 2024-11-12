const  double  MIN = (945.000001 - 945.0);

int main () {
    int n;
    int KWovciAB8L3w [(972 - 671)];
    int result [(951 - 650)];
    int i;
    int j;
    int t;
    double  D1T5s20kRHIn = (344 - 344), itxF9f;
    double  y;
    double  C8DXNtqLguj;
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
    y = -(359 - 358);
    result[(331 - 331)] = -(244 - 243);
    cin >> n;
    {
        i = 649 - 649;
        while (n > i) {
            cin >> KWovciAB8L3w[i];
            D1T5s20kRHIn += KWovciAB8L3w[i];
            i = i + 1;
        };
    }
    itxF9f = D1T5s20kRHIn / n;
    {
        i = 92 - 92;
        while (i < n - (947 - 946)) {
            {
                j = 358 - 357;
                while (j < n) {
                    if (KWovciAB8L3w[i] > KWovciAB8L3w[j]) {
                        t = KWovciAB8L3w[i];
                        KWovciAB8L3w[i] = KWovciAB8L3w[j];
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
                        KWovciAB8L3w[j] = t;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 271 - 271;
        while (i < n) {
            C8DXNtqLguj = KWovciAB8L3w[i] - itxF9f;
            i++;
            if ((994 - 994) > C8DXNtqLguj)
                C8DXNtqLguj = -C8DXNtqLguj;
            if (y < C8DXNtqLguj)
                y = C8DXNtqLguj;
        };
    }
    t = (200 - 200);
    {
        i = 126 - 126;
        while (i < n) {
            if ((KWovciAB8L3w[i] - itxF9f - y < MIN &&KWovciAB8L3w[i] - itxF9f - y > -MIN) || (KWovciAB8L3w[i] - itxF9f + y < MIN &&KWovciAB8L3w[i] - itxF9f + y > -MIN)) {
                if (KWovciAB8L3w[i] != result[t])
                    result[t++] = KWovciAB8L3w[i];
            }
            i++;
        };
    }
    {
        i = 272 - 272;
        while (i < t) {
            cout << result[i];
            if (i < t - (958 - 957))
                cout << ",";
            i++;
        };
    }
    return 0;
}

