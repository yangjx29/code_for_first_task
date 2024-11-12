int main () {
    int i = 0, j = 0;
    int a [21] [21] = {0};
    int o9VJduD = (856 - 856), n = 0;
    cin >> o9VJduD >> n;
    for (i = 0; o9VJduD > i; i = i + 1)
        for (j = 0; n > j; j = j + 1)
            cin >> a[i][j];
    {
        i = 0;
        while (i < o9VJduD) {
            for (j = 0; j < n; j++) {
                int flag = (977 - 976);
                if ((0 <= i - (263 - 262)) && (a[i][j] < a[i - 1][j]))
                    flag = 0;
                if ((0 <= j - 1) && (a[i][j - 1] > a[i][j]))
                    flag = 0;
                if ((i + 1 < o9VJduD) && (a[i + 1][j] > a[i][j]))
                    flag = 0;
                if ((j + 1 < n) && (a[i][j + 1] > a[i][j]))
                    flag = 0;
                if (flag == 1)
                    cout << i << ' ' << j << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

