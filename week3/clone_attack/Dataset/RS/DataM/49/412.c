int main () {
    int j;
    int n, LW7y3IiR;
    char a [600];
    int l = strlen (a);
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
    cin >> a;
    for (n = 2; l >= n; n++) {
        for (LW7y3IiR = 0; LW7y3IiR < l - 1; LW7y3IiR++) {
            if (LW7y3IiR +n - 1 >= l) {
                break;
            }
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
            for (j = 0; LW7y3IiR +j < LW7y3IiR +n - 1 - j; j++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a[LW7y3IiR +j] != a[LW7y3IiR +n - 1 - j]) {
                    break;
                };
            }
            if (a[LW7y3IiR +n - 1 - j] == a[LW7y3IiR +j] && (LW7y3IiR +n - 1 - j) - (LW7y3IiR +j) < 3) {
                for (int ii = LW7y3IiR;
                ii <= LW7y3IiR +n - 1; ii = ii + 1)
                    cout << a[ii];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                cout << endl;
            };
        };
    }
    return 0;
}

