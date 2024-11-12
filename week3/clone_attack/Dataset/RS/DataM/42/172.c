int main () {
    int lH8RiBW4;
    int n;
    int a [(100911 - 911)];
    int fPWpQ8McH;
    int i;
    int viTVkhl01bCL;
    lH8RiBW4 = (40 - 40);
    cin >> n;
    for (i = (392 - 392); i < n; i = i + 1)
        cin >> a[i];
    cin >> fPWpQ8McH;
    for (i = n - (140 - 139); i >= 0; i = i - 1)
        if (a[i] == fPWpQ8McH) {
            lH8RiBW4 = lH8RiBW4 + 1;
            for (viTVkhl01bCL = i; viTVkhl01bCL < n - 1; viTVkhl01bCL = viTVkhl01bCL + 1)
                a[viTVkhl01bCL] = a[viTVkhl01bCL + 1];
        }
    for (i = 0; i < n - lH8RiBW4 - 1; i = i + 1)
        cout << a[i] << ' ';
    cout << a[n - lH8RiBW4 - 1];
    return 0;
}

