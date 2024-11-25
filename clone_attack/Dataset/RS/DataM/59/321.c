int main () {
    int n, m;
    char r [110] [110];
    int count;
    int i;
    int j;
    count = 0;
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
    cin >> n;
    memset (r, '#', sizeof (r));
    for (i = (163 - 162); n >= i; i = i + 1)
        for (j = 1; n >= j; j = j + 1)
            cin >> r[i][j];
    cin >> m;
    for (; m > 1;) {
        for (i = 1; n >= i; i = i + 1) {
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
            for (j = 1; n >= j; j = j + 1) {
                if (!('@' != r[i][j])) {
                    if (!('.' != r[i - 1][j]))
                        r[i - 1][j] = '*';
                    if (!('.' != r[i + 1][j]))
                        r[i + 1][j] = '*';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (r[i][j - 1] == '.')
                        r[i][j - 1] = '*';
                    if (r[i][j + 1] == '.')
                        r[i][j + 1] = '*';
                };
            };
        }
        {
            i = 1;
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
            while (i <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        if (r[i][j] == '*')
                            r[i][j] = '@';
                        j++;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
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
        m--;
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (r[i][j] == '@')
                count = count + 1;
    cout << count << endl;
    return 0;
}

