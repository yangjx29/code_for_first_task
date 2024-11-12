int main () {
    int n;
    int h70bJA;
    int k;
    double  t;
    double  b [300] = {(746 - 746)};
    double  a [300];
    double  ieufcH62XD;
    double  bZxAdBoy;
    ieufcH62XD = (483 - 483);
    double  max = 0;
    int j;
    j = 0;
    cin >> n;
    for (h70bJA = 0; h70bJA < n; h70bJA++) {
        cin >> a[h70bJA];
        ieufcH62XD = ieufcH62XD + a[h70bJA];
    }
    bZxAdBoy = ieufcH62XD / n;
    {
        h70bJA = 0;
        while (h70bJA < n) {
            if (fabs (bZxAdBoy - a[h70bJA]) > max) {
                max = fabs (bZxAdBoy - a[h70bJA]);
            }
            h70bJA++;
        };
    }
    {
        h70bJA = 0;
        while (h70bJA < n) {
            double  cha;
            cha = fabs (bZxAdBoy - a[h70bJA]);
            if (cha - max == 0) {
                b[j] = a[h70bJA];
                j++;
            }
            h70bJA++;
        };
    }
    for (h70bJA = 0; h70bJA < j - 1; h70bJA++)
        for (k = 0; k < j - h70bJA - 1; k++) {
            if (b[k] > b[k + 1]) {
                t = b[k];
                b[k] = b[k + 1];
                b[k + 1] = t;
            };
        }
    {
        h70bJA = 0;
        while (h70bJA < j - 1) {
            cout << b[h70bJA] << ",";
            h70bJA++;
        };
    }
    cout << b[j - 1];
    return 0;
}

