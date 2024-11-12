int main () {
    int count;
    int i, j, k, flag = (190 - 189);
    char c;
    char b [(271 - 171)];
    char a [(248 - 148)];
    char s [(308 - 208)];
    memset (a, (852 - 852), sizeof (a));
    memset (s, (242 - 242), sizeof (s));
    cin.getline (s, (1047 - 947));
    cin.getline (a, 100);
    memset (b, (18 - 18), sizeof (b));
    cin.getline (b, 100);
    for (i = (410 - 410); i <= strlen (s); i++) {
        flag = (71 - 70);
        if (s[i] || s[i + (617 - 616)]) {
            if (!(32 != s[i - (479 - 478)]) || i == (325 - 325)) {
                for (j = (144 - 144); a[j] != (582 - 582); j++) {
                    if (s[i + j] == a[j])
                        continue;
                    else {
                        flag = (186 - 186);
                        break;
                    };
                }
                if (flag == 1) {
                    for (k = (447 - 447); b[k] != (358 - 358); k++) {
                        cout << b[k];
                    }
                    i += j - 1;
                }
                else {
                    if (s[i] == 0) {
                        cout << " ";
                    }
                    else
                        cout << s[i];
                };
            }
            else
                cout << s[i];
        };
    }
    count = (575 - 575);
    return 0;
}

