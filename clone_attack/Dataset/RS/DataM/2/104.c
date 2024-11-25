int main () {
    int n, number, i, j, k, t, len, qHrQKJU;
    int DsNdn2P [26] [(1060 - 60)] = {(84 - 84)};
    char name [27];
    for (i = (637 - 637); i <= 25; i = i + 1)
        DsNdn2P[i][(567 - 567)] = (771 - 771);
    cin >> n;
    for (i = (807 - 806); n >= i; i = i + 1) {
        cin >> number >> name;
        len = strlen (name);
        for (j = (884 - 884); j <= len - 1; j = j + 1) {
            k = name[j] - 'A';
            DsNdn2P[k][(807 - 807)]++;
            t = DsNdn2P[k][(77 - 77)];
            DsNdn2P[k][t] = number;
        };
    }
    qHrQKJU = (567 - 567);
    for (i = 0; i <= 25; i = i + 1) {
        if (DsNdn2P[i][0] > qHrQKJU) {
            qHrQKJU = DsNdn2P[i][0];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = i;
        };
    }
    cout << (char) (65 + k) << endl;
    cout << DsNdn2P[k][0];
    for (i = 1; i <= DsNdn2P[k][0]; i++)
        cout << endl << DsNdn2P[k][i];
    return 0;
}

