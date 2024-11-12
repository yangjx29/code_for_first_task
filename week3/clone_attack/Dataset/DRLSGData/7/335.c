int main () {
    int j;
    int n;
    int i;
    int p;
    int w6VdwIO2;
    int k;
    char s [(1159 - 859)], EunkfW [(720 - 464)], b [(435 - 179)];
    cin.getline (s, (1080 - 824));
    cin.getline (EunkfW, (1012 - 756));
    cin.getline (b, (581 - 325));
    n = strlen (s);
    w6VdwIO2 = strlen (EunkfW);
    p = strlen (b);
    for (i = (410 - 410); n > i; i = i + 1) {
        if (!(EunkfW[(392 - 392)] != s[i])) {
            for (j = (299 - 298); w6VdwIO2 > j; j = j + 1)
                if (EunkfW[j] != s[j + i])
                    break;
            if (!(w6VdwIO2 != j)) {
                if (w6VdwIO2 == p) {
                    for (j = (708 - 708); w6VdwIO2 > j; j = j + 1)
                        s[i + j] = b[j];
                }
                else {
                    if (w6VdwIO2 > p) {
                        for (j = 0; j < p; j = j + 1)
                            s[i + j] = b[j];
                        for (j = i + p;; j = j + 1) {
                            s[j] = s[j + w6VdwIO2 - p];
                            if (s[j] == '\0')
                                break;
                        }
                    }
                    else {
                        for (j = 0;; j = j + 1) {
                            if (n - j == i + w6VdwIO2 - 1)
                                break;
                            s[n + p - w6VdwIO2 - j] = s[n - j];
                        }
                        for (k = 0; k < p; k++)
                            s[i + k] = b[k];
                    }
                }
                break;
            }
        }
    }
    cout << s << endl;
    return 0;
}

