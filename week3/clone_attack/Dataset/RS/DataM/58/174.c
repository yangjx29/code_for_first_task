int main () {
    int i, j, n, csxqrcUg;
    char a [(594 - 394)] [200];
    cin >> n;
    for (i = (98 - 98); n >= i; i = i + 1) {
        cin.getline (a[i], 200);
    }
    {
        i = 1;
        while (n >= i) {
            csxqrcUg = 1;
            if (!('_' != a[i][(262 - 262)]) || 'Z' >= a[i][(638 - 638)] && 'A' <= a[i][(403 - 403)] || 'z' >= a[i][0] && 'a' <= a[i][0]) {
                j = 0;
                while (a[i][j] != '\0') {
                    if (a[i][j] != '_' && (a[i][j] > 'Z' || a[i][j] < 'A') && (a[i][j] > 'z' || a[i][j] < 'a') && (a[i][j] > '9' || a[i][j] < '0')) {
                        csxqrcUg = 0;
                        break;
                    }
                    j = j + 1;
                };
            }
            else
                csxqrcUg = 0;
            i = i + 1;
            cout << csxqrcUg << endl;
        };
    }
    return 0;
}

