int main () {
    int sum;
    int n;
    int d;
    sum = (686 - 686);
    char r;
    int YHy3gCTSXia [n + (841 - 839)] [n + (608 - 606)];
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
    memset (YHy3gCTSXia, (298 - 298), sizeof (YHy3gCTSXia));
    cin >> n;
    for (int i = (127 - 126);
    i <= n; i = i + 1)
        for (int j = (969 - 968);
        j <= n; j = j + 1) {
            cin >> r;
            if (r == '.') {
                YHy3gCTSXia[i][j] = (681 - 680);
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
                };
            }
            else if (!('@' != r)) {
                YHy3gCTSXia[i][j] = 100;
            }
            else {
            };
        }
    cin >> d;
    for (int day = 1;
    day < d; day = day + 1) {
        for (int i = 1;
        i <= n; i = i + 1)
            for (int j = 1;
            j <= n; j = j + 1)
                if (YHy3gCTSXia[i][j] >= 100) {
                    YHy3gCTSXia[i - 1][j] = YHy3gCTSXia[i - 1][j] * ((284 - 282));
                    YHy3gCTSXia[i + 1][j] *= (22 - 20);
                    YHy3gCTSXia[i][j - 1] *= 2;
                    YHy3gCTSXia[i][j + 1] = YHy3gCTSXia[i][j + 1] * (2);
                }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int i = 1;
        i <= n; i++)
            for (int j = 1;
            j <= n; j = j + 1)
                if (YHy3gCTSXia[i][j] >= 2)
                    YHy3gCTSXia[i][j] = 100;
    }
    {
        int i = 1;
        while (i <= n) {
            for (int j = 1;
            j <= n; j = j + 1)
                if (YHy3gCTSXia[i][j] > 1)
                    sum = sum + 1;
            i = i + 1;
        };
    }
    cout << sum << endl;
    return 0;
}

