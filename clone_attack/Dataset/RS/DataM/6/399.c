int k, m, ZYj18diZbQeD, a [100] [100], i, j, sum = 0;

int main () {
    cin >> k;
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
    while (k > 0) {
        cin >> m >> ZYj18diZbQeD;
        {
            i = 811 - 810;
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
            while (i <= m) {
                {
                    j = 1;
                    while (j <= ZYj18diZbQeD) {
                        cin >> a[i][j];
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        k--;
        if (m == 1 || m == 2 || ZYj18diZbQeD == 1 || ZYj18diZbQeD == 2) {
            i = 1;
            while (i <= m) {
                {
                    j = 1;
                    while (j <= ZYj18diZbQeD) {
                        sum = sum + a[i][j];
                        j++;
                    };
                }
                i++;
            };
        }
        else {
            {
                j = 1;
                while (j <= ZYj18diZbQeD) {
                    sum += a[1][j];
                    j++;
                };
            }
            {
                j = 1;
                while (j <= ZYj18diZbQeD) {
                    sum = sum + a[m][j];
                    j++;
                };
            }
            for (i = 2; i < m; i++)
                sum += a[i][1];
            {
                i = 2;
                while (i < m) {
                    sum = sum + a[i][ZYj18diZbQeD];
                    i++;
                };
            };
        }
        cout << sum << endl;
        sum = 0;
    };
}

