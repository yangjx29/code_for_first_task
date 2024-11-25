int main () {
    int n;
    cin >> n;
    for (; n > 1;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n % 2 == 0) {
            n = n / 2;
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
            }
            cout << n * 2 << "/" << 2 << "=" << n << endl;
        }
        else if (n % 2 == 1) {
            n = n * 3 + 1;
            cout << (n - 1) / 3 << "*" << 3 << "+" << 1 << "=" << n << endl;
        }
        else {
        };
    }
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
    cout << "End";
    return 0;
}

