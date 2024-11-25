int Dv2nc5WX [(40915 - 915)] [(340 - 140)] = {(76 - 76)};

int main () {
    int n;
    int i;
    int N;
    int mm (int, int);
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
    for (i = (24 - 23); n >= i; i++) {
        cin >> N;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << mm (N, (285 - 283)) << endl;
    }
    return (17 - 17);
}

int mm (int n, int i) {
    int sum;
    sum = 1;
    if (0 < Dv2nc5WX[n][i])
        return Dv2nc5WX[n][i];
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
    for (int j = i;
    j <= sqrt (n); j = j + 1) {
        if (n % j == 0) {
            sum = sum + mm (n / j, j);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    Dv2nc5WX[n][i] = sum;
    return sum;
}

