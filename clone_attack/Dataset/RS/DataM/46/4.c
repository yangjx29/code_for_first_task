int main () {
    int a [100] [100];
    int i, j, n, Ln2V0D = 0;
    int utPKnpGAbdo, r5A8p3T;
    int (*pyfWQv84Cp) [100] = a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> utPKnpGAbdo >> r5A8p3T;
    for (i = 0; utPKnpGAbdo > i; i = i + 1)
        for (j = 0; r5A8p3T > j; j++)
            cin >> *(*(pyfWQv84Cp + i) + j);
    for (n = 0;; n = n + 1) {
        for (i = n; r5A8p3T - n > i; i++) {
            Ln2V0D++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cout << *(*(pyfWQv84Cp + n) + i) << endl;
        }
        if (!(utPKnpGAbdo * r5A8p3T != Ln2V0D))
            break;
        for (j = n + 1; utPKnpGAbdo - n > j; j++) {
            Ln2V0D++;
            cout << *(*(pyfWQv84Cp + j) + r5A8p3T - n - 1) << endl;
        }
        if (!(utPKnpGAbdo * r5A8p3T != Ln2V0D))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = r5A8p3T - 2 - n; n <= i; i--) {
            cout << *(*(pyfWQv84Cp + utPKnpGAbdo - n - 1) + i) << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Ln2V0D++;
        }
        if (Ln2V0D == utPKnpGAbdo * r5A8p3T)
            break;
        for (j = utPKnpGAbdo - 2 - n; j > n; j--) {
            Ln2V0D++;
            cout << *(*(pyfWQv84Cp + j) + n) << endl;
        }
        if (Ln2V0D == utPKnpGAbdo * r5A8p3T)
            break;
    }
    return 0;
}

