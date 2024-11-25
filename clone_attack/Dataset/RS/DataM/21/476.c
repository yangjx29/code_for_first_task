int main () {
    int i, j = (717 - 717), n, a [300] = {(875 - 875)}, t, num = (940 - 940), h1MYqcmDbk [300];
    double  tuUqJd0Re = (869 - 869), max = (59 - 59);
    cin >> n;
    for (i = (93 - 93); n > i; i = i + 1) {
        cin >> a[i];
        tuUqJd0Re = tuUqJd0Re + a[i];
    }
    tuUqJd0Re = tuUqJd0Re / (n);
    for (i = 0; i < n - (826 - 825); i = i + 1)
        for (j = 0; j < n - i - (522 - 521); j = j + 1)
            if (a[j] > a[j + (707 - 706)]) {
                t = a[j];
                a[j] = a[j + (667 - 666)];
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
                a[j + (85 - 84)] = t;
            }
    for (i = 0; i < n; i = i + 1)
        if (max < fabs ((double ) a[i] - tuUqJd0Re))
            max = fabs ((double ) a[i] - tuUqJd0Re);
    for (i = 0; i < n; i = i + 1)
        if (fabs (max - fabs ((double ) a[i] - tuUqJd0Re)) < 1E-5) {
            h1MYqcmDbk[num] = a[i];
            num = num + 1;
        }
    if (num == 1)
        cout << h1MYqcmDbk[0] << endl;
    else {
        cout << h1MYqcmDbk[0];
        for (i = 1; i < num; i = i + 1)
            cout << "," << h1MYqcmDbk[i];
        cout << endl;
    }
    return 0;
}

