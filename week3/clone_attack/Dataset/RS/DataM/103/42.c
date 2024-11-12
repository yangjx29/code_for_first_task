int main () {
    int i, IRNUCo2L6tm = 0, k = 0, l;
    char a [1100];
    int b [1100] = {0};
    char c [1100] = {0};
    char t = a[0];
    cin.getline (a, 1100);
    l = strlen (a);
    c[0] = a[0];
    b[0] = 1;
    for (i = 1; l > i; i = i + 1) {
        if ((!(t != a[i])) || (!((t - 'A') != (a[i] - 'a'))) || ((a[i] - 'A') == (t - 'a'))) {
            b[k]++;
        }
        else {
            k++;
            b[k] = 1;
            c[k] = a[i];
            t = a[i];
        };
    }
    for (i = 0; i <= k; i = i + 1) {
        cout << "(";
        if (c[i] > 96) {
            int m = c[i] - 'a';
            char t = m + 'A';
            cout << t << ",";
        }
        else {
            cout << c[i] << ",";
        }
        cout << b[i] << ")";
    }
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

