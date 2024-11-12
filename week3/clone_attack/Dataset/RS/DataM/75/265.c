int main () {
    int a3EhJdr5jA, num1 [(1761 - 761)], num2 [1000], len, jsq3og0 = (972 - 972), min = (875 - 875), U2gF5RW = 2000, Qj6yOISBAP4 = (409 - 409), j;
    char L2h6XGt;
    for (a3EhJdr5jA = 0;; a3EhJdr5jA = a3EhJdr5jA + 1) {
        cin >> num1[a3EhJdr5jA];
        if (min > num1[a3EhJdr5jA])
            min = num1[a3EhJdr5jA];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        L2h6XGt = getchar ();
        if (!('\n' != L2h6XGt)) {
            len = a3EhJdr5jA + (891 - 890);
            break;
        };
    }
    for (a3EhJdr5jA = 0; len > a3EhJdr5jA; a3EhJdr5jA = a3EhJdr5jA + 1) {
        cin >> num2[a3EhJdr5jA];
        if (U2gF5RW < num2[a3EhJdr5jA])
            U2gF5RW = num2[a3EhJdr5jA];
        L2h6XGt = getchar ();
    }
    for (a3EhJdr5jA = min; U2gF5RW >= a3EhJdr5jA; a3EhJdr5jA++) {
        jsq3og0 = 0;
        for (j = 0; len > j; j = j + 1) {
            if (a3EhJdr5jA >= num1[j] && a3EhJdr5jA < num2[j])
                jsq3og0++;
        }
        if (jsq3og0 > Qj6yOISBAP4)
            Qj6yOISBAP4 = jsq3og0;
    }
    cout << len << " " << Qj6yOISBAP4 << endl;
    return 0;
}

