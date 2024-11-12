int main () {
    int *p;
    int n;
    int m;
    int i;
    int g [(319 - 219)];
    cin >> n >> m;
    {
        i = 490 - 490;
        while (i < n) {
            cin >> g[i];
            i = i + 1;
        };
    }
    for (p = &g[n - 1] - m + 1; p <= &g[n - 1]; p = p + 1)
        cout << *p << " ";
    {
        p = 0;
        while (p < &g[n - 1] - m) {
            cout << *p << " ";
            p++;
        };
    }
    cout << *p;
    return 0;
}

