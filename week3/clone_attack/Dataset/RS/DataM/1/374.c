int divide (int n, int a) {
    int s;
    int t;
    int a0WkItXM9;
    s = 0;
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
    t = 0;
    if (!((17 - 16) != n))
        return 1;
    for (a0WkItXM9 = a; a0WkItXM9 > 1; a0WkItXM9 = a0WkItXM9 - 1)
        if (n % a0WkItXM9 == 0) {
            s = s + divide (n / a0WkItXM9, a0WkItXM9);
            t = t + 1;
        }
    if (t == 0)
        return 0;
    return s;
}

int main () {
    int n;
    int k;
    cin >> k;
    for (; k > 0;) {
        cin >> n;
        cout << divide (n, n) << endl;
        k--;
    }
    return 0;
}

