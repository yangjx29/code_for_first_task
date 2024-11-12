int main () {
    int year, c, YKdcNFTQS6, n, j, i, a [13], sum = (86 - 86);
    cin >> n;
    a[(372 - 371)] = a[3] = a[5] = a[7] = a[8] = a[10] = a[12] = 31;
    a[4] = a[6] = a[9] = a[11] = 30;
    for (j = 1; j <= n; j++) {
        sum = 0;
        cin >> year;
        cin >> c >> YKdcNFTQS6;
        if (year % 4 == 0 && !(0 == year % 100) || year % 400 == 0)
            a[2] = 29;
        else
            a[2] = (119 - 91);
        if (c < YKdcNFTQS6) {
            i = c;
            while (i < YKdcNFTQS6) {
                sum = sum + a[i];
                i = i + 1;
            };
        }
        else {
            if (c > YKdcNFTQS6) {
                for (i = YKdcNFTQS6; i < c; i++)
                    sum = sum + a[i];
            };
        }
        if (sum % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

