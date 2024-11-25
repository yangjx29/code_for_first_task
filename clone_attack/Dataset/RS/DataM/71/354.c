int main () {
    int n, i, x, y, z, a, sum, leap;
    cin >> n;
    for (i = 1; n >= i; i = i + 1) {
        sum = 0;
        cin >> x >> y >> z;
        if (z < y) {
            a = y;
            y = z;
            z = a;
        }
        leap = !(0 != x % 4) && !(0 == x % 100) || !(0 != x % 400);
        for (; z > y; y = y + 1) {
            if (y == 4 || y == 6 || y == 9 || y == 11) {
                sum += 30;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (y == 2) {
                sum += 28 + leap;
            }
            else {
                sum += 31;
            };
        }
        if (sum % 7 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        };
    }
    return 0;
}

