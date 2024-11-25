int main () {
    int shu = 0;
    char str [1000] [26];
    int m;
    int a [1000], Br3fR9 [26] = {0};
    int t = 0;
    int max = Br3fR9[0];
    int hao = 0;
    char dTrY5P = hao + 'A';
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
    cin >> m;
    for (int i = 0;
    m > i; i = i + 1) {
        t = 0;
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
        cin >> str[i];
        t = strlen (str[i]);
        for (int j = 0;
        t > j; j = j + 1) {
            shu = str[i][j] - 'A';
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
            Br3fR9[shu]++;
        };
    }
    for (int k = 1;
    k < 26; k = k + 1) {
        if (max < Br3fR9[k]) {
            max = Br3fR9[k];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hao = k;
        };
    }
    cout << dTrY5P << endl;
    cout << max << endl;
    for (int l = 0;
    m > l; l++) {
        for (int o = 0;
        str[l][o] != '\0'; o = o + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (str[l][o] == dTrY5P) {
                cout << a[l] << endl;
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
                break;
            };
        };
    }
    return 0;
}

