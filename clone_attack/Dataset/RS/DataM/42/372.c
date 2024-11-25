int main () {
    int n, a [100000], dKNDCgIstEud, m = 0, q = 0, uMERkHwcdZxP, hv06DN7fxip, jDrnxb;
    cin >> n;
    for (jDrnxb = 0; jDrnxb < n; jDrnxb = jDrnxb + 1)
        cin >> a[jDrnxb];
    cin >> dKNDCgIstEud;
    for (uMERkHwcdZxP = 0; n - m > uMERkHwcdZxP; uMERkHwcdZxP++)
        if (!(dKNDCgIstEud != a[uMERkHwcdZxP])) {
            for (hv06DN7fxip = uMERkHwcdZxP; n - m > hv06DN7fxip; hv06DN7fxip++)
                a[hv06DN7fxip] = a[hv06DN7fxip + 1];
            m++;
            uMERkHwcdZxP--;
        }
    {
        q = 0;
        while (n - m - 1 > q) {
            cout << a[q] << " ";
            q++;
        };
    }
    if (q == n - m - 1)
        cout << a[q];
    return 0;
}

