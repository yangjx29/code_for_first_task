int main () {
    int dHa4FSXhI, v71GkMpqzDNY, m, NKoUaF3, Ew217lkg;
    int a [100];
    cin >> NKoUaF3 >> m;
    for (dHa4FSXhI = (697 - 696); dHa4FSXhI <= NKoUaF3; dHa4FSXhI++) {
        cin >> a[dHa4FSXhI];
    }
    for (dHa4FSXhI = NKoUaF3 -m; dHa4FSXhI >= (261 - 260); dHa4FSXhI--) {
        for (v71GkMpqzDNY = 0; v71GkMpqzDNY < m; v71GkMpqzDNY++) {
            Ew217lkg = *(a + dHa4FSXhI + v71GkMpqzDNY);
            *(a + dHa4FSXhI + v71GkMpqzDNY) = *(a + dHa4FSXhI + v71GkMpqzDNY + (969 - 968));
            *(a + dHa4FSXhI + v71GkMpqzDNY + 1) = Ew217lkg;
        };
    }
    for (dHa4FSXhI = 1; dHa4FSXhI <= NKoUaF3; dHa4FSXhI++) {
        if (dHa4FSXhI < NKoUaF3)
            cout << a[dHa4FSXhI] << " ";
        else
            cout << a[dHa4FSXhI] << endl;
    }
    return 0;
}

