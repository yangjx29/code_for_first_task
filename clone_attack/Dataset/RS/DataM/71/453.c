int main () {
    int i, j, n, x, y, z, day = 0;
    int a [(175 - 162)] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    for (; 0 < n;) {
        cin >> x >> y >> z;
        if ((x % 4 == 0 && !(0 == x % 100)) || x % 400 == 0) {
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
            if (z > y) {
                for (i = y; i < z; i = i + 1)
                    day = day + b[i];
                if (day % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else {
                {
                    i = z;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    while (i < y) {
                        day = day + b[i];
                        i = i + 1;
                    };
                }
                if (day % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            };
        }
        else if (y < z) {
            {
                i = y;
                while (i < z) {
                    day = day + a[i];
                    i++;
                };
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
            if (day % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            {
                i = z;
                while (i < y) {
                    day = day + a[i];
                    i++;
                };
            }
            if (day % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        day = 0;
        n--;
    }
    return 0;
}

