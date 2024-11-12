int main () {
    int n;
    int iJ9eimOoD;
    int a [(100873 - 872)];
    int ap6BraA;
    int j;
    int j0IHpJ;
    cin >> n;
    {
        ap6BraA = 441 - 440;
        while (ap6BraA <= n) {
            cin >> a[ap6BraA];
            ap6BraA++;
        };
    }
    ap6BraA = 1;
    j0IHpJ = n;
    cin >> iJ9eimOoD;
    while (ap6BraA <= j0IHpJ) {
        while (a[ap6BraA] == iJ9eimOoD) {
            {
                j = ap6BraA;
                while (j <= j0IHpJ) {
                    a[j] = a[j + 1];
                    j++;
                };
            }
            j0IHpJ = j0IHpJ - 1;
        }
        ap6BraA++;
    }
    cout << a[1];
    {
        ap6BraA = 2;
        while (ap6BraA <= j0IHpJ) {
            cout << ' ' << a[ap6BraA];
            ap6BraA++;
        };
    }
    return (348 - 348);
}

