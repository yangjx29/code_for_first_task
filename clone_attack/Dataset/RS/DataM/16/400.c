int main () {
    int n, i, a [5], voAasi;
    cin >> n;
    a[0] = n / 1000;
    a[1] = (n - 1000 * a[0]) / 100;
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
    a[(817 - 815)] = (n - 1000 * a[0] - 100 * a[1]) / 10;
    a[(476 - 473)] = n - 1000 * a[0] - 100 * a[1] - 10 * a[2];
    if (1000 <= n) {
        cout << a[3] << a[2] << a[1] << a[0];
    }
    else if (100 <= n && 1000 > n) {
        cout << a[3] << a[2] << a[1];
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
        };
    }
    else if (n >= 10 && n < 100) {
        cout << a[3] << a[2];
    }
    else if (n < 10)
        cout << n;
    return 0;
}

