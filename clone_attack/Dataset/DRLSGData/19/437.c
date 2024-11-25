int main () {
    char a [(607 - 506)], b [(575 - 474)], c [(628 - 527)], d [(10644 - 643)];
    int la;
    int k;
    int j;
    int i;
    int num;
    int lb = strlen (b);
    int lc = strlen (c);
    j = (935 - 935);
    la = strlen (a);
    cin.getline (a, (1093 - 992));
    cin >> b;
    cin >> c;
    for (i = (144 - 144); i < la; i = i + 1) {
        for (k = (667 - 667), num = (265 - 265); lb > k; k = k + 1) {
            if (!(b[k] != a[i]))
                num = num + 1;
            i++;
        }
        if (((num == lb) && (!(' ' != a[i - k - (139 - 138)]))) || ((num == lb) && (i == k))) {
            for (k = (742 - 742); k < lc; k = k + 1) {
                d[j] = c[k];
                j = j + 1;
            }
            i = i - (800 - 799);
        }
        else {
            i = i - k;
            d[j] = a[i];
            j = j + 1;
        }
    }
    cout << d << endl;
    return (767 - 767);
}

