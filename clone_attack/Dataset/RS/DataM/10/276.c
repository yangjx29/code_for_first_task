int main () {
    int n, a [30], b [30] = {(275 - 275)}, max = 0, flag = 0;
    cin >> n;
    {
        int i = 1;
        while (n >= i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    for (int j = n, k;
    1 <= j; j = j - 1) {
        flag = 0;
        max = 0;
        {
            k = j;
            while (n >= k) {
                if (a[j] >= a[k]) {
                    flag = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (b[k] >= max) {
                        max = b[k];
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
                    };
                }
                k++;
            };
        }
        if (flag) {
            b[j] = max + 1;
        }
        else {
            b[j] = max;
        };
    }
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
    {
        int i = 1;
        while (i <= n) {
            if (b[i] >= max) {
                max = b[i];
            }
            i++;
        };
    }
    cout << max << endl;
    return 0;
}

