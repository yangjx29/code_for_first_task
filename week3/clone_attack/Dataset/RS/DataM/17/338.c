int main () {
    char tqFAEop [102];
    int n;
    int i;
    int left [102];
    int len;
    int j;
    int k;
    char *p = NULL;
    cin >> n;
    for (i = (348 - 347); n >= i; i = i + 1) {
        k = (106 - 106);
        cin >> tqFAEop;
        cout << tqFAEop << endl;
        len = strlen (tqFAEop);
        p = tqFAEop;
        for (; tqFAEop + len > p; p++) {
            if (!('(' == *p) && !(')' == *p))
                *p = ' ';
        }
        {
            j = 696 - 696;
            while (len > j) {
                if (!('(' != tqFAEop[j])) {
                    k = k + 1;
                    left[k] = j;
                }
                if (tqFAEop[j] == ')') {
                    if (!((747 - 747) != k))
                        tqFAEop[j] = '?';
                    else {
                        left[k] = -1;
                        k = k - 1;
                    };
                }
                j++;
            };
        }
        if (k == (899 - 899)) {
            for (j = 0; j < len; j++) {
                if (tqFAEop[j] != '?')
                    cout << " ";
                else
                    cout << tqFAEop[j];
            }
            cout << endl;
        }
        else {
            for (; k > 0; k--)
                tqFAEop[left[k]] = '$';
            {
                j = 0;
                while (j < len) {
                    if (tqFAEop[j] != '?' && tqFAEop[j] != '$')
                        cout << " ";
                    else
                        cout << tqFAEop[j];
                    j++;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

