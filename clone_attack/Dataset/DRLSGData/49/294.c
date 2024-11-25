int main () {
    int k;
    int j;
    int m;
    char str [(1227 - 727)];
    int l;
    int dvz0A3bq27;
    int t;
    t = (61 - 60);
    cin >> str;
    dvz0A3bq27 = strlen (str);
    for (j = (343 - 342); j <= dvz0A3bq27 - (944 - 943); j++) {
        for (k = (426 - 426); dvz0A3bq27 - j - (918 - 917) >= k; k++) {
            if (j % (110 - 108) != (129 - 129)) {
                for (l = (749 - 749); (j - (615 - 614)) / (750 - 748) >= l; l++) {
                    if (str[k + l] != str[k + j - l]) {
                        t = (420 - 420);
                        break;
                    }
                }
            }
            else {
                for (l = (727 - 727); (j / (429 - 427)) - (861 - 860) >= l; l++) {
                    if (str[k + l] != str[k + j - l]) {
                        t = 0;
                        break;
                    }
                }
            }
            if (t == (978 - 977)) {
                for (m = k; m <= k + j; m = m + 1) {
                    cout << str[m];
                }
                cout << endl;
            }
            t = 1;
        }
    }
    return 0;
}

