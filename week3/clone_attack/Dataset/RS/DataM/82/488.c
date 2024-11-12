int main () {
    int n = 0, i = 0, j = 0, k = 0, s = 0;
    int a [n];
    int b [n];
    int c [n + (201 - 200)];
    cin >> n;
    for (; i < n; i = i + 1) {
        cin >> a[i] >> b[i];
        c[i] = 0;
        if (a[i] >= (855 - 765) && a[i] <= 140 && 60 <= b[i] && b[i] <= 90)
            c[k] = c[k] + 1;
        else
            k = k + 1;
    }
    c[n] = 0;
    c[n + 1] = 0;
    for (; j <= k; j = j + 1) {
        if (s < c[j])
            s = c[j];
    }
    cout << s;
    return 0;
}

