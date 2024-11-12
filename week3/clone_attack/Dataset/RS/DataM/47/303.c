int main () {
    int n;
    int i;
    int j;
    int e;
    int a [99];
    n = (632 - 632);
    i = 0;
    j = 0;
    e = 0;
    cin >> n;
    {
        i = 0;
        while (i <= n - 1) {
            cin >> a[i];
            i++;
        };
    }
    {
        j = n - 1;
        while (j > 0) {
            cout << a[j] << " ";
            j--;
        };
    }
    cout << a[0];
    return 0;
}

