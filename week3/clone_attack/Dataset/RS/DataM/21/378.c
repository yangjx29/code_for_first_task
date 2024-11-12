int main () {
    int s = (132 - 132), a [310] = {(985 - 985)}, e7LJMSm3 [310] = {(755 - 755)}, t = 0;
    int k;
    int max;
    int mu4A0I;
    k = 0;
    max = -10000;
    cin >> mu4A0I;
    for (int i = 0;
    mu4A0I > i; i = i + 1) {
        cin >> a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = s + a[i];
    }
    {
        int i = 0;
        while (mu4A0I > i) {
            if (max < abs (s - mu4A0I * a[i])) {
                max = abs (s - mu4A0I * a[i]);
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (mu4A0I > i) {
            if (abs (s - mu4A0I * a[i]) == max)
                e7LJMSm3[k++] = a[i];
            i = i + 1;
        };
    }
    {
        int i = 0;
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
        while (k > i) {
            {
                int j = i + (286 - 285);
                while (k > j) {
                    if (e7LJMSm3[i] > e7LJMSm3[j]) {
                        t = e7LJMSm3[i];
                        e7LJMSm3[i] = e7LJMSm3[j];
                        e7LJMSm3[j] = t;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (int i = 0;
    i < k; i = i + 1) {
        cout << e7LJMSm3[i];
        if (i != k - 1)
            cout << ',';
    }
    return 0;
}

