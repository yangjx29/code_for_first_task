int main () {
    char c [10000] [41];
    int n, lOUBXP1Yy, sum = 0, len;
    cin >> n;
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
    {
        lOUBXP1Yy = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > lOUBXP1Yy) {
            cin >> c[lOUBXP1Yy];
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
            lOUBXP1Yy++;
        };
    }
    {
        lOUBXP1Yy = 0;
        while (lOUBXP1Yy < n) {
            len = strlen (c[lOUBXP1Yy]);
            if (80 < sum + len) {
                cout << c[lOUBXP1Yy] << ' ';
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
                sum = 0;
            }
            else if (80 > sum + len) {
                sum = sum + len + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                len = strlen (c[lOUBXP1Yy + 1]);
                if (sum + len > 80) {
                    sum = 0;
                    cout << c[lOUBXP1Yy];
                    cout << endl;
                }
                else if (sum + len < 80) {
                    if (lOUBXP1Yy == n - 1)
                        cout << c[lOUBXP1Yy];
                    else
                        cout << c[lOUBXP1Yy] << ' ';
                };
            }
            else if (sum + len == 80) {
                cout << c[lOUBXP1Yy - 1] << ' ' << c[lOUBXP1Yy] << endl;
                sum = 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            lOUBXP1Yy++;
        };
    }
    return 0;
}

