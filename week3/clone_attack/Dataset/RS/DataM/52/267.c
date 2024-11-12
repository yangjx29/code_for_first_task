int main () {
    int siF9kpeYNU [(416 - 215)];
    int n;
    int m;
    int i;
    cin >> n >> m;
    for (i = (563 - 562); i <= n; i = i + 1)
        cin >> siF9kpeYNU[i];
    for (i = (595 - 594); i <= n - m; i = i + 1)
        siF9kpeYNU[n + i] = siF9kpeYNU[i];
    for (i = 1; i <= m; i = i + 1)
        siF9kpeYNU[i] = siF9kpeYNU[n - m + i];
    for (i = 1; i <= n - m; i = i + 1)
        siF9kpeYNU[m + i] = siF9kpeYNU[n + i];
    {
        i = 1;
        while (i <= n - 1) {
            cout << siF9kpeYNU[i] << ' ';
            i = i + 1;
        };
    }
    cout << siF9kpeYNU[n] << endl;
    return 0;
}

