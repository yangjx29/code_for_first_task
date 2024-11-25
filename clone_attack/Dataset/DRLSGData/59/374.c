int main () {
    int m, n, i, j, k = 1, num = 0;
    char ch [102] [102] = {0};
    cin >> m;
    {
        i = 1;
        while (i < m + 1) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                j = 1;
                while (j < m + 1) {
                    cin >> ch[i][j];
                    if (!('@' != ch[i][j]))
                        ch[i][j] = 1 + '0';
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    cin >> n;
    while (n >= k) {
        {
            i = 1;
            while (i < m + 1) {
                {
                    j = 1;
                    while (m + 1 > j) {
                        if (!(k + '0' != ch[i][j])) {
                            if (!('.' != ch[i][j + 1]))
                                ch[i][j + 1] = k + 1 + '0';
                            if (!('.' != ch[i][j - 1]))
                                ch[i][j - 1] = k + 1 + '0';
                            if (!('.' != ch[i - 1][j]))
                                ch[i - 1][j] = k + 1 + '0';
                            if (ch[i + 1][j] == '.')
                                ch[i + 1][j] = k + 1 + '0';
                        }
                        j = j + 1;
                    }
                }
                i++;
            }
        }
        k++;
    }
    {
        i = 1;
        while (i < m + 1) {
            for (j = 1; j < m + 1; j++) {
                if (ch[i][j] <= n + '0' && ch[i][j] >= 1 + '0')
                    num = num + 1;
            }
            i++;
        }
    }
    cout << num << endl;
    return 0;
}

