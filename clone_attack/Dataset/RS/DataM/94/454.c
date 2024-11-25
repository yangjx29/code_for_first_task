int main () {
    int i, n, j = 0, EDdm5Uyx, len, num, a [1000];
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> num;
            if (!(1 != num % 2)) {
                a[j] = num;
                j++;
            }
            if (!(n - 1 != i))
                len = j;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (len - 1 > i) {
            {
                j = 0;
                while (len - 1 - i > j) {
                    if (a[j] > a[j + 1]) {
                        EDdm5Uyx = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = EDdm5Uyx;
                    }
                    j++;
                };
            }
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
            i = i + 1;
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
    cout << a[0];
    {
        i = 1;
        while (i < len) {
            cout << "," << a[i];
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

