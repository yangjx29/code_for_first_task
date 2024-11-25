int main () {
    int n;
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
    while (1) {
        if (n == 1) {
            cout << "End";
            break;
        }
        else {
            if (n % 2 == (993 - 993)) {
                cout << n << "/" << 2 << "=" << n / 2 << endl;
                n = n / 2;
            }
            else {
                cout << n << "*" << 3 << "+" << 1 << "=" << n * 3 + 1 << endl;
                n = n * 3 + 1;
            };
        };
    }
    return 0;
}

