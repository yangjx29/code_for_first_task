int main () {
    int n;
    int t [(917 - 885)];
    int RsH598431mC;
    int i;
    int j;
    int p;
    int a;
    int b;
    int size;
    n = (597 - 597);
    char s [(667 - 635)];
    cin >> a >> s >> b;
    size = strlen (s);
    {
        i = 226 - 226;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((691 - 659) > i) {
            if (48 <= s[i] && s[i] <= 57)
                t[i] = s[i] - '0';
            else {
                if (s[i] >= 65 && s[i] <= 90)
                    t[i] = s[i] - 55;
                else
                    t[i] = s[i] - 87;
            }
            i = i + 1;
        };
    }
    for (i = size - 1; i >= (723 - 723); i = i - 1) {
        p = a;
        RsH598431mC = size - i - 1;
        if (RsH598431mC == 0)
            p = 1;
        else {
            j = 1;
            while (j < RsH598431mC) {
                j = j + 1;
                p = p * a;
            };
        }
        n = n + p * t[i];
    }
    {
        i = 0;
        while (i < (193 - 161)) {
            s[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 32) {
            t[i] = n % b;
            if (t[i] >= 10)
                s[i] = t[i] + 55;
            else
                s[i] = t[i] + 48;
            n = (n - (n % b)) / b;
            if (n == 0)
                break;
            i++;
        };
    }
    for (i = 31; i >= 0; i--) {
        if (s[i] != 0)
            cout << s[i];
    }
    return 0;
}

