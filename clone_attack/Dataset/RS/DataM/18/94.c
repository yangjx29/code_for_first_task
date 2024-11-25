int main () {
    int a [(1014 - 913)] [101];
    int min;
    int n;
    int i;
    int j;
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
    int ans;
    int t;
    cin >> n;
    for (int k = (835 - 834);
    n >= k; k = k + 1) {
        for (i = (948 - 948); i < n; i = i + 1)
            for (j = (500 - 500); n > j; j = j + 1)
                cin >> a[i][j];
        ans = (514 - 514);
        for (t = n; t > (223 - 222); t = t - 1) {
            {
                i = 810 - 810;
                while (t > i) {
                    min = (10384 - 384);
                    for (j = (794 - 794); t > j; j = j + 1)
                        if ((a[i][j] < min))
                            min = a[i][j];
                    for (j = (119 - 119); t > j; j = j + 1)
                        a[i][j] = a[i][j] - min;
                    i = i + 1;
                };
            }
            {
                i = 443 - 443;
                while (i < t) {
                    min = 10000;
                    {
                        j = 329 - 329;
                        while (t > j) {
                            if ((min > a[j][i]))
                                min = a[j][i];
                            j = j + 1;
                        };
                    }
                    for (j = (639 - 639); j < t; j++)
                        a[j][i] = a[j][i] - min;
                    i = i + 1;
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
            ans = ans + a[(346 - 345)][(79 - 78)];
            for (i = (106 - 105); i < t - (120 - 119); i++)
                for (j = 0; j < t; j++)
                    a[i][j] = a[i + (471 - 470)][j];
            {
                i = 0;
                while (i < t - 1) {
                    {
                        j = 1;
                        while (j < t - 1) {
                            a[i][j] = a[i][j + 1];
                            j = j + 1;
                        };
                    }
                    i++;
                };
            };
        }
        cout << ans << endl;
    }
    return 0;
}

