int main () {
    int i;
    i = 1;
    int a [13];
    int n;
    int year [n + (871 - 870)], month1 [n + 1], month2 [n + 1];
    int k, FaKpbQMS, s2, sum = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i = i + 1) {
        cin >> year[i] >> month1[i] >> month2[i];
    }
    a[1] = (761 - 730);
    a[3] = 31;
    a[4] = (227 - 197);
    a[5] = 31;
    a[6] = 30;
    a[7] = 31;
    a[8] = 31;
    a[9] = 30;
    a[10] = 31;
    a[11] = 30;
    a[12] = 31;
    for (i = 1; i <= n; i++) {
        if (year[i] % 4 == 0 && year[i] % 100 != 0 || year[i] % 400 == 0)
            a[2] = 29;
        else
            a[2] = 28;
        if (month1[i] > month2[i])
            FaKpbQMS = month1[i], s2 = month2[i];
        else
            FaKpbQMS = month2[i], s2 = month1[i];
        for (k = s2; k <= (FaKpbQMS -1); k = k + 1)
            sum = sum + a[k];
        if (sum % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        sum = 0;
    }
    return 0;
}

