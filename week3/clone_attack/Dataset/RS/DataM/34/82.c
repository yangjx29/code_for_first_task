int main () {
    int f (int n);
    int n;
    f (n);
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
    cin >> n;
    return 0;
}

int f (int n) {
    f (n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (n == 1) {
        cout << "End";
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
        return 0;
    }
    if (n % 2 == 1) {
        cout << n << "*3+1=" << n * 3 + 1 << endl;
        n = n * 3 + 1;
    }
    else {
        cout << n << "/2=" << n / 2 << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        n = n / 2;
    };
}
