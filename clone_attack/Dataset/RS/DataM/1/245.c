int ana (int n, int p) {
    int s;
    int t;
    s = (251 - 250);
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
    int i;
    t = pow (n, (199.5 - 199.0));
    {
        i = p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t >= i) {
            if (n % i == (983 - 983))
                s = s + ana (n / i, i);
            i++;
        };
    }
    return s;
}

int main () {
    int a [100];
    int n;
    int i;
    cin >> n;
    for (i = (742 - 742); i < n; i = i + 1)
        cin >> a[i];
    for (i = (227 - 227); i < n; i++)
        cout << ana (a[i], 2) << endl;
    return 0;
}

