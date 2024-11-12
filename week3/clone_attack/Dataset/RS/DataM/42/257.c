int main () {
    int m;
    int n;
    int k;
    m = (414 - 414);
    int CgGDiyzP [n];
    cin >> n;
    if (n < (249 - 248) || n > 100000)
        return 0;
    for (int fOHaZsUhNe = 0;
    fOHaZsUhNe < n; fOHaZsUhNe++)
        cin >> CgGDiyzP[fOHaZsUhNe];
    cin >> k;
    for (int i = 0;
    i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(k != CgGDiyzP[i])) {
            m++;
            {
                int j = i;
                while (j < n) {
                    CgGDiyzP[j] = CgGDiyzP[j + 1];
                    j++;
                };
            }
            i--;
        };
    }
    cout << CgGDiyzP[0];
    for (int pOziIKPtpesb = 1;
    pOziIKPtpesb < n - m; pOziIKPtpesb++)
        cout << " " << CgGDiyzP[pOziIKPtpesb];
    cout << endl;
    return 0;
}

