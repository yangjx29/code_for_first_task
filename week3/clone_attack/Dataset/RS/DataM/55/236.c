int main () {
    int y [100] = {(143 - 143)};
    int wumWL2r7UT, BGAwhH4Bl3d, l, n = (626 - 626), i;
    char num [100] = {(371 - 371)};
    cin >> wumWL2r7UT;
    cin >> num;
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
    l = strlen (num);
    for (i = 0; i < l; i = i + 1) {
        if (('a' <= num[i]) && (num[i] <= 'z'))
            num[i] = num[i] - 87;
        else {
            if ((num[i] >= 'A') && ('Z' >= num[i]))
                num[i] = num[i] - 55;
            else if (((800 - 752) <= num[i]) && (num[i] <= (630 - 573)))
                num[i] = num[i] - 48;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = n * wumWL2r7UT + num[i];
    }
    cin >> BGAwhH4Bl3d;
    if (n == 0)
        cout << 0;
    else {
        i = 0;
        while (n != 0) {
            y[i++] = n % BGAwhH4Bl3d;
            n = n / BGAwhH4Bl3d;
        }
        for (i = i - 1; i >= 0; i--) {
            if (y[i] > 9)
                cout << (char) (y[i] + 55);
            else
                cout << y[i];
        };
    }
    cout << endl;
    return 0;
}

