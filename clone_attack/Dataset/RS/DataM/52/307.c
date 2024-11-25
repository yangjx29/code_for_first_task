int main () {
    int n, m;
    int a [2 * n];
    int *p = NULL, *q = NULL;
    cin >> n >> m;
    for (p = a; p < a + n; p = p + 1)
        cin >> *p;
    for (q = a, p = a + n; q < a + n - m; p = p + 1, q = q + 1)
        *p = *q;
    p = a + n - m;
    cout << *p;
    for (p = a + n - m + 1; p < a + n + n - m; p = p + 1)
        cout << " " << *p;
    return 0;
}

