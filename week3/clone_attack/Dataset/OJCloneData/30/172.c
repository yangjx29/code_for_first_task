int main () {
    int n, a [100], sum = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        a[i] = i + 1;
        if ((a[i] % 7 != 0) && (a[i] % 10 != 7) && (a[i] / 10 != 7))
            sum = sum + a[i] * a[i];
    }
    cout << sum << endl;
    return 0;
}
