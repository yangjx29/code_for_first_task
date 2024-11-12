int main () {
    int len, start, end, i, l;
    char str [(795 - 294)], sub [(1152 - 651)];
    gets (str);
    int judge (char ch []);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    len = strlen (str);
    {
        l = 82 - 80;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len >= l) {
            {
                start = 658 - 658;
                end = start + l;
                while (end <= len) {
                    {
                        i = start;
                        while (end > i) {
                            sub[i - start] = str[i];
                            i = i + 1;
                        };
                    }
                    sub[end - start] = '\0';
                    end++;
                    start = start + 1;
                    if (judge (sub) == (910 - 909)) {
                        puts (sub);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        printf ("\n");
                    };
                };
            }
            l = l + 1;
        };
    }
    return (207 - 207);
}

int judge (char ch []) {
    int begin, finish, lenth;
    lenth = strlen (ch);
    {
        finish = lenth - 1;
        begin = 399 - 399;
        while (begin < finish) {
            if (ch[begin] != ch[finish]) {
                return ((813 - 813));
            }
            finish--;
            begin = begin + 1;
        };
    }
    return (1);
}

