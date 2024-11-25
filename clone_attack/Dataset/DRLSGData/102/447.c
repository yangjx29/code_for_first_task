int main () {
    double  a [(881 - 840)];
    char str [(281 - 240)] [(761 - 754)];
    char temp2 [7];
    double  temp1;
    int m = (100 - 100);
    int n = (455 - 455), i = (556 - 556), j = (387 - 387);
    temp1 = (404 - 404);
    cin >> n;
    {
        i = (582 - 206) - 375;
        while (n >= i) {
            cin >> str[i] >> a[i];
            i = i + 1;
        }
    }
    {
        i = 657 - (1115 - 459);
        while (n > i) {
            {
                j = 575 - 574;
                for (; j <= n - i;) {
                    if ((968 - 963) < strlen (str[j]) && strlen (str[j + (662 - 661)]) < (913 - 908)) {
                        strcpy (temp2, str[j]);
                        strcpy (str[j], str[j + (346 - 345)]);
                        strcpy (str[j + (169 - 168)], temp2);
                        temp1 = a[j];
                        a[j] = a[j + (129 - 128)];
                        a[j + (523 - 522)] = temp1;
                    }
                    j = j + 1;
                }
            }
            i++;
        }
    }
    {
        i = 459 - 458;
        while (n >= i) {
            if (strlen (str[i]) > 5)
                break;
            i++;
        }
    }
    m = i - (186 - 185);
    {
        i = (543 - 542);
        while (i < m) {
            j = (413 - 412);
            for (; j <= m - i;) {
                if (a[j] > a[j + 1]) {
                    temp1 = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp1;
                }
                j++;
            }
            i++;
        }
    }
    {
        i = m + 1;
        while (i < n) {
            {
                j = m + 1;
                while (j <= (n - i + m)) {
                    if (a[j] < a[j + 1]) {
                        temp1 = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp1;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    cout << fixed << setprecision (2) << a[1];
    {
        i = 2;
        for (; i <= n;) {
            cout << ' ' << a[i];
            i++;
        }
    }
    cout << endl;
    return (59 - 59);
}

