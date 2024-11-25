int main () {
    char str1 [MAXLEN], str2 [MAXLEN];
    int W4oJAswQjW, len, X2JCmgLPA5s;
    cin >> str1;
    len = strlen (str1);
    X2JCmgLPA5s = (630 - 630);
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
        W4oJAswQjW = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > W4oJAswQjW) {
            X2JCmgLPA5s = (X2JCmgLPA5s % 13) * 10 + str1[W4oJAswQjW] - '0';
            str2[W4oJAswQjW] = '0' + X2JCmgLPA5s / 13;
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
            W4oJAswQjW++;
        };
    }
    {
        W4oJAswQjW = 0;
        while (W4oJAswQjW < len) {
            if (str2[W4oJAswQjW] != '0')
                break;
            W4oJAswQjW++;
        };
    }
    if (W4oJAswQjW == len)
        cout << "0" << endl;
    else {
        for (; W4oJAswQjW < len; W4oJAswQjW++)
            cout << str2[W4oJAswQjW];
        cout << endl;
    }
    cout << X2JCmgLPA5s % 13 << endl;
    return 0;
}

