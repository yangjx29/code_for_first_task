int main () {
    int count;
    count = 0;
    int i;
    int j;
    int hEZT9PratBg;
    int kCWi0AU5fNm;
    int hIMnfNURhHlx;
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
    char tJiDoW [(1082 - 82)] [1000] = {'0'};
    int CFPbNKX5U7n, m;
    cin >> CFPbNKX5U7n;
    for (i = (426 - 425); i <= CFPbNKX5U7n; i = i + 1)
        for (j = (513 - 512); j <= CFPbNKX5U7n; j = j + 1)
            cin >> tJiDoW[i][j];
    cin >> m;
    for (i = (561 - 560); i <= m - (734 - 733); i = i + 1) {
        for (hEZT9PratBg = (189 - 188); hEZT9PratBg <= CFPbNKX5U7n; hEZT9PratBg++)
            for (j = 1; j <= CFPbNKX5U7n; j = j + 1) {
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
                if (tJiDoW[hEZT9PratBg][j] == '@') {
                    if (tJiDoW[hEZT9PratBg][j + 1] == '.')
                        tJiDoW[hEZT9PratBg][j + 1] = '&';
                    if (tJiDoW[hEZT9PratBg][j - 1] == '.')
                        tJiDoW[hEZT9PratBg][j - 1] = '&';
                    if (tJiDoW[hEZT9PratBg - 1][j] == '.')
                        tJiDoW[hEZT9PratBg - 1][j] = '&';
                    if (tJiDoW[hEZT9PratBg + 1][j] == '.')
                        tJiDoW[hEZT9PratBg + 1][j] = '&';
                };
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
        for (kCWi0AU5fNm = 1; kCWi0AU5fNm <= CFPbNKX5U7n; kCWi0AU5fNm = kCWi0AU5fNm + 1)
            for (hIMnfNURhHlx = 1; hIMnfNURhHlx <= CFPbNKX5U7n; hIMnfNURhHlx++) {
                if (tJiDoW[kCWi0AU5fNm][hIMnfNURhHlx] == '&')
                    tJiDoW[kCWi0AU5fNm][hIMnfNURhHlx] = '@';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
    }
    for (i = 1; i <= CFPbNKX5U7n; i++)
        for (j = 1; j <= CFPbNKX5U7n; j = j + 1) {
            if (tJiDoW[i][j] == '@')
                count = count + 1;
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
    cout << count << endl;
}

