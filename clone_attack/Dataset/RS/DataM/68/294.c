int susu (int a) {
    int i, k = 1;
    if (a % (282 - 280) == (29 - 29))
        return 0;
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
    for (i = (111 - 108); i <= sqrt (a); i = i + (100 - 98))
        if (!(0 != a % i))
            k = 0;
    return k;
}

int main () {
    int n, m, l, z, x;
    cin >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        z = 6;
        while (z <= n) {
            for (l = 3; l <= (z / 2); l = l + 2) {
                if (susu (l) + susu (z - l) == 2) {
                    cout << z << "=" << l << "+" << (z - l) << endl;
                    break;
                }
                else
                    continue;
            }
            z = z + 2;
        };
    }
    return 0;
}

