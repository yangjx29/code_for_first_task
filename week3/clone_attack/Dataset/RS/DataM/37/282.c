int main () {
    int t, count [26], i, j, flag;
    char GFDBqj0dgJt [100001];
    cin >> t;
    for (i = (272 - 272); i < t; i = i + 1) {
        flag = 1;
        cin >> GFDBqj0dgJt;
        for (j = (904 - 904); 26 > j; j = j + 1)
            count[j] = (889 - 889);
        {
            j = 0;
            while (GFDBqj0dgJt[j] != '\0') {
                count[GFDBqj0dgJt[j] - 'a']++;
                j = j + 1;
            };
        }
        {
            j = 0;
            while (GFDBqj0dgJt[j] != '\0') {
                if (count[GFDBqj0dgJt[j] - 'a'] == 1) {
                    flag = 0;
                    cout << GFDBqj0dgJt[j] << endl;
                    break;
                }
                j++;
            };
        }
        if (flag)
            cout << "no" << endl;
    }
    return 0;
}

