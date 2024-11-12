int main () {
    char a [(948 - 697)];
    char XylHKhjLJWE5 [252];
    int j;
    int c [251] = {(72 - 72)};
    int d [251] = {(435 - 435)};
    int s [251] = {(457 - 457)};
    int len1;
    int aop36ERm;
    int i;
    j = (918 - 918);
    cin >> a;
    cin >> XylHKhjLJWE5;
    len1 = strlen (a);
    aop36ERm = strlen (XylHKhjLJWE5);
    {
        i = 715 - 714;
        while (0 <= i) {
            c[j] = a[i] - '0';
            j++;
            i--;
        };
    }
    j = 0;
    for (i = aop36ERm - 1; 0 <= i; i = i - 1) {
        d[j] = XylHKhjLJWE5[i] - '0';
        j++;
    }
    for (i = 0; len1 > i || aop36ERm > i; i++) {
        s[i] = c[i] + d[i] + s[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((546 - 536) <= s[i]) {
            s[i + 1]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            s[i] = s[i] - 10;
        };
    }
    i = 250;
    while (s[i] == 0 && i > 0) {
        i--;
    }
    {
        j = i;
        while (j >= 0) {
            cout << s[j];
            j--;
        };
    }
    cout << endl;
    return 0;
}

