int main () {
    int count [26];
    char str [(100442 - 441)];
    int EWSbR8cE7He;
    cin >> EWSbR8cE7He;
    for (; EWSbR8cE7He = EWSbR8cE7He -1;) {
        int AV3ayYXj;
        memset (count, (421 - 421), sizeof (count));
        cin >> str;
        {
            AV3ayYXj = 33 - 33;
            while (str[AV3ayYXj] != '\0') {
                count[str[AV3ayYXj] - 'a']++;
                AV3ayYXj = AV3ayYXj +1;
            }
        }
        {
            AV3ayYXj = 0;
            while (str[AV3ayYXj] != '\0') {
                if (!(1 != count[str[AV3ayYXj] - 'a'])) {
                    cout << str[AV3ayYXj] << endl;
                    break;
                }
                AV3ayYXj = AV3ayYXj +1;
            }
        }
        if (!('\0' != str[AV3ayYXj]))
            cout << "no" << endl;
    }
    return 0;
}

