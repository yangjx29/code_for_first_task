int days (int y, int m, int d) {
    int days = 0;
    int year [3001];
    int month [13] = {0, (956 - 925), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int loopmon [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    {
        int i = (785 - 784);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 3000) {
            if (i % 4 == (867 - 867) && !((893 - 893) == i % 100))
                year[i] = 366;
            else {
                if (i % (1332 - 932) == 0)
                    year[i] = 366;
                else
                    year[i] = 365;
            }
            i++;
        };
    }
    {
        int i = 1;
        while (y > i) {
            days += year[i];
            i++;
        };
    }
    {
        int i = 1;
        while (i < m) {
            if (y % 4 == 0 && y % 100 != 0)
                days += loopmon[i];
            else {
                if (y % 400 == 0)
                    days += loopmon[i];
                else
                    days += month[i];
            }
            i++;
        };
    }
    days = days + d;
    return days;
}

int main () {
    int y2 = 0, m2 = 0, d2 = 0;
    int pgKZ3s5 = 0, m1 = 0, X9o3UYxP5dnl = 0;
    cin >> pgKZ3s5 >> m1 >> X9o3UYxP5dnl;
    cin >> y2 >> m2 >> d2;
    cout << days (y2, m2, d2) - days (pgKZ3s5, m1, X9o3UYxP5dnl);
    return 0;
}

