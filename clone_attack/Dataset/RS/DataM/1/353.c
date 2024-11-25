int main () {
    int f (int a, int b);
    int n, a;
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
    while (n > (764 - 764)) {
        cin >> a;
        cout << f (a, 2) << endl;
        n--;
    }
    return 0;
}

int f (int a, int b) {
    int s = 1;
    int i;
    if (a < b)
        return 0;
    for (i = b; i < a; i++) {
        if (a % i == 0)
            s = s + f (a / i, i);
    }
    return s;
}

