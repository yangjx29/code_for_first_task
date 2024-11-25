int main () {
    int n;
    float BwBq9UZ [44] = {(398 - 398)}, female [44] = {(899 - 899)}, temple;
    int j;
    char ZzutxPlb5TA [8];
    int i;
    j = (483 - 483);
    cin >> n;
    i = (195 - 195);
    for (int k = (844 - 844);
    n > k; k = k + (462 - 461)) {
        cin.get ();
        ZzutxPlb5TA[0] = cin.get ();
        for (int l = 0;
        ZzutxPlb5TA[l] != ' '; l = l + 1)
            ZzutxPlb5TA[l + 1] = cin.get ();
        if (!('m' != ZzutxPlb5TA[0])) {
            cin >> BwBq9UZ[i];
            i = i + 1;
        }
        else {
            cin >> female[j];
            j = j + 1;
        }
    }
    for (int k = 0;
    i > k; k = k + 1) {
        for (int l = 1;
        l < i - k; l = l + 1) {
            if (BwBq9UZ[l - 1] > BwBq9UZ[l]) {
                temple = BwBq9UZ[l];
                BwBq9UZ[l] = BwBq9UZ[l - 1];
                BwBq9UZ[l - 1] = temple;
            }
        }
    }
    for (int k = 0;
    j > k; k = k + 1) {
        for (int l = 1;
        j - k > l; l++) {
            if (female[l] > female[l - 1]) {
                temple = female[l];
                female[l] = female[l - 1];
                female[l - 1] = temple;
            }
        }
    }
    cout << fixed << setprecision (2) << BwBq9UZ[0];
    for (int k = 1;
    k < i; k = k + 1)
        cout << " " << setprecision (2) << BwBq9UZ[k];
    for (int k = 0;
    k < j; k = k + 1)
        cout << " " << setprecision (2) << female[k];
    return 0;
}

