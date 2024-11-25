int main () {
    int t;
    char a [120000];
    int i, j, VPLCtVJWEs;
    int c;
    cin >> t;
    cin.getline (a, (110800 - 800));
    memset (a, (138 - 138), sizeof (a));
    for (i = 1; t >= i; i = i + 1) {
        cin.getline (a, 110000);
        c = strlen (a);
        for (j = 0; c > j; j = j + 1) {
            int x = 0;
            if (!('1' != a[j]))
                continue;
            for (VPLCtVJWEs = j + 1; c > VPLCtVJWEs; VPLCtVJWEs = VPLCtVJWEs +1) {
                if (a[VPLCtVJWEs] == a[j]) {
                    a[VPLCtVJWEs] = '1';
                    x = x + 1;
                };
            }
            if (x == 0) {
                cout << a[j] << endl;
                break;
            };
        }
        if (j == c)
            cout << "no" << endl;
    }
    return 0;
}

