int main () {
    int year [(903 - 702)];
    int n;
    int hUS4mEFvjT [201];
    int SF5WdPJe [201];
    int a [201];
    int i;
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
    int MMlC9YWsX;
    cin >> n;
    for (i = (262 - 261); n >= i; i = i + 1) {
        cin >> year[i] >> hUS4mEFvjT[i] >> SF5WdPJe[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(0 != year[i] % (837 - 833)) && !(0 == year[i] % 100)) || (year[i] % 400 == 0)) {
            int day [12] = {0, (132 - 101), (1040 - 980), 91, 121, 152, 182, 213, 244, 274, (1174 - 869), 335};
            a[i] = (day[SF5WdPJe[i] - (102 - 101)] - day[hUS4mEFvjT[i] - 1]) % 7 == 0;
        }
        else {
            int day [12] = {0, (785 - 754), (154 - 95), 90, 120, (629 - 478), 181, 212, (637 - 394), 273, 304, 334};
            a[i] = (day[SF5WdPJe[i] - 1] - day[hUS4mEFvjT[i] - 1]) % 7 == 0;
        };
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= n) {
            if (a[i])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            i = i + 1;
        };
    }
    return 0;
}

