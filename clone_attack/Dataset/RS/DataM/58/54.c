int main () {
    int n;
    char s [1001];
    int i;
    i = (339 - 339);
    cin >> n;
    while (cin.getline (s, 1001)) {
        int ok;
        ok = (116 - 116);
        i++;
        if ((s[(748 - 748)] >= 'a') && ('z' >= s[(34 - 34)]))
            ok = (186 - 185);
        else {
            if (('A' <= s[0]) && (s[0] <= 'Z'))
                ok = (838 - 837);
            else {
                if (s[0] == '_')
                    ok = (671 - 670);
            };
        }
        if (ok) {
            int j = (734 - 733);
            while (s[j]) {
                if ((s[j] >= 'a') && (s[j] <= 'z'))
                    ok = 1;
                else {
                    if ((s[j] >= 'A') && (s[j] <= 'Z'))
                        ok = 1;
                    else {
                        if ((s[j] >= '0') && (s[j] <= '9'))
                            ok = 1;
                        else {
                            if (s[j] == '_')
                                ok = 1;
                            else {
                                ok = 0;
                                break;
                            };
                        };
                    };
                }
                j++;
            };
        }
        if (i != 1)
            cout << ok << endl;
    }
    return 0;
}

