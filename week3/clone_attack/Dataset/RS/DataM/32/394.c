int main () {
    int m;
    int n;
    int LTormNjaDq7;
    int j;
    int k;
    int c [(834 - 732)] = {0};
    int fgXY3Uq8A19K [102] = {0};
    int kzKa0951hv [102] = {0};
    int l1;
    int l2;
    char qYdfEbJ4w0 [102], b [102];
    cin >> n;
    cin.get ();
    for (LTormNjaDq7 = 1; LTormNjaDq7 <= n; LTormNjaDq7 = LTormNjaDq7 +1) {
        memset (qYdfEbJ4w0, 0, sizeof (qYdfEbJ4w0));
        memset (b, 0, sizeof (b));
        memset (c, 0, sizeof (c));
        memset (fgXY3Uq8A19K, 0, sizeof (fgXY3Uq8A19K));
        memset (kzKa0951hv, 0, sizeof (kzKa0951hv));
        cin.getline (qYdfEbJ4w0, 100);
        cin.getline (b, 100);
        cin.get ();
        l1 = strlen (qYdfEbJ4w0);
        for (j = l1 - 1, k = 0; j >= 0, k <= l1 - 1; j--, k = k + 1)
            c[k] = qYdfEbJ4w0[j] - '0';
        l2 = strlen (b);
        {
            j = l2 - 1;
            k = 0;
            while (j >= 0, k <= l2 - 1) {
                fgXY3Uq8A19K[k] = b[j] - '0';
                j = j - 1;
                k = k + 1;
            };
        }
        for (j = 0; j <= 101; j = j + 1) {
            if (c[j] < fgXY3Uq8A19K[j]) {
                kzKa0951hv[j] = c[j] + 10 - fgXY3Uq8A19K[j];
                c[j + 1]--;
            }
            else
                kzKa0951hv[j] = c[j] - fgXY3Uq8A19K[j];
        }
        {
            j = 101;
            while (kzKa0951hv[j] == 0) {
                m = j;
                j = j - 1;
            };
        }
        {
            k = m - 1;
            while (k >= 0) {
                cout << kzKa0951hv[k];
                k--;
            };
        }
        cout << endl;
    }
    return 0;
}

