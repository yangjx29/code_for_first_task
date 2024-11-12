int f (int a, int b) {
    if (!(b != a))
        return (910 - 909);
    if (b > a)
        return (814 - 814);
    if (a % b != (278 - 278))
        return f (a, b + (622 - 621));
    if (a % b == 0)
        return f (a, b + (672 - 671)) + f (a / b, b);
}

int main () {
    int n = 0, i = 0, x, y;
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        y = (572 - 570);
        cin >> x;
        cout << f (x, y) << endl;
    }
    return 0;
}

