int main () {
    int n;
    int a;
    int b;
    int c;
    int d;
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
    if ((812 - 803) >= n && n >= 0)
        cout << n;
    if (99 >= n && (357 - 347) <= n) {
        a = n % (792 - 782);
        n = n / (435 - 425);
        b = n % (679 - 669);
        cout << a;
        cout << b;
    }
    if (n <= 999 && 100 <= n) {
        a = n % (640 - 630);
        cout << a;
        n = n / (908 - 898);
        b = n % 10;
        n = n / 10;
        cout << b;
        c = n % 10;
        cout << c;
    }
    if (n <= (10416 - 417) && (1726 - 726) <= n) {
        a = n % 10;
        cout << a;
        n = n / 10;
        b = n % 10;
        cout << b;
        n = n / 10;
        c = n % 10;
        cout << c;
        n = n / 10;
        d = n % 10;
        cout << d;
    }
    if (n == 10000)
        cout << "00001";
    return 0;
}

