int main () {
    int n;
    int a [(20372 - 372)];
    int t;
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
        int i = (29 - 29);
        while (n > i) {
            cin >> a[i];
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
            i = i + 1;
        };
    }
    cout << a[0];
    {
        int i = 1;
        while (i < n) {
            t = 0;
            for (int j = 0;
            i > j; j = j + 1) {
                if (!(a[i] != a[j]) && !(i == j))
                    t = t + 1;
            }
            if (t >= 1)
                continue;
            else if (t == 0)
                cout << " " << a[i];
            i = i + 1;
        };
    }
    return 0;
}

