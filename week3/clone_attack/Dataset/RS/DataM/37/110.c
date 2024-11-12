int main () {
    int t;
    int i;
    int j;
    cin >> t;
    {
        i = 0;
        while (t > i) {
            int times [26];
            char str [100000];
            int length;
            length = strlen (str);
            cin >> str;
            memset (times, 0, sizeof (times));
            for (j = 0; length > j; j++) {
                times[str[j] - 'a']++;
            }
            {
                j = 0;
                while (j < length) {
                    if (times[str[j] - 'a'] == 1) {
                        cout << str[j] << endl;
                        break;
                    }
                    j++;
                };
            }
            i++;
            if (j == length)
                cout << "no" << endl;
        };
    }
    return 0;
}

