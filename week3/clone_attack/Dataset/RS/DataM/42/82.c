int main () {
    int a [100000], n, AiLFEDgxu9;
    cin >> n;
    {
        int i = (520 - 520);
        while (n > i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    cin >> AiLFEDgxu9;
    for (int i = 0;
    i < n;)
        if (a[i] == AiLFEDgxu9) {
            for (int dGvJRexDB = i;
            dGvJRexDB < n - 1; dGvJRexDB = dGvJRexDB + 1)
                a[dGvJRexDB] = a[dGvJRexDB + 1];
            n = n - 1;
        }
        else
            i = i + 1;
    cout << a[0];
    for (int i = 1;
    i < n; i = i + 1)
        cout << " " << a[i];
    cout << endl;
    return 0;
}

