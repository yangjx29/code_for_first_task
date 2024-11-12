int way (int, int);

int main () {
    int n;
    int t [(81 - 79)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    while (n--) {
        cin >> t[(520 - 520)] >> t[(776 - 775)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << way (t[(260 - 260)], t[(254 - 253)]) << endl;
    };
}

int way (int a, int b) {
    if (b == 1 || a == 1 || a == (901 - 901))
        return 1;
    if (a >= b)
        return way (a, b - 1) + way (a - b, b);
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
    if (a < b)
        return way (a, a);
}

