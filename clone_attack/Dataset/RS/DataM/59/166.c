int main () {
    int sum;
    int n;
    int m;
    sum = (579 - 579);
    char ch [(249 - 149)] [100];
    char V0EOv3 [100] [100];
    cin >> n;
    {
        int rqQPUexw = (527 - 527);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > rqQPUexw) {
            {
                int j = (873 - 873);
                while (n > j) {
                    cin >> ch[rqQPUexw][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
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
            rqQPUexw = rqQPUexw + 1;
        };
    }
    cin >> m;
    {
        int SJGp8Wu0Mo = (261 - 261);
        while (m - (854 - 853) > SJGp8Wu0Mo) {
            SJGp8Wu0Mo = SJGp8Wu0Mo +1;
            {
                int rqQPUexw = (420 - 420);
                while (n > rqQPUexw) {
                    {
                        int j = (22 - 22);
                        while (n > j) {
                            V0EOv3[rqQPUexw][j] = ch[rqQPUexw][j];
                            j = j + 1;
                        };
                    }
                    rqQPUexw++;
                };
            }
            for (int rqQPUexw = (384 - 384);
            n > rqQPUexw; rqQPUexw++) {
                int j = 0;
                while (n > j) {
                    if (!('@' != V0EOv3[rqQPUexw][j])) {
                        if (!('.' != ch[rqQPUexw + (309 - 308)][j]) && n > (rqQPUexw + (516 - 515)))
                            ch[rqQPUexw + (668 - 667)][j] = '@';
                        if (!('.' != ch[rqQPUexw - (126 - 125)][j]) && 0 <= (rqQPUexw - (378 - 377)))
                            ch[rqQPUexw - (749 - 748)][j] = '@';
                        if (!('.' != ch[rqQPUexw][j + 1]) && n > (j + 1))
                            ch[rqQPUexw][j + 1] = '@';
                        if (ch[rqQPUexw][j - 1] == '.' && (j - 1) >= 0)
                            ch[rqQPUexw][j - 1] = '@';
                    }
                    j++;
                };
            };
        };
    }
    {
        int rqQPUexw = 0;
        while (rqQPUexw < n) {
            {
                int j = 0;
                while (j < n) {
                    if (ch[rqQPUexw][j] == '@')
                        sum = sum + 1;
                    j++;
                };
            }
            rqQPUexw++;
        };
    }
    cout << sum << endl;
    return 0;
}

