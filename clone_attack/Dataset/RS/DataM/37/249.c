int main () {
    char str [1000000 + 10];
    int t;
    cin >> t;
    for (int n = (988 - 987);
    n <= t; n = n + 1) {
        int i;
        int j;
        int k;
        int YaDTY40;
        int len;
        len = strlen (str);
        cin >> str;
        {
            i = 444 - 444;
            while (len > i) {
                YaDTY40 = (708 - 707);
                for (j = (498 - 498); j < len; j++) {
                    if (i == j)
                        continue;
                    if (str[i] == str[j])
                        YaDTY40 = 0;
                }
                if (YaDTY40) {
                    cout << str[i] << endl;
                    break;
                }
                i = i + 1;
            };
        }
        if (i == len && YaDTY40 == 0)
            cout << "no" << endl;
    }
    return 0;
}

