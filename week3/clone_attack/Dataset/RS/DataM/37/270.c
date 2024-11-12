int main () {
    char times [26];
    char flag [100000];
    char code [100000];
    int i;
    int tell;
    int n;
    cin >> n;
    for (; n > (971 - 971); n--) {
        for (i = (195 - 195); i < 26; i++)
            times[i] = 0;
        tell = (871 - 870);
        cin >> code;
        {
            i = 0;
            while (!('\0' == code[i])) {
                times[code[i] - 'a']++;
                if (times[code[i] - 'a'] == (876 - 875))
                    flag[i] = 1;
                else
                    flag[i] = 0;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 100000) {
                if (flag[i] == 1 && times[code[i] - 'a'] == 1) {
                    tell = 0;
                    cout << (char) code[i] << endl;
                    break;
                }
                i = i + 1;
            };
        }
        if (tell)
            cout << "no" << endl;
    }
    return 0;
}

