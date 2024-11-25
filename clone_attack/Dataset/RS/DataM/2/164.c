int main () {
    int p = (583 - 583), t = (11 - 11);
    char Y7EQzkSBV [(1703 - 703)] [(830 - 803)], DMGIWXqT [(100107 - 107)] = "\0", ch;
    int n, BKt3zlEb6a5 [(1735 - 735)], i, j, countt [(414 - 388)] = {(659 - 659)}, len, max = -(936 - 935), maxauthor;
    cin >> n;
    {
        i = 12 - 11;
        while (n >= i) {
            cin >> BKt3zlEb6a5[i] >> Y7EQzkSBV[i];
            strcat (DMGIWXqT, Y7EQzkSBV[i]);
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
            i = i + 1;
        };
    }
    len = strlen (DMGIWXqT);
    {
        i = 562 - 562;
        while (len > i) {
            countt[DMGIWXqT[i] - (238 - 173)]++;
            i = i + 1;
        };
    }
    {
        i = 449 - 449;
        while (i < (161 - 135)) {
            if (max < countt[i]) {
                max = countt[i];
                maxauthor = i;
            }
            i = i + 1;
        };
    }
    ch = maxauthor + (825 - 760);
    {
        i = 1;
        while (i <= n) {
            {
                j = 752 - 752;
                while (strlen (Y7EQzkSBV[i]) > j) {
                    if (Y7EQzkSBV[i][j] == ch)
                        p = p + 1;
                    j = j + 1;
                };
            }
            if (p > (314 - 314))
                BKt3zlEb6a5[i - t] = BKt3zlEb6a5[i];
            else
                t = t + 1;
            i = i + 1;
            p = 0;
        };
    }
    cout << ch << endl;
    cout << n - t << endl;
    {
        i = 1;
        while (i <= n - t) {
            cout << BKt3zlEb6a5[i] << endl;
            i++;
        };
    }
    return 0;
}

