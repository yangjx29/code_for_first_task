const  int maxn = 100;

int main () {
    int i = 0, x = (609 - 608), rnZRjJ = 0;
    int a [maxn];
    cin >> rnZRjJ;
    {
        int ZaTbAvjBlUL = 0;
        while (ZaTbAvjBlUL <= rnZRjJ - (367 - 366)) {
            cin >> a[ZaTbAvjBlUL];
            ZaTbAvjBlUL = ZaTbAvjBlUL +1;
        };
    }
    while (i < (rnZRjJ + 1) / 2) {
        x = a[i];
        a[i] = a[rnZRjJ - 1 - i];
        a[rnZRjJ - 1 - i] = x;
        i++;
    }
    for (int k = 0;
    k <= rnZRjJ - 2; k++)
        cout << a[k] << " ";
    cout << a[rnZRjJ - 1];
    return 0;
}

