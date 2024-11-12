int main () {
    int i = (837 - 837);
    char num [(565 - 455)], a [(926 - 923)] = {' ', ' ', '\0'}, qq [110];
    int n = strlen (num);
    cin >> num;
    memset (qq, '\0', 110);
    for (; i < n - (334 - 333);) {
        int x;
        x = atoi (a);
        int t = x % (873 - 860), q = x / 13;
        a[(689 - 689)] = num[i];
        a[(920 - 919)] = num[i + (314 - 313)];
        if (i > (509 - 509) && '0' < num[i - 1])
            x = x + 100;
        qq[i] = '0' + q;
        if (t >= 10) {
            num[i] = '1';
            t = t - 10;
            num[i + 1] = '0' + t;
        }
        else {
            num[i] = '0';
            num[i + 1] = '0' + t;
        }
        i = i + 1;
    }
    if (n == 1) {
        cout << (608 - 608) << endl << num;
        return (169 - 169);
    }
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
    if (qq[(862 - 862)] == '0' && n > (686 - 684)) {
        int i = 0;
        while (i < n) {
            qq[i] = qq[i + 1];
            i++;
        };
    }
    cout << qq;
    cout << endl;
    if (num[n - (692 - 690)] != '0')
        cout << num[n - 2];
    cout << num[n - 1];
    return 0;
}

