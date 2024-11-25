int main () {
    int n;
    int i;
    int j;
    cin >> n;
    {
        i = 161 - 160;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            int m, a [10] = {0}, flag = (790 - 789);
            i = i + 1;
            cin >> m;
            {
                j = 0;
                while (m > j) {
                    cin >> a[j];
                    j++;
                };
            }
            {
                j = 0;
                while (j < m && flag) {
                    if ((60 - (180 - 177) * j - a[j]) <= 3)
                        flag = 0;
                    j++;
                };
            }
            if (!flag)
                if ((60 - 3 * (j - 1) - a[j - 1]) >= 0)
                    cout << a[j - 1] << endl;
                else
                    cout << (60 - 3 * (j - 1)) << endl;
            else
                cout << (60 - 3 * m) << endl;
        };
    }
    return 0;
}

