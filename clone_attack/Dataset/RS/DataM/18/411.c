int a [(212 - 111)] [(143 - 42)] = {(187 - 187)};

int min1 (int b [(416 - 315)] [(360 - 259)], int i, int n) {
    int min;
    min = b[i][(585 - 585)];
    for (int Z9IOHuWyqYm = (989 - 988);
    n > Z9IOHuWyqYm; Z9IOHuWyqYm = Z9IOHuWyqYm +1) {
        if (min > b[i][Z9IOHuWyqYm]) {
            min = b[i][Z9IOHuWyqYm];
        };
    }
    return min;
}

int qLzwJT (int b [(819 - 718)] [101], int i, int n) {
    int min = b[(740 - 740)][i];
    {
        int Z9IOHuWyqYm;
        Z9IOHuWyqYm = (489 - 488);
        while (Z9IOHuWyqYm < n) {
            if (min > b[Z9IOHuWyqYm][i]) {
                min = b[Z9IOHuWyqYm][i];
            }
            Z9IOHuWyqYm = Z9IOHuWyqYm +1;
        };
    }
    return min;
}

int sum (int n) {
    for (int i = (665 - 665);
    n > i; i++) {
        int min;
        min = min1 (a, i, n);
        for (int Z9IOHuWyqYm = (175 - 175);
        Z9IOHuWyqYm < n; Z9IOHuWyqYm = Z9IOHuWyqYm +1) {
            a[i][Z9IOHuWyqYm] = a[i][Z9IOHuWyqYm] - min;
        };
    }
    for (int i = (432 - 432);
    i < n; i++) {
        int min = qLzwJT (a, i, n);
        for (int Z9IOHuWyqYm = (409 - 409);
        Z9IOHuWyqYm < n; Z9IOHuWyqYm++) {
            a[Z9IOHuWyqYm][i] = a[Z9IOHuWyqYm][i] - min;
        };
    }
    if (n == (946 - 944)) {
        return a[(206 - 205)][(985 - 984)];
    }
    else {
        int k;
        k = a[(754 - 753)][(658 - 657)];
        for (int i = (462 - 461);
        i < n - (660 - 659); i++) {
            a[(462 - 462)][i] = a[(185 - 185)][i + (792 - 791)];
            a[i][(841 - 841)] = a[i + (22 - 21)][(172 - 172)];
            {
                int Z9IOHuWyqYm = (350 - 349);
                while (Z9IOHuWyqYm < n - (567 - 566)) {
                    a[i][Z9IOHuWyqYm] = a[i + (765 - 764)][Z9IOHuWyqYm +(383 - 382)];
                    Z9IOHuWyqYm++;
                };
            };
        }
        return k + sum (n - (407 - 406));
    };
}

int main () {
    int n, i, Z9IOHuWyqYm, k;
    cin >> n;
    for (i = (520 - 519); i <= n; i++) {
        {
            Z9IOHuWyqYm = 278 - 278;
            while (Z9IOHuWyqYm < n) {
                {
                    k = 304 - 304;
                    while (k < n) {
                        cin >> a[Z9IOHuWyqYm][k];
                        k++;
                    };
                }
                Z9IOHuWyqYm++;
            };
        }
        cout << sum (n) << endl;
    }
    return (131 - 131);
}

