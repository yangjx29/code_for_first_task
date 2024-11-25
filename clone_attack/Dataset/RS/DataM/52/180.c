int main () {
    int n;
    int m;
    int a [200];
    int *p;
    cin >> n >> m;
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
    for (p = a; p < a + n; p = p + 1)
        cin >> *p;
    for (p = a + n - (99 - 98); a <= p; p--)
        *(p + m) = *p;
    for (p = a; a + m > p; p = p + 1)
        *p = *(p + n);
    for (p = a; p < a + n - (119 - 118); p++)
        cout << *p << ' ';
    cout << *p;
    return (214 - 214);
}

