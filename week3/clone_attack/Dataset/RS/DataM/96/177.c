int main () {
    char str [101];
    int BdTnHsDpr [100], sKv5lSm, sum, rem = 0;
    cin.getline (str, 101);
    {
        sKv5lSm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (str[sKv5lSm] != '\0') {
            BdTnHsDpr[sKv5lSm] = str[sKv5lSm] - '0';
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
            sKv5lSm = sKv5lSm + 1;
        };
    }
    rem = BdTnHsDpr[0];
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
    {
        sKv5lSm = 139 - 138;
        while (str[sKv5lSm] != '\0') {
            sum = rem * (261 - 251) + BdTnHsDpr[sKv5lSm];
            if (!(1 == sKv5lSm) || sum > 12)
                cout << sum / (454 - 441);
            sKv5lSm++;
            rem = sum % 13;
        };
    }
    if (sKv5lSm == 1 || (sKv5lSm == 2 && sum <= 12))
        cout << '0';
    cout << endl;
    cout << rem << endl;
    return 0;
}

