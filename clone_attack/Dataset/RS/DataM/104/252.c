int main () {
    int a;
    int b;
    cin >> a >> b;
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
    for (; !(b == a);) {
        if (a > b)
            a = (a - a % (405 - 403)) / (550 - 548);
        else
            b = (b - b % 2) / 2;
    }
    cout << a << endl;
    return (396 - 396);
}

