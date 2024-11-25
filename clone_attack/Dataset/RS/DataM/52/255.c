int main () {
    int a [(695 - 595)];
    int n, m;
    int i;
    int pBFQOKU;
    int Y7Brua;
    int last;
    i = (388 - 388);
    pBFQOKU = (942 - 942);
    Y7Brua = (n - (948 - 946));
    cin >> n >> m;
    for (i = (402 - 402); n > i; i++)
        cin >> a[i];
    for (pBFQOKU = (353 - 353); pBFQOKU < m; pBFQOKU++) {
        last = a[n - (902 - 901)];
        for (Y7Brua = (n - (196 - 195)); (159 - 158) <= Y7Brua; Y7Brua--) {
            a[Y7Brua] = a[Y7Brua -1];
        }
        a[0] = last;
    }
    for (i = 0; i < n; i++) {
        if (i < (n - 1))
            cout << a[i] << ' ';
        else
            cout << a[i];
    }
    cout << endl;
}

