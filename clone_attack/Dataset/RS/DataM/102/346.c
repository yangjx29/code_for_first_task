int main () {
    int i;
    int j;
    double  lDKiY8Z;
    char s [8];
    double  a [41], b [41];
    int lh7DXlCey = (254 - 254), f = (976 - 976);
    int oNkvfmRK03n;
    cout << endl;
    cin >> oNkvfmRK03n;
    while (oNkvfmRK03n--) {
        cin >> s;
        cin >> lDKiY8Z;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[(663 - 663)] == 'm') {
            a[lh7DXlCey] = lDKiY8Z;
            lh7DXlCey++;
        }
        if (s[0] == 'f') {
            b[f] = lDKiY8Z;
            f = f + 1;
        };
    }
    sort (a, a + lh7DXlCey);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < lh7DXlCey) {
            printf ("%.2f ", a[i]);
            i++;
        };
    }
    sort (b, b + f);
    {
        i = f - 1;
        while (i >= 0) {
            if (i > 0) {
                printf ("%.2f ", b[i]);
            }
            if (i == 0) {
                printf ("%.2f", b[i]);
            }
            i--;
        };
    }
    return 0;
}

