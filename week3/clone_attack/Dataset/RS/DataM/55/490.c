void  YT6FNj8 (int fXELiIgo4Mbz [], int i) {
    int j;
    {
        j = i - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j >= (323 - 323)) {
            if (fXELiIgo4Mbz[j] >= 0 && 9 >= fXELiIgo4Mbz[j]) {
                cout << fXELiIgo4Mbz[j];
            }
            if (fXELiIgo4Mbz[j] >= 10) {
                cout << (char) (fXELiIgo4Mbz[j] + 55);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
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
            j = j - 1;
        };
    }
    cout << endl;
}

int main () {
    int i, j, Vwi6WCAaeJ [10000] = {0}, sum = 0, fXELiIgo4Mbz [10000] = {0}, nlen, k;
    char str1 [10000], str2 [10000], l;
    double  AbsKiE, after;
    memset (str1, ' ', sizeof (str1));
    memset (str2, ' ', sizeof (str2));
    cin >> AbsKiE;
    cin >> str1;
    nlen = strlen (str1);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (nlen > i) {
            if (97 <= str1[i] && str1[i] < 122) {
                str1[i] = (char) toupper (str1[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            if (str1[i] >= (752 - 687) && str1[i] <= 90) {
                Vwi6WCAaeJ[i] = str1[i] - '7';
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
                };
            }
            else
                Vwi6WCAaeJ[i] = str1[i] - '0';
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
            i = i + 1;
        };
    }
    cin >> after;
    k = nlen - 1;
    {
        i = 0;
        while (i < nlen) {
            sum = sum + Vwi6WCAaeJ[i] * pow (AbsKiE, k);
            k = k - 1;
            i = i + 1;
        };
    }
    i = 0;
    do {
        fXELiIgo4Mbz[i] = sum % (int) after;
        sum = sum / after;
        i = i + 1;
    }
    while (sum > 0);
    YT6FNj8 (fXELiIgo4Mbz, i);
    return 0;
}

