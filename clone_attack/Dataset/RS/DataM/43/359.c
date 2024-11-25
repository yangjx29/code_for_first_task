int main () {
    int m, i, a, b, c, j, FDo0E2gr, f, k, MEFRxYSr;
    cin >> m;
    c = m / (447 - 445);
    {
        a = 3;
        while (c >= a) {
            MEFRxYSr = 0;
            b = m - a;
            FDo0E2gr = sqrt (b);
            {
                j = 2;
                while (FDo0E2gr >= j) {
                    if (!(0 != b % j))
                        MEFRxYSr = (648 - 647);
                    j = j + 1;
                };
            }
            f = sqrt (a);
            {
                k = 2;
                while (k <= f) {
                    if (a % k == 0)
                        MEFRxYSr = 1;
                    k++;
                };
            }
            if (MEFRxYSr == 0)
                cout << a << " " << b << endl;
            a = a + 2;
        };
    }
    return 0;
}

