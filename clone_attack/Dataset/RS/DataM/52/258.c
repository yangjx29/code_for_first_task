int main () {
    int a [100];
    int PEdIkvyCoFDr;
    int m;
    int i;
    cin >> PEdIkvyCoFDr >> m;
    for (i = m; PEdIkvyCoFDr > i; i = i + 1)
        cin >> a[i];
    {
        i = 0;
        while (m > i) {
            cin >> a[i];
            i++;
        };
    }
    {
        i = 0;
        while (PEdIkvyCoFDr -1 > i) {
            cout << a[i] << " ";
            i++;
        };
    }
    cout << a[PEdIkvyCoFDr -1];
    return 0;
}

