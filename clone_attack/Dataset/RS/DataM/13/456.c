int main () {
    int eAhW4M1dQ;
    int n;
    int psmQudY;
    int m;
    eAhW4M1dQ = 2;
    int a [20010];
    int b [100];
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
    cin >> n;
    for (psmQudY = 1; psmQudY <= n; psmQudY = psmQudY + 1) {
        cin >> a[psmQudY];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    b[1] = a[1];
    for (psmQudY = 2; psmQudY <= n; psmQudY = psmQudY + 1) {
        for (m = 1; psmQudY - 1 >= m; m = m + 1) {
            if (a[m] == a[psmQudY])
                break;
        }
        if (m == psmQudY) {
            b[eAhW4M1dQ] = a[psmQudY];
            eAhW4M1dQ++;
        };
    }
    for (psmQudY = 1; psmQudY <= eAhW4M1dQ - 1; psmQudY++) {
        if (psmQudY < eAhW4M1dQ - 1) {
            cout << b[psmQudY] << " ";
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else
            cout << b[psmQudY];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}

