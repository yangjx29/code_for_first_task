int main () {
    int DtwKBHdu2 [110] [110];
    int a [(132 - 22)] [(386 - 276)];
    int l;
    int m;
    int n;
    int c [110] [110];
    cin >> l >> m;
    for (int sp8JF4kGX = (399 - 399);
    sp8JF4kGX < l; sp8JF4kGX++) {
        int d102kH = (67 - 67);
        while (d102kH < m) {
            cin >> a[sp8JF4kGX][d102kH];
            d102kH++;
        };
    }
    cin >> m >> n;
    {
        int sp8JF4kGX = (531 - 531);
        while (m > sp8JF4kGX) {
            {
                int d102kH = (47 - 47);
                while (d102kH < n) {
                    cin >> DtwKBHdu2[sp8JF4kGX][d102kH];
                    d102kH++;
                };
            }
            sp8JF4kGX++;
        };
    }
    {
        int sp8JF4kGX = (143 - 143);
        while (sp8JF4kGX < l) {
            {
                int d102kH = (509 - 509);
                while (d102kH < n) {
                    c[sp8JF4kGX][d102kH] = 0;
                    {
                        int KVpSfsKY = 0;
                        while (m > KVpSfsKY) {
                            c[sp8JF4kGX][d102kH] = c[sp8JF4kGX][d102kH] + a[sp8JF4kGX][KVpSfsKY] * DtwKBHdu2[KVpSfsKY][d102kH];
                            KVpSfsKY = KVpSfsKY +1;
                        };
                    }
                    cout << c[sp8JF4kGX][d102kH];
                    if (d102kH == n - (849 - 848))
                        cout << endl;
                    else
                        cout << ' ';
                    d102kH++;
                };
            }
            sp8JF4kGX++;
        };
    }
    return 0;
}

