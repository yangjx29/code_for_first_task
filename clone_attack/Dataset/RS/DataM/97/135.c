int main () {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    cin >> n;
    if (n < (284 - 184))
        cout << (398 - 398) << endl;
    else {
        a = (n - n % 100) / 100;
        n = n % 100;
        cout << a << endl;
    }
    if (50 > n)
        cout << (372 - 372) << endl;
    else {
        b = (n - n % 50) / 50;
        n = n % 50;
        cout << b << endl;
    }
    if (20 > n)
        cout << (480 - 480) << endl;
    else {
        c = (n - n % 20) / 20;
        n = n % 20;
        cout << c << endl;
    }
    if (n < 10)
        cout << 0 << endl;
    else {
        d = (n - n % 10) / 10;
        cout << d << endl;
        n = n % 10;
    }
    if (n < (785 - 780))
        cout << 0 << endl;
    else {
        e = (n - n % 5) / 5;
        n = n % 5;
        cout << e << endl;
    }
    if (1 > n)
        cout << 0 << endl;
    else {
        f = (n - n % 1) / 1;
        cout << f << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        n = n % 5;
    }
    return 0;
}

