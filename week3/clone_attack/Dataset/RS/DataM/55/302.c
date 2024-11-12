int main () {
    char dlj8zcsR3M [100];
    int NVFtaf;
    int sCrZxDdwlpT;
    int v1F4rk;
    NVFtaf = (957 - 957);
    int TiFvXBC8Q;
    int QugPWla;
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
    cin >> TiFvXBC8Q >> dlj8zcsR3M >> QugPWla;
    sCrZxDdwlpT = strlen (dlj8zcsR3M);
    {
        v1F4rk = 583 - 583;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (v1F4rk <= sCrZxDdwlpT - 1) {
            if ((dlj8zcsR3M[v1F4rk] >= 'A') && ('Z' >= dlj8zcsR3M[v1F4rk]))
                dlj8zcsR3M[v1F4rk] = dlj8zcsR3M[v1F4rk] - 'A' + 10;
            else if (('a' <= dlj8zcsR3M[v1F4rk]) && (dlj8zcsR3M[v1F4rk] <= 'z'))
                dlj8zcsR3M[v1F4rk] = dlj8zcsR3M[v1F4rk] - 'a' + 10;
            else if (('0' <= dlj8zcsR3M[v1F4rk]) && ('9' >= dlj8zcsR3M[v1F4rk]))
                dlj8zcsR3M[v1F4rk] = dlj8zcsR3M[v1F4rk] - '0';
            v1F4rk = v1F4rk + 1;
        };
    }
    for (v1F4rk = 0; v1F4rk <= sCrZxDdwlpT - 1; v1F4rk++) {
        NVFtaf = (int) NVFtaf +dlj8zcsR3M[v1F4rk] * pow ((double ) TiFvXBC8Q, sCrZxDdwlpT - v1F4rk - 1);
    }
    if (NVFtaf == 0)
        cout << NVFtaf;
    if (NVFtaf != 0) {
        int ndaJLqBUVwc7 [100];
        int x6esh7;
        {
            v1F4rk = 0;
            while (NVFtaf != 0) {
                ndaJLqBUVwc7[v1F4rk] = NVFtaf % QugPWla;
                v1F4rk++;
                NVFtaf = NVFtaf / QugPWla;
            };
        }
        for (x6esh7 = v1F4rk - 1; x6esh7 >= 0; x6esh7 = x6esh7 - 1) {
            if ((0 <= ndaJLqBUVwc7[x6esh7]) && (ndaJLqBUVwc7[x6esh7] <= 9))
                cout << ndaJLqBUVwc7[x6esh7];
            else {
                if (ndaJLqBUVwc7[x6esh7] >= 10) {
                    mWKQZJuhH1 (ndaJLqBUVwc7 [x6esh7]);
                    ndaJLqBUVwc7[x6esh7] = ndaJLqBUVwc7[x6esh7] + 'A' - 10;
                };
            };
        };
    }
    cout << endl;
    return 0;
}

