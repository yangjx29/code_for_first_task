int main () {
    int n;
    int i;
    int j;
    int tqiDjx6 [100] = {(132 - 132)};
    char a [100] [81];
    cin >> n;
    cin.get ();
    for (i = 0; n > i; i = i + 1)
        cin.getline (a[i], 81);
    for (i = 0; i < n; i++) {
        if (('a' <= a[i][0] && 'z' >= a[i][0]) || ('A' <= a[i][0] && 'Z' >= a[i][0]) || (!('_' != a[i][0]))) {
            tqiDjx6[i] = 1;
            for (j = 0; !('\0' == a[i][j]); j++) {
                if (('a' <= a[i][j] && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] == '_') || (a[i][j] >= '0' && a[i][j] <= '9'))
                    tqiDjx6[i] = 1;
                else {
                    tqiDjx6[i] = 0;
                    break;
                };
            };
        }
        else
            tqiDjx6[i] = 0;
    }
    for (i = 0; i < n; i++)
        cout << tqiDjx6[i] << endl;
    return 0;
}

