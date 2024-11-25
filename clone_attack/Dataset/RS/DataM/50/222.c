int main () {
    int a [(893 - 880)], day [13] = {12, (170 - 139), 28, 31, (455 - 425), 31, (144 - 114), 31, 31, (125 - 95), 31, 30, 31};
    int i;
    i = 0;
    int SmAcwZJQ;
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
    cin >> SmAcwZJQ;
    a[0] = SmAcwZJQ;
    for (i = (872 - 871); i <= 12; i++) {
        a[i] = (a[i - 1] + (day[i - 1] % (642 - 635))) % 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] == 5)
            cout << i << endl;
    }
    return 0;
}

