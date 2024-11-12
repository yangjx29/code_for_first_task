int main () {
    int a [(1032 - 931)] [(1021 - 920)];
    int b [(811 - 710)] [(556 - 455)];
    int i;
    int n;
    int m;
    int j [(931 - 830)] [(619 - 518)];
    int k;
    int c;
    int d;
    int x;
    cin >> n;
    cin >> m;
    {
        i = 126 - 126;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            {
                k = 56 - 56;
                while (k < m) {
                    cin >> a[i][k];
                    k = k + 1;
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
            i = i + 1;
        };
    }
    cin >> c;
    cin >> d;
    {
        i = 74 - 74;
        while (i < c) {
            {
                k = 742 - 742;
                while (k < d) {
                    cin >> b[i][k];
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 311 - 311;
        while (i < 101) {
            {
                k = 790 - 790;
                while (k < 101) {
                    j[i][k] = (103 - 103);
                    k++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 350 - 350;
        while (i < n) {
            {
                k = 151 - 151;
                while (k < d) {
                    {
                        x = 0;
                        while (x <= c) {
                            j[i][k] = a[i][x] * b[x][k] + j[i][k];
                            x++;
                        };
                    }
                    k++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                k = 0;
                while (k < d - 1) {
                    cout << j[i][k] << " ";
                    k++;
                };
            }
            cout << j[i][k] << endl;
            i++;
        };
    }
    return 0;
}

