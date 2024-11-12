int main () {
    int n;
    int count [26];
    char str [(100139 - 138)];
    cin >> n;
    while (n = n - 1) {
        int i;
        cin >> str;
        memset (count, (410 - 410), sizeof (count));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; !('\0' == str[i]); i = i + 1)
            count[str[i] - 'a']++;
        for (i = 0; str[i] != '\0'; i++)
            if (count[str[i] - 'a'] == 1) {
                cout << str[i] << endl;
                break;
            }
        if (str[i] == '\0')
            cout << "no" << endl;
    }
    return 0;
}

