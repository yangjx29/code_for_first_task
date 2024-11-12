int main () {
    char str [101], label [101];
    for (; cin >> str;) {
        int pos [101];
        int len = strlen (str);
        int bwlYACW6BgdE = 0, right = 0;
        int pos_i;
        pos_i = -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int fibz7Zfu;
        {
            fibz7Zfu = 0;
            while (len - 1 >= fibz7Zfu) {
                label[fibz7Zfu] = ' ';
                if (str[fibz7Zfu] == '(') {
                    bwlYACW6BgdE++;
                    pos[++pos_i] = fibz7Zfu;
                }
                if (str[fibz7Zfu] == ')') {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (bwlYACW6BgdE <= right) {
                        label[fibz7Zfu] = '?';
                    }
                    else {
                        right++;
                        pos_i = pos_i - 1;
                    };
                }
                fibz7Zfu++;
            };
        }
        if (pos_i >= 0) {
            for (fibz7Zfu = 0; fibz7Zfu <= pos_i; fibz7Zfu = fibz7Zfu + 1) {
                label[pos[fibz7Zfu]] = '$';
            };
        }
        label[len] = '\0';
        cout << str << endl;
        cout << label << endl;
    }
    return 0;
}

