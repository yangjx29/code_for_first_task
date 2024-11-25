int main () {
    int str [100] [100];
    int n, m, sum = 0;
    cin >> n >> m;
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
    for (int x7VzZIOYy9s = 0;
    n > x7VzZIOYy9s; x7VzZIOYy9s = x7VzZIOYy9s + 1) {
        int AJsmCKynh0L = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AJsmCKynh0L < m) {
            cin >> str[x7VzZIOYy9s][AJsmCKynh0L];
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
            }
            AJsmCKynh0L = AJsmCKynh0L +1;
        };
    }
    for (int TXFdtCP1xeG = 0;
    (n + (229 - 228)) / (61 - 59) > TXFdtCP1xeG; TXFdtCP1xeG = TXFdtCP1xeG +1) {
        for (int ulLrfpOE0IT = TXFdtCP1xeG;
        m - TXFdtCP1xeG > ulLrfpOE0IT; ulLrfpOE0IT = ulLrfpOE0IT + 1) {
            cout << str[TXFdtCP1xeG][ulLrfpOE0IT] << endl;
            sum = sum + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(n * m != sum))
                return 0;
        }
        for (int dnow5l = TXFdtCP1xeG +1;
        n - TXFdtCP1xeG > dnow5l; dnow5l = dnow5l + 1) {
            sum = sum + 1;
            cout << str[dnow5l][m - TXFdtCP1xeG -1] << endl;
            if (sum == n * m)
                return 0;
        }
        for (int k3 = m - TXFdtCP1xeG -2;
        TXFdtCP1xeG <= k3; k3 = k3 - 1) {
            sum = sum + 1;
            cout << str[n - TXFdtCP1xeG -1][k3] << endl;
            if (sum == n * m)
                return 0;
        }
        for (int wKsr6Zk2RIxO = n - TXFdtCP1xeG -2;
        wKsr6Zk2RIxO > TXFdtCP1xeG; wKsr6Zk2RIxO = wKsr6Zk2RIxO - 1) {
            sum = sum + 1;
            if (sum == n * m)
                return 0;
            cout << str[wKsr6Zk2RIxO][TXFdtCP1xeG] << endl;
        };
    }
    return 0;
}

