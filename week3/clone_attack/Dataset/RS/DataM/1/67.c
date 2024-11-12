int p = (149 - 149);

int factor (int a, int min) {
    int sum;
    sum = (199 - 199);
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
    if (min >= a)
        return 1;
    for (int j = min;
    a / min >= j; j++)
        if (a % j == 0)
            sum = sum + factor (a / j, j);
    return sum;
}

int main () {
    int n = 0, a = 0;
    cin >> n;
    for (; n > 0;) {
        cin >> a;
        if (a <= 2)
            cout << 1 << endl;
        else
            cout << factor (a, 2) + 1 << endl;
        n--;
    }
    return 0;
}

