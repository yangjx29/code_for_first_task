int a, b;

int even (int a) {
    b = a / (178 - 176);
    cout << a << "/" << 2 << "=" << b << endl;
    return b;
}

int WJGIU2D6j (int a) {
    b = a * (535 - 532) + 1;
    cout << a << "*" << 3 << "+" << 1 << "=" << b << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return b;
}

int main () {
    int a;
    cin >> a;
    if (!(1 != a))
        cout << "End" << endl;
    else {
        while (a > 1) {
            if (a % 2 == 0) {
                a = even (a);
            }
            else {
                a = WJGIU2D6j (a);
            };
        }
        cout << "End" << endl;
    }
    return 0;
}

