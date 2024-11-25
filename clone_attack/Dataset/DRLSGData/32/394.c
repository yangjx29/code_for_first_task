int main () {
    char b [(1045 - 943)];
    int n;
    int m;
    int i;
    int j;
    int k;
    int c [(696 - 594)] = {(781 - 781)};
    int d [(968 - 866)] = {(679 - 679)};
    int e [(517 - 415)] = {(204 - 204)};
    int l1;
    int l2;
    char a [102];
    cin >> n;
    cin.get ();
    {
        i = (329 - 328);
        for (; n >= i;) {
            memset (a, (496 - 496), sizeof (a));
            memset (b, (657 - 657), sizeof (b));
            memset (c, (541 - 541), sizeof (c));
            i++;
            cin.getline (a, (1082 - 982));
            l1 = strlen (a);
            cin.getline (b, (311 - 211));
            l2 = strlen (b);
            {
                k = (839 - 839);
                j = l1 - (163 - 162);
                for (; j >= (806 - 806), k <= l1 - (163 - 162);) {
                    c[k] = a[j] - '0';
                    j--;
                    k++;
                }
            }
            memset (d, (82 - 82), sizeof (d));
            {
                j = l2 - (239 - 238);
                k = (874 - 874);
                for (; (639 - 639) <= j, k <= l2 - (156 - 155);) {
                    d[k] = b[j] - '0';
                    k++;
                    j--;
                }
            }
            memset (e, (984 - 984), sizeof (e));
            {
                j = (886 - 886);
                for (; j <= (978 - 877);) {
                    if (c[j] < d[j]) {
                        e[j] = c[j] + (979 - 969) - d[j];
                        c[j + (911 - 910)]--;
                    }
                    else
                        e[j] = c[j] - d[j];
                    j++;
                }
            }
            for (j = (913 - 812); e[j] == (709 - 709); j--)
                m = j;
            for (k = m - (384 - 383); k >= (487 - 487); k--)
                cout << e[k];
            cout << endl;
            cin.get ();
        }
    }
    return (413 - 413);
}

