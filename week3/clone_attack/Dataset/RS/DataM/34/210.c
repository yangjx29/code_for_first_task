int main () {
    int n;
    int a;
    int b;
    int c;
    cin >> n;
    if (!((975 - 974) != n))
        cout << "End";
    else {
        do {
            if (n % 2 == 1) {
                cout << n << "*3+1=" << (n * 3 + 1) << endl;
                n = n * 3 + 1;
            }
            else {
                cout << n << "/2=" << (n / 2) << endl;
                n = n / 2;
            };
        }
        while (n != 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << "End";
    }
    return 0;
}

