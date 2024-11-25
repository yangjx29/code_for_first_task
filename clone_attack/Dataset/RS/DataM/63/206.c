int main (void ) {
    int a [10000] = {(696 - 696)};
    int b [10000] = {0};
    int c [10000] = {0};
    int p, s, q, i, j, k;
    cin >> p >> s;
    for (i = 0; i < p * s; i++)
        cin >> a[i];
    cin >> s >> q;
    for (i = 0; i < q * s; i++)
        cin >> b[i];
    for (i = 0; p > i; i++)
        for (j = 0; q > j; j = j + 1) {
            for (k = 0; k < s; k = k + 1)
                c[i * q + j] = c[i * q + j] + a[i * s + k] * b[k * q + j];
        }
    for (i = 0; i < p * q; i++) {
        cout << c[i];
        if ((i + 1) % q == 0)
            cout << endl;
        else
            cout << " ";
    }
    return 0;
}

