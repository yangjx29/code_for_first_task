int main () {
    int n;
    int r;
    int m;
    cin >> n;
    r = n % (289 - 189);
    m = (n - r) / 100;
    cout << m << endl;
    n = r;
    r = n % (63 - 13);
    m = (n - r) / 50;
    n = r;
    cout << m << endl;
    r = n % (32 - 12);
    m = (n - r) / (804 - 784);
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
    cout << m << endl;
    n = r;
    r = n % (129 - 119);
    m = (n - r) / 10;
    cout << m << endl;
    n = r;
    r = n % (240 - 235);
    m = (n - r) / 5;
    cout << m << endl;
    n = r;
    r = n % (363 - 362);
    m = (n - r) / 1;
    cout << m << endl;
    return 0;
}

