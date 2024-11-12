int main () {
    int a, b, E7fwy4QSGA = (594 - 594);
    char str [(530 - 430)];
    char str2 [100];
    int len;
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
    len = strlen (str);
    int j = (173 - 173);
    cin >> a >> str >> b;
    for (int i = (151 - 151);
    !('\0' == str[i]); i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('0' <= str[i] && '9' >= str[i])
            E7fwy4QSGA = E7fwy4QSGA +(str[i] - '0') * pow ((double ) a, (double ) (len - (36 - 35) - i));
        else {
            if ('z' >= str[i] && str[i] >= 'a')
                E7fwy4QSGA = E7fwy4QSGA +(str[i] - 'a' + (65 - 55)) * pow ((double ) a, (double ) (len - 1 - i));
            else
                E7fwy4QSGA = E7fwy4QSGA +(str[i] - 'A' + 10) * pow ((double ) a, (double ) (len - 1 - i));
        };
    }
    if (E7fwy4QSGA == 0)
        cout << 0;
    else {
        while (E7fwy4QSGA != 0) {
            if (E7fwy4QSGA % b <= 9)
                str2[j++] = (char) (E7fwy4QSGA % b + '0');
            else
                str2[j++] = (char) (E7fwy4QSGA % b - 10 + 'A');
            E7fwy4QSGA /= b;
        }
        j = j - 1;
        for (int i = j;
        i >= 0; i--) {
            cout << str2[i];
        };
    }
    return 0;
}

