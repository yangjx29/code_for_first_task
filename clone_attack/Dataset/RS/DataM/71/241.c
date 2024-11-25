int a [(789 - 776)] = {(383 - 383), (889 - 858), 28, (414 - 383), 30, 31, 30, 31, 31, 30, 31, 30, 31};
int oIKtY81XE [13] = {(365 - 365), 31, (424 - 395), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int judge [100];

int main () {
    int n;
    int i;
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
    memset (judge, 0, sizeof judge);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            int day;
            int j;
            day = 0;
            int year;
            int month1;
            int month2;
            cin >> year >> month1 >> month2;
            if (month2 < month1) {
                int temp;
                temp = month1;
                month1 = month2;
                month2 = temp;
            }
            if (!(month2 != month1))
                day = 0;
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((year % 4 == 0 && !(0 == year % 100)) || year % 400 == 0) {
                    j = month1;
                    while (j < month2) {
                        day += oIKtY81XE[j];
                        j = j + 1;
                    };
                }
                else {
                    j = month1;
                    while (j < month2) {
                        day += a[j];
                        j++;
                    };
                };
            }
            if (day % 7 == 0)
                judge[i] = 1;
            else
                judge[i] = 0;
            i++;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if (judge[i] == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            i++;
        };
    }
    return 0;
}

