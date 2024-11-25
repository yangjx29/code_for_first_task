int panduan (int hgNcsBWbvKk) {
    int XkucWZPCX9;
    int s;
    int k;
    int j;
    XkucWZPCX9 = 0;
    s = 0;
    int n;
    n = hgNcsBWbvKk;
    do {
        n = n / 10;
        XkucWZPCX9 = XkucWZPCX9 +1;
    }
    while (n > 0);
    n = hgNcsBWbvKk;
    {
        j = 0;
        while (j < XkucWZPCX9) {
            k = n % 10;
            n = n / 10;
            s = 10 * s + k;
            j = j + 1;
        };
    }
    if (hgNcsBWbvKk == s)
        return 1;
    else
        return 0;
}

int shushu (int hgNcsBWbvKk) {
    int XkucWZPCX9;
    int j;
    int flag;
    flag = 0;
    if (hgNcsBWbvKk == 1)
        return 0;
    {
        XkucWZPCX9 = 2;
        while (XkucWZPCX9 < hgNcsBWbvKk) {
            if (hgNcsBWbvKk % XkucWZPCX9 == 0) {
                flag = 1;
                break;
            }
            XkucWZPCX9++;
        };
    }
    if (flag == 1)
        return 0;
    else
        return 1;
}

int main () {
    int hgNcsBWbvKk, n, flag = 0;
    scanf ("%d%d", &hgNcsBWbvKk, &n);
    for (; hgNcsBWbvKk <= n; hgNcsBWbvKk++) {
        if (panduan (hgNcsBWbvKk) == 1 && shushu (hgNcsBWbvKk) == 1) {
            if (flag == 0) {
                flag = flag + 1;
                printf ("%d", hgNcsBWbvKk);
            }
            else {
                flag++;
                printf (",%d", hgNcsBWbvKk);
            };
        };
    }
    if (flag == 0) {
    }
    return 0;
}

