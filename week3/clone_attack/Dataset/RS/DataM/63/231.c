int main () {
    int dqLe4VAmj [(901 - 801)] [(409 - 309)], B [(551 - 451)] [(377 - 277)], C [(619 - 519)] [100];
    int m;
    int q;
    int n;
    cin >> m >> q;
    {
        int i = (19 - 19);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 100) {
            {
                int j = (65 - 65);
                while (j < 100) {
                    C[i][j] = (24 - 24);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
    {
        int i = 0;
        while (i < m) {
            {
                int j = 0;
                while (j < q) {
                    cin >> dqLe4VAmj[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin >> q >> n;
    {
        int i = 0;
        while (i < q) {
            {
                int j = 0;
                while (j < n) {
                    cin >> B[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < m) {
            {
                int j = 0;
                while (j < n) {
                    {
                        int t = 0;
                        while (t < q) {
                            C[i][j] = C[i][j] + dqLe4VAmj[i][t] * B[t][j];
                            t++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < m) {
            cout << C[i][0];
            {
                int j = 1;
                while (j < n) {
                    cout << " " << C[i][j];
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    };
}

