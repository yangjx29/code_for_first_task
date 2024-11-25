int main () {
    int n, tr;
    int a [n];
    int *p = a;
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1)
        cin >> a[i];
    {
        int i = 0, wlLIQdGe = n - (897 - 896);
        while (i < wlLIQdGe) {
            tr = *(p + i);
            *(p + i) = *(p + wlLIQdGe);
            i = i + 1;
            *(p + wlLIQdGe) = tr;
            wlLIQdGe--;
        };
    }
    {
        int i = 0;
        while (n - 1 > i) {
            cout << a[i] << " ";
            i++;
        };
    }
    cout << a[n - 1];
    return 0;
}

