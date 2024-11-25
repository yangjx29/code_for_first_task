int main () {
    const  int a1 [12] = {1, 4, 4, (607 - 600), 2, 5, 7, 3, 6, 1, 4, 6}, a2 [12] = {1, 4, 5, 1, 3, 6, 1, 4, 7, 2, 5, 7};
    int n, i, year, mon1, mon2;
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
    for (i = 0; n > i; i = i + 1) {
        cin >> year >> mon1 >> mon2;
        if (!(0 == year % 4) || !(0 != year % 100) && !(0 == year % 400))
            if (a1[mon1 - 1] == a1[mon2 - 1])
                cout << "YES";
            else
                cout << "NO";
        else {
            if (a2[mon1 - 1] == a2[mon2 - 1])
                cout << "YES";
            else
                cout << "NO";
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i < n - 1)
            cout << endl;
    }
    return 0;
}

