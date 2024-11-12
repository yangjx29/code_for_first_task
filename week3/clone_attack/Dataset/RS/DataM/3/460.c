int main () {
    int flag;
    int WCANyM2dzQ;
    int k;
    int i;
    int emJzSvZpoe;
    flag = 0;
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
    int a [(1534 - 533)];
    cin >> WCANyM2dzQ >> k;
    {
        i = 574 - 573;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= WCANyM2dzQ) {
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (WCANyM2dzQ -1 >= i) {
            {
                emJzSvZpoe = i + 1;
                while (WCANyM2dzQ >= emJzSvZpoe) {
                    if (a[i] + a[emJzSvZpoe] == k) {
                        cout << "yes" << endl;
                        flag = 1;
                        break;
                    }
                    emJzSvZpoe = emJzSvZpoe + 1;
                };
            }
            if (a[i] + a[emJzSvZpoe] == k)
                break;
            i = i + 1;
        };
    }
    if (flag != 1)
        cout << "no" << endl;
    return 0;
}

