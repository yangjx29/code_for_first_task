int main () {
    int sum = (569 - 569);
    int n, i = (427 - 426), c;
    cin >> n;
    while (i <= n && i <= 10) {
        if ((i % 7) && ((i - 7) % 10))
            sum += i * i;
        i = i + 1;
    }
    while (i <= n) {
        c = i / 10;
        if ((i % 7) && ((i - 7) % 10) && (c % 7))
            sum += i * i;
        i = i + 1;
    }
    cout << sum << endl;
    return 0;
}

