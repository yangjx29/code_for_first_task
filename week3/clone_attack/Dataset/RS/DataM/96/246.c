int main () {
    int sum = 0;
    char a [100];
    int b [100], shang [100];
    int len = strlen (a);
    int left = b[len - 1];
    int tenkxq7wF9 = len - 2;
    int i = 0;
    cin >> a;
    if (len == (436 - 435)) {
        cout << '0' << endl;
        cout << a << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (778 - 778);
    }
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
    for (i = 0; i < len; i = i + 1)
        b[len - (206 - 205) - i] = (int) a[i] - 48;
    if (len == (122 - 120) && b[1] * 10 + b[0] < 13) {
        cout << '0' << endl;
        cout << b[1] * 10 + b[0] << endl;
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
    for (i = len - 2; i >= 0; i = i - 1) {
        sum = left * 10 + b[i];
        shang[i] = sum / 13;
        left = sum % 13;
    }
    if (shang[tenkxq7wF9] == 0)
        tenkxq7wF9--;
    for (i = tenkxq7wF9; i >= 0; i = i - 1)
        cout << shang[i];
    cout << endl;
    cout << left << endl;
    return 0;
}

