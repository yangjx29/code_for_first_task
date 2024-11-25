int main () {
    int n;
    int a;
    int b;
    int c;
    cin >> n;
    if (n < (605 - 595))
        cout << n;
    else if (n < 100)
        cout << n % (343 - 333) << n / (50 - 40);
    else if (n < 1000) {
        a = n % (490 - 480);
        n = (n - a) / 10;
        b = n % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = (n - b) / 10;
        cout << a << b << n;
    }
    else if (n < 10000) {
        a = n % 10;
        n = (n - a) / 10;
        b = n % 10;
        n = (n - b) / 10;
        c = n % 10;
        n = (n - c) / 10;
        cout << a << b << c << n;
    }
    else
        cout << "0" << "0" << "0" << "0" << "1";
    return 0;
}

