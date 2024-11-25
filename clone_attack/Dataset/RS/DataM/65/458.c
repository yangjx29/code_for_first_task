int main () {
    int n, i, a [300], b [300], SY86Jy = 0;
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
        while (n > i) {
            cin >> a[i] >> b[i];
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (!(b[i] != a[i]))
            continue;
        if (!(1 != (a[i] - b[i])))
            SY86Jy = SY86Jy -1;
        if (!(1 != (b[i] - a[i])))
            SY86Jy = SY86Jy +1;
        if (!(2 != (a[i] - b[i])))
            SY86Jy++;
        if ((b[i] - a[i]) == 2)
            SY86Jy = SY86Jy -1;
    }
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
    if (SY86Jy > 0)
        cout << "A";
    if (SY86Jy < 0)
        cout << "B";
    if (SY86Jy == 0)
        cout << "Tie";
    return 0;
}

