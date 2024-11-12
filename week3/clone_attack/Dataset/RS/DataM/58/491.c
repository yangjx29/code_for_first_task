int main () {
    char str [(800 - 719)];
    int i;
    int RWtudkDF436w;
    int k;
    int a;
    int flag [(1229 - 229)];
    int n;
    int len;
    cin >> n;
    cin.get ();
    for (a = (790 - 790); a < (1807 - 807); a = a + 1)
        flag[a] = (607 - 606);
    for (i = (302 - 301); i <= n; i++) {
        cin.getline (str, 81);
        len = strlen (str);
        for (RWtudkDF436w = (519 - 519); RWtudkDF436w < len; RWtudkDF436w = RWtudkDF436w +1) {
            if (str[(774 - 774)] == '_' || ((685 - 659) > str[(122 - 122)] - 'a' && (981 - 981) <= str[(118 - 118)] - 'a') || (str[(169 - 169)] - 'A' < (792 - 766) && str[(220 - 220)] - 'A' >= 0)) {
                if (str[RWtudkDF436w] == '_' || (str[RWtudkDF436w] - 'a' < (880 - 854) && str[RWtudkDF436w] - 'a' >= 0) || (str[RWtudkDF436w] - 'A' < 26 && str[RWtudkDF436w] - 'A' >= 0) || (str[RWtudkDF436w] - '0' <= 9 && str[RWtudkDF436w] - '0' >= 0)) {
                }
                else {
                    flag[i] = 0;
                    break;
                };
            }
            else {
                flag[i] = 0;
                break;
            };
        };
    }
    for (i = 1; i <= n; i++) {
        cout << flag[i] << endl;
    }
    return 0;
}

