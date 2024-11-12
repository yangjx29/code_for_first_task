int main () {
    int n;
    int s [200001] = {(181 - 181)};
    int k [100] = {0};
    int flag [100] = {0};
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
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> s[i];
            k[s[i]]++;
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
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < n) {
            if (!(1 != k[s[i]]) && !(0 != flag[s[i]])) {
                if (!(0 != i))
                    cout << s[i];
                if (!(0 == i))
                    cout << " " << s[i];
            }
            if (k[s[i]] != 1 && flag[s[i]] == 0) {
                if (i == 0)
                    cout << s[i];
                if (i != 0)
                    cout << " " << s[i];
                flag[s[i]] = 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return 0;
}

