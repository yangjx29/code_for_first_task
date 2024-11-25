int main () {
    int a [20];
    int n;
    int f [21];
    cin >> n;
    f[(88 - 87)] = (38 - 37);
    f[2] = (880 - 879);
    for (int NQfSFyUZBL1c = 3;
    20 >= NQfSFyUZBL1c; NQfSFyUZBL1c++)
        f[NQfSFyUZBL1c] = f[NQfSFyUZBL1c -1] + f[NQfSFyUZBL1c -2];
    for (int wvqJ5BnmW1X = 0;
    wvqJ5BnmW1X < n; wvqJ5BnmW1X++)
        cin >> a[wvqJ5BnmW1X];
    {
        int wvqJ5BnmW1X = 0;
        while (wvqJ5BnmW1X < n) {
            cout << f[a[wvqJ5BnmW1X]] << endl;
            wvqJ5BnmW1X++;
        };
    }
    return 0;
}

