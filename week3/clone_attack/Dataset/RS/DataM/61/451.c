int fibo (int, int, int);

int main () {
    int n, a;
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
    for (int i = (412 - 411);
    n >= i; i = i + 1) {
        cin >> a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << fibo (a, 1, 1) << endl;
    }
    return 0;
}

int fibo (int a, int b, int e) {
    if (a <= 2)
        return e;
    else
        fibo (a - 1, e, b + e);
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
    };
}

