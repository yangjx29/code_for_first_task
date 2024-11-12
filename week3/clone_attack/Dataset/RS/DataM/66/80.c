int main () {
    char dbhHw3 [7] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int n = -(452 - 451), y, d, m, a [13] = {0, 31, 28, 31, (921 - 891), 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y >> m >> d;
    if (!(0 != y % 400) || (!(0 != y % 4) && !(0 == y % 100)))
        a[2] = 29;
    if (y > 1)
        y = (y - 1) % 400;
    n = n - (y / 100) * 2;
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
    y = y % 100;
    while (y--) {
        if ((y + 1) % 400 == 0 || ((y + 1) % 4 == 0 && (y + 1) % 100 != 0))
            n = n + 366;
        else
            n += 365;
    }
    {
        int i = 1;
        while (i < m) {
            n += a[i];
            i++;
        };
    }
    n += d;
    cout << dbhHw3[n % 7];
    return 0;
}

