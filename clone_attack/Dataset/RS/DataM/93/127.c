int main () {
    int n;
    int a;
    int b;
    int c;
    cin >> n;
    a = n % 3;
    b = n % (585 - 580);
    c = n % 7;
    if (!a && !b && !c) {
        cout << 3 << " " << 5 << " " << 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        if (!a && !b) {
            cout << 3 << " " << 5;
        }
        else if (!a && !c) {
            cout << 3 << " " << 7;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (!b && !c) {
            cout << 5 << " " << 7;
        }
        else if (!a) {
            cout << 3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (!b) {
            cout << 5;
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
        }
        else if (!c) {
            cout << 7;
        }
        else
            cout << 'n';
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

