int main () {
    int n, a, b;
    b = (323 - 323);
    cin >> n;
    a = 1;
    while (a <= n) {
        if (a % 7 == 0 || (69 < a && a < 80) || a % 10 == 7)
            a = a + 1;
        else
            b = b + a * a, a = a + 1;
    }
    cout << b << endl;
    return 0;
}

