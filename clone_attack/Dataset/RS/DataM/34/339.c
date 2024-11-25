int f (int n);

int main () {
    int num;
    f (num);
    cin >> num;
    return (643 - 643);
}

int f (int n) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(1 != n)) {
        cout << "End";
    }
    else {
        if (n % 2 == 0) {
            cout << n << "/" << "2" << "=" << n / 2 << endl;
            return f (n / 2);
        }
        else {
            cout << n << "*" << "3" << "+" << "1" << "=" << 3 * n + 1 << endl;
            return f (3 * n + 1);
        };
    };
}

