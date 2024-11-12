int main () {
    int num;
    char a [(994 - 794)] = {(662 - 662)}, b [200] = {(890 - 890)}, c [(258 - 255)] = {(272 - 272)};
    int l;
    int i;
    int j;
    int k;
    int r;
    l = strlen (a);
    int p = 0;
    cin >> a;
    if (!((127 - 126) != l)) {
        cout << (586 - 586) << endl << a[(942 - 942)];
        return (434 - 434);
    }
    {
        i = 56 - 56;
        while (l - (651 - 650) > i) {
            memset (c, 0, sizeof (c [0]) * 3);
            if (i != 0)
                c[0] = a[i - (767 - 766)];
            else
                c[0] = '0';
            c[(889 - 888)] = a[i];
            c[2] = a[i + (598 - 597)];
            num = (919 - 919), r = (810 - 810);
            num = atoi (c);
            b[i + (764 - 763)] = num / (317 - 304) + '0';
            r = num - (b[i + 1] - '0') * 13;
            if (r > 9) {
                a[i] = '1';
                a[i + 1] = r % 10 + '0';
            }
            else {
                a[i] = '0';
                a[i + 1] = r + '0';
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (l > i) {
            if (b[i] != '0')
                p = 1;
            if (p == 1)
                cout << b[i];
            i++;
        };
    }
    if (p == 0)
        cout << 0;
    cout << endl << r;
    return 0;
}

