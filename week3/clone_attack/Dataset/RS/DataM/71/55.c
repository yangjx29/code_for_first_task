int main () {
    int n, y, m1, m2, i, j, sum, wTEVkS;
    int x [24] = {(604 - 573), 28, (481 - 450), 30, (160 - 129), 30, (530 - 499), 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= i) {
            sum = 0;
            cin >> y >> m1 >> m2;
            if (m1 > m2) {
                wTEVkS = m1;
                m1 = m2;
                m2 = wTEVkS;
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
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                j = 11 + m1;
                while (j <= 10 + m2) {
                    sum = sum + x[j];
                    j++;
                };
            }
            else
                for (j = m1 - 1; j <= m2 - 2; j++)
                    sum = sum + x[j];
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            i++;
        };
    }
    return 0;
}

