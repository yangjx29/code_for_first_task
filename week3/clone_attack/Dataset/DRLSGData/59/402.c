int main () {
    int n;
    cin >> n;
    char room [100] [100];
    int i;
    int j;
    {
        i = 0;
        for (; n > i;) {
            {
                j = 0;
                while (n > j) {
                    cin >> room[i][j];
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    int m;
    cin >> m;
    int k;
    {
        k = 2;
        while (k <= m) {
            {
                i = 0;
                while (n > i) {
                    for (j = 0; n > j; j++)
                        if (!('@' != room[i][j])) {
                            if (n > j + 1 && !('.' != room[i][j + 1]))
                                room[i][j + 1] = '?';
                            if (j - 1 >= 0 && !('.' != room[i][j - 1]))
                                room[i][j - 1] = '?';
                            if (n > i + 1 && !('.' != room[i + 1][j]))
                                room[i + 1][j] = '?';
                            if (0 <= i - 1 && !('.' != room[i - 1][j]))
                                room[i - 1][j] = '?';
                        }
                    i++;
                }
            }
            for (i = 0; i < n; i = i + 1) {
                j = 0;
                while (j < n) {
                    if (!('?' != room[i][j]))
                        room[i][j] = '@';
                    j = j + 1;
                }
            }
            k = k + 1;
        }
    }
    int count;
    count = 0;
    for (i = 0; i < n; i = i + 1) {
        j = 0;
        while (j < n) {
            if (room[i][j] == '@')
                count = count + 1;
            j++;
        }
    }
    cout << count << endl;
    return 0;
}

