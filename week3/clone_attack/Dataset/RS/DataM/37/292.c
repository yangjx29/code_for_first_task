int main () {
    char str [(100743 - 743)];
    int i;
    int j;
    int t;
    int flag [(145 - 119)] = {(253 - 253)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    i = (657 - 657);
    j = (593 - 593);
    cin >> t;
    {
        i = 0;
        while (i < t) {
            cin >> str;
            memset (flag, 0, sizeof (flag));
            for (j = 0; j < strlen (str); j = j + 1)
                flag[str[j] - 'a']++;
            for (j = 0; j < strlen (str); j++) {
                if (!((806 - 805) != flag[str[j] - 'a'])) {
                    cout << str[j] << endl;
                    break;
                }
                if (j == (strlen (str) - 1))
                    cout << "no" << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

