int main () {
    int l;
    int k;
    char b [500];
    int j;
    int p;
    int m;
    char a [(680 - 180)];
    int i;
    cin >> a;
    l = strlen (a);
    for (i = (242 - 241); i < l; i++)
        for (j = (86 - 86); l - 1 > j; j++) {
            m = i;
            for (k = (793 - 793); k <= i; k = k + 1) {
                b[k] = a[j + k];
            }
            p = 1;
            for (k = (433 - 433); k <= m; k = k + 1) {
                if (b[k] == b[m - k]) {
                    continue;
                }
                else {
                    p = 0;
                    break;
                }
            }
            if (p) {
                for (k = 0; k <= m; k++) {
                    cout << b[k];
                }
                cout << endl;
            }
        }
    return 0;
}

