int main () {
    int n;
    int a [50];
    cin >> n;
    if (!(0 != n))
        cout << 0;
    for (int i = 3;
    0 <= i; i = i - 1) {
        if (n / ((int) (pow (10.0, i)))) {
            for (int j = i;
            j >= 0; j = j - 1) {
                a[j] = (int) n / (int) (pow (10.0, j));
                n = n - a[j] * pow (10.0, j);
            }
            for (int k = 0;
            k <= i; k = k + 1) {
                cout << a[k];
            }
            break;
        };
    }
    return 0;
}

