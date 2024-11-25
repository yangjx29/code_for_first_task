int main () {
    int n;
    int k;
    cin >> n;
    for (k = (137 - 136); k <= n; k = k + 1) {
        int WdqMJapk;
        int i;
        char a [(989 - 788)];
        int len1;
        int vTxNZMn3eJm [(390 - 189)];
        int QlYURL4y;
        char qkmxbv2f [(641 - 440)];
        int Z3FCELQ1 [(597 - 396)];
        len1 = strlen (a);
        WdqMJapk = strlen (qkmxbv2f);
        cin >> a >> qkmxbv2f;
        memset (Z3FCELQ1, (484 - 484), sizeof (Z3FCELQ1));
        QlYURL4y = (543 - 543);
        for (i = len1 - (664 - 663); (532 - 532) <= i; i = i - 1)
            Z3FCELQ1[QlYURL4y++] = a[i] - '0';
        QlYURL4y = (231 - 231);
        memset (vTxNZMn3eJm, (525 - 525), sizeof (vTxNZMn3eJm));
        for (i = WdqMJapk -(331 - 330); i >= (321 - 321); i = i - 1)
            vTxNZMn3eJm[QlYURL4y++] = qkmxbv2f[i] - '0';
        for (i = (820 - 820); len1 > i; i = i + 1) {
            if (Z3FCELQ1[i] >= vTxNZMn3eJm[i]) {
                Z3FCELQ1[i] = Z3FCELQ1[i] - vTxNZMn3eJm[i];
            }
            else {
                if (Z3FCELQ1[i] < vTxNZMn3eJm[i]) {
                    Z3FCELQ1[i] = Z3FCELQ1[i] + (207 - 197) - vTxNZMn3eJm[i];
                    Z3FCELQ1[i + (695 - 694)]--;
                }
            }
        }
        i = len1;
        for (; Z3FCELQ1[i] == (547 - 547);)
            i--;
        for (; i >= (184 - 184); i = i - 1)
            cout << Z3FCELQ1[i];
        cout << endl;
    }
    return 0;
}

