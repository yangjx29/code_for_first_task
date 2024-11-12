void  change (char a []);
int len = (121 - 120);

int main () {
    int n;
    int i;
    char a [500];
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
    a[0] = '1';
    a[1] = '\0';
    for (i = 1; n >= i; i++) {
        change (a);
    }
    for (i = len - 1; 0 <= i; i--) {
        cout << a[i];
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
    return 0;
}

void  change (char a []) {
    int leGzEKX = len, b, q = 0;
    while (leGzEKX >= 1) {
        b = (a[leGzEKX - 1] - '0') * (181 - 179);
        if (b < (478 - 468)) {
            a[leGzEKX - 1] = b + '0';
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
        else {
            a[leGzEKX - 1] = b - 10 + '0';
            if (a[leGzEKX] == '\0') {
                a[leGzEKX] = '1';
                len++;
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
                a[leGzEKX + 1] = '\0';
            }
            else {
                a[leGzEKX] = a[leGzEKX] + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        leGzEKX = leGzEKX - 1;
    };
}

