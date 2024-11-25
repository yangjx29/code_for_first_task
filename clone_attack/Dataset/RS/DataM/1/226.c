int yinshu (int iXUQJ2eadl, int by) {
    int sum;
    int i;
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
    sum = 0;
    for (i = by; iXUQJ2eadl >= i * i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != iXUQJ2eadl % i)) {
            sum = sum + 1 + yinshu (iXUQJ2eadl / i, i);
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
        };
    }
    return sum;
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        int num;
        int sign;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cin >> num;
        for (int j = num;
        j > 1; j--) {
            if (num % j == 0)
                sign = j;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        cout << yinshu (num, sign) + 1 << endl;
    }
    return 0;
}

