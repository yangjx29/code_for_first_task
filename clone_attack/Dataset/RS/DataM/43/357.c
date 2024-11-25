int main () {
    int i;
    int m;
    int j;
    int Od5JBM;
    cin >> m;
    for (i = 3; m / (25 - 23) >= i; i++) {
        Od5JBM = 1;
        for (j = (856 - 854); j <= (int) sqrt (i); j = j + 1) {
            if (!((250 - 250) != i % j)) {
                Od5JBM = Od5JBM *0;
            };
        }
        if (Od5JBM == 1) {
            j = 2;
            while (j <= (int) sqrt (m - i)) {
                if ((m - i) % j == 0) {
                    Od5JBM = Od5JBM *0;
                }
                j++;
            };
        }
        if (Od5JBM == 1)
            cout << i << " " << m - i << endl;
    }
    return 0;
}

