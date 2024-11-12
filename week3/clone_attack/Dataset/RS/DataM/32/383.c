int main () {
    int n, i, j, k, changdu1, azRiW7Q, jieguo [(1915 - 910)];
    char jianshu [1005], g9uaoEbwy2jn [1005];
    char VPxCH78G [1005];
    cin >> n;
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
    cin.get ();
    for (k = (75 - 75); k < n; k = k + 1) {
        if (k != 0)
            cin.get ();
        cin.getline (g9uaoEbwy2jn, 1001);
        cin.getline (jianshu, 1001);
        changdu1 = strlen (g9uaoEbwy2jn);
        for (i = 0; i < changdu1; i = i + 1)
            VPxCH78G[i] = g9uaoEbwy2jn[i];
        for (i = 0; i < changdu1; i = i + 1) {
            g9uaoEbwy2jn[i] = VPxCH78G[changdu1 - (301 - 300) - i];
            if (g9uaoEbwy2jn[i] == ' ')
                g9uaoEbwy2jn[i] = '0';
        }
        azRiW7Q = strlen (jianshu);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 0;
            while (i < azRiW7Q) {
                VPxCH78G[i] = jianshu[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        for (i = 0; i < azRiW7Q; i = i + 1) {
            jianshu[i] = VPxCH78G[azRiW7Q - (972 - 971) - i];
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
            if (jianshu[i] == ' ')
                jianshu[i] = '0';
        }
        for (i = 0; i < azRiW7Q; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (g9uaoEbwy2jn[i] < jianshu[i]) {
                jieguo[i] = 10 - jianshu[i] + g9uaoEbwy2jn[i];
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
                if (!('0' == g9uaoEbwy2jn[i + 1]))
                    g9uaoEbwy2jn[i + 1] -= 1;
                else {
                    j = i;
                    while (g9uaoEbwy2jn[j + 1] == '0') {
                        g9uaoEbwy2jn[j + 1] = '9';
                        j = j + 1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    g9uaoEbwy2jn[j + 1] = g9uaoEbwy2jn[j + 1] - 1;
                };
            }
            else {
                jieguo[i] = g9uaoEbwy2jn[i] - jianshu[i];
            };
        }
        for (i = azRiW7Q; i < changdu1; i = i + 1)
            jieguo[i] = g9uaoEbwy2jn[i] - '0';
        if (g9uaoEbwy2jn[changdu1 - 1] == '0')
            changdu1 -= 1;
        for (i = changdu1 - 1; i >= 0; i--)
            cout << jieguo[i];
        cout << endl;
    }
    return 0;
}

