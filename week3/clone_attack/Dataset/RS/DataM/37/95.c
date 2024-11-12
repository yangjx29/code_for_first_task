int main () {
    char LbHe6ytWaq [100] [1000];
    int KFJUbLsQe9;
    int len;
    int b [100] [1000] = {0};
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
    int t;
    cin >> t;
    for (i = 1; t >= i; i = i + 1) {
        cin >> LbHe6ytWaq[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 1;
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
        while (t >= i) {
            len = strlen (LbHe6ytWaq[i]);
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j <= len - 1) {
                    b[i][LbHe6ytWaq[i][j] - 'a']++;
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
                    j = j + 1;
                };
            }
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j <= len - 1) {
                    if (b[i][LbHe6ytWaq[i][j] - 'a'] == 1) {
                        cout << LbHe6ytWaq[i][j] << endl;
                        break;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
            if (j == len) {
                cout << "no" << endl;
            };
        };
    }
    return 0;
}

