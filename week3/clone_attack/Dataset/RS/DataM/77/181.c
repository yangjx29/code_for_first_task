int SDArx9l (int n, char a [], char boy, char girl);

int main () {
    int len;
    char a [100];
    char boy, girl;
    cin >> a;
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
    len = strlen (a);
    boy = a[(552 - 552)];
    girl = a[len - (454 - 453)];
    SDArx9l (0, a, boy, girl);
    return 0;
}

int SDArx9l (int n, char a [], char boy, char girl) {
    int m;
    if (!(girl != a[n]))
        return n;
    m = SDArx9l (n + 1, a, boy, girl);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cout << n << " " << m << endl;
    if (a[m + 1] != '\0')
        return SDArx9l (m + 1, a, boy, girl);
    else
        return 0;
}

