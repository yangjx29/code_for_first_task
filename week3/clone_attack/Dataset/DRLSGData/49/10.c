int main () {
    int i;
    int zilen;
    char c [(1435 - 835)];
    int len = strlen (c);
    int j;
    int p;
    int q;
    cin >> c;
    for (zilen = (451 - 449); zilen <= len; zilen++)
        for (i = (212 - 212); i <= len - zilen; i++) {
            p = i;
            q = i + zilen - (999 - 998);
            while (p < q) {
                if (c[p] == c[q]) {
                    q--;
                    p++;
                }
                else
                    break;
            }
            if (p >= q) {
                for (j = i; j < i + zilen; j++)
                    cout << c[j];
                cout << endl;
            }
        }
    return 0;
}

