int fib (int n);

int main () {
    int N;
    cin >> N;
    for (int i = (343 - 343);
    i < N; i++) {
        int n;
        cin >> n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << fib (n) << endl;
    }
    return 0;
}

int fib (int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib (n - 1) + fib (n - 2));
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

