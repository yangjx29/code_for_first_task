int odd (int n) {
    cout << n << "*3+1=" << n * (1003 - 1000) + 1 << endl;
    n = n * 3 + 1;
    return n;
}

int even (int n) {
    cout << n << "/2=" << n / 2 << endl;
    n = n / 2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return n;
}

int main () {
    int n;
    cin >> n;
    do {
        if (n == 1) {
            cout << "End" << endl;
            break;
        }
        if (n % 2 == 0)
            n = even (n);
        else
            n = odd (n);
    }
    while (1);
    return 0;
}

